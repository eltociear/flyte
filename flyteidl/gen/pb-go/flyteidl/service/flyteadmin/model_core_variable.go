/*
 * flyteidl/service/admin.proto
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: version not set
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package flyteadmin

// Defines a strongly typed variable.
type CoreVariable struct {
	// Variable literal type.
	Type_ *CoreLiteralType `json:"type,omitempty"`
	Description string `json:"description,omitempty"`
}
