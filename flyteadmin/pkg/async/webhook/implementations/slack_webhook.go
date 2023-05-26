package implementations

import (
	"bytes"
	"context"
	"fmt"
	"github.com/flyteorg/flyteidl/gen/pb-go/flyteidl/admin"
	"io/ioutil"
	"net/http"

	"github.com/flyteorg/flytestdlib/logger"

	"github.com/flyteorg/flyteadmin/pkg/async/webhook/interfaces"
	runtimeInterfaces "github.com/flyteorg/flyteadmin/pkg/runtime/interfaces"
	"github.com/flyteorg/flytestdlib/promutils"
)

type SlackWebhook struct {
	config        runtimeInterfaces.WebHookConfig
	systemMetrics webhookMetrics
}

func (s *SlackWebhook) Post(ctx context.Context, payload admin.WebhookPayload) error {
	// curl -X POST -H 'Content-type: application/json' --data '{"text":"Hello, World!"}' https://hooks.slack.com/services/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
	logger.Infof(ctx, "Posting to Slack with message: [%v]", payload.Message)
	webhookURL := s.config.URL
	data := []byte(fmt.Sprintf("{'text': '%s'}", payload.Message))
	request, err := http.NewRequest("POST", webhookURL, bytes.NewBuffer(data))
	if err != nil {
		logger.Errorf(ctx, "Failed to create request to Slack webhook with error: %v", err)
		return err
	}
	request.Header.Add("Content-Type", "application/json")
	client := &http.Client{}
	resp, err := client.Do(request)
	if err != nil {
		logger.Errorf(ctx, "Failed to post to Slack webhook with error: %v", err)
		return err
	}
	defer resp.Body.Close()
	if resp.StatusCode >= 400 {
		respBody, _ := ioutil.ReadAll(resp.Body)
		return fmt.Errorf("received an error response (%d): %s",
			resp.StatusCode,
			string(respBody),
		)
	}

	return nil
}

func NewSlackWebhook(config runtimeInterfaces.WebHookConfig, scope promutils.Scope) interfaces.Webhook {

	return &SlackWebhook{
		config:        config,
		systemMetrics: newWebhookMetrics(scope.NewSubScope("slack_webhook")),
	}
}
