/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

// Request to launch an execution with the given project, domain and optionally-assigned name.
type AdminExecutionCreateRequest struct {
	Project string              `json:"project,omitempty"`
	Domain  string              `json:"domain,omitempty"`
	Name    string              `json:"name,omitempty"`
	Spec    *AdminExecutionSpec `json:"spec,omitempty"`
	Inputs  *CoreLiteralMap     `json:"inputs,omitempty"`
	// Optional, org key applied to the resource.
	Org string `json:"org,omitempty"`
}
