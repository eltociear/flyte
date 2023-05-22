#!/usr/bin/env bash

set -ex

FLYTEADMIN_TAG=v1.1.100
DATACATALOG_TAG=v1.0.46
FLYTECONSOLE_TAG=v1.8.2
FLYTEPROPELLER_TAG=v1.1.91
FLYTECOPILOT_TAG=v0.0.30
FLYTESTDLIB_TAG=v1.0.17

# bump latest release of flyte component in kustomize
grep -rlZ "newTag:[^P]*# FLYTEADMIN_TAG" ./kustomize/overlays | xargs -0 sed -i "s/newTag:[^P]*# FLYTEADMIN_TAG/newTag: ${FLYTEADMIN_TAG} # FLYTEADMIN_TAG/g"
grep -rlZ "newTag:[^P]*# DATACATALOG_TAG" ./kustomize/overlays | xargs -0 sed -i "s/newTag:[^P]*# DATACATALOG_TAG/newTag: ${DATACATALOG_TAG} # DATACATALOG_TAG/g"
grep -rlZ "newTag:[^P]*# FLYTECONSOLE_TAG" ./kustomize/overlays | xargs -0 sed -i "s/newTag:[^P]*# FLYTECONSOLE_TAG/newTag: ${FLYTECONSOLE_TAG} # FLYTECONSOLE_TAG/g"
grep -rlZ "newTag:[^P]*# FLYTEPROPELLER_TAG" ./kustomize/overlays | xargs -0 sed -i "s/newTag:[^P]*# FLYTEPROPELLER_TAG/newTag: ${FLYTEPROPELLER_TAG} # FLYTEPROPELLER_TAG/g"

# bump latest release of flyte component in helm
sed -i "s,tag:[^P]*# FLYTEADMIN_TAG,tag: ${FLYTEADMIN_TAG} # FLYTEADMIN_TAG," ./charts/flyte/values.yaml
sed -i "s,tag:[^P]*# FLYTEADMIN_TAG,tag: ${FLYTEADMIN_TAG} # FLYTEADMIN_TAG," ./charts/flyte-core/values.yaml

sed -i "s,tag:[^P]*# FLYTESCHEDULER_TAG,tag: ${FLYTEADMIN_TAG} # FLYTESCHEDULER_TAG," ./charts/flyte/values.yaml
sed -i "s,tag:[^P]*# FLYTESCHEDULER_TAG,tag: ${FLYTEADMIN_TAG} # FLYTESCHEDULER_TAG," ./charts/flyte-core/values.yaml

sed -i "s,tag:[^P]*# DATACATALOG_TAG,tag: ${DATACATALOG_TAG} # DATACATALOG_TAG," ./charts/flyte/values.yaml
sed -i "s,tag:[^P]*# DATACATALOG_TAG,tag: ${DATACATALOG_TAG} # DATACATALOG_TAG," ./charts/flyte-core/values.yaml

sed -i "s,tag:[^P]*# FLYTECONSOLE_TAG,tag: ${FLYTECONSOLE_TAG} # FLYTECONSOLE_TAG," ./charts/flyte/values.yaml
sed -i "s,tag:[^P]*# FLYTECONSOLE_TAG,tag: ${FLYTECONSOLE_TAG} # FLYTECONSOLE_TAG," ./charts/flyte-core/values.yaml

sed -i "s,tag:[^P]*# FLYTEPROPELLER_TAG,tag: ${FLYTEPROPELLER_TAG} # FLYTEPROPELLER_TAG," ./charts/flyte/values.yaml
sed -i "s,tag:[^P]*# FLYTEPROPELLER_TAG,tag: ${FLYTEPROPELLER_TAG} # FLYTEPROPELLER_TAG," ./charts/flyte-core/values.yaml

sed -i "s,image:[^P]*# FLYTECOPILOT_IMAGE,image: cr.flyte.org/flyteorg/flytecopilot:${FLYTECOPILOT_TAG} # FLYTECOPILOT_IMAGE," ./charts/flyte/values.yaml
sed -i "s,image:[^P]*# FLYTECOPILOT_IMAGE,image: cr.flyte.org/flyteorg/flytecopilot:${FLYTECOPILOT_TAG} # FLYTECOPILOT_IMAGE," ./charts/flyte-core/values.yaml
sed -i "s,tag:[^P]*# FLYTECOPILOT_TAG,tag: ${FLYTECOPILOT_TAG} # FLYTECOPILOT_TAG," ./charts/flyte-binary/values.yaml

go get github.com/flyteorg/flyteadmin@${FLYTEADMIN_TAG}
go get github.com/flyteorg/flytepropeller@${FLYTEPROPELLER_TAG}
go get github.com/flyteorg/datacatalog@${DATACATALOG_TAG}
go get github.com/flyteorg/flytestdlib@${FLYTESTDLIB_TAG}
go mod tidy
