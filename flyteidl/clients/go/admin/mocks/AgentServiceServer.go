// Code generated by mockery v1.0.1. DO NOT EDIT.

package mocks

import (
	context "context"

	admin "github.com/flyteorg/flyteidl/gen/pb-go/flyteidl/admin"

	mock "github.com/stretchr/testify/mock"
)

// AgentServiceServer is an autogenerated mock type for the AgentServiceServer type
type AgentServiceServer struct {
	mock.Mock
}

type AgentServiceServer_CreateTask struct {
	*mock.Call
}

func (_m AgentServiceServer_CreateTask) Return(_a0 *admin.CreateTaskResponse, _a1 error) *AgentServiceServer_CreateTask {
	return &AgentServiceServer_CreateTask{Call: _m.Call.Return(_a0, _a1)}
}

func (_m *AgentServiceServer) OnCreateTask(_a0 context.Context, _a1 *admin.CreateTaskRequest) *AgentServiceServer_CreateTask {
	c_call := _m.On("CreateTask", _a0, _a1)
	return &AgentServiceServer_CreateTask{Call: c_call}
}

func (_m *AgentServiceServer) OnCreateTaskMatch(matchers ...interface{}) *AgentServiceServer_CreateTask {
	c_call := _m.On("CreateTask", matchers...)
	return &AgentServiceServer_CreateTask{Call: c_call}
}

// CreateTask provides a mock function with given fields: _a0, _a1
func (_m *AgentServiceServer) CreateTask(_a0 context.Context, _a1 *admin.CreateTaskRequest) (*admin.CreateTaskResponse, error) {
	ret := _m.Called(_a0, _a1)

	var r0 *admin.CreateTaskResponse
	if rf, ok := ret.Get(0).(func(context.Context, *admin.CreateTaskRequest) *admin.CreateTaskResponse); ok {
		r0 = rf(_a0, _a1)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(*admin.CreateTaskResponse)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(context.Context, *admin.CreateTaskRequest) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

type AgentServiceServer_DeleteTask struct {
	*mock.Call
}

func (_m AgentServiceServer_DeleteTask) Return(_a0 *admin.DeleteTaskResponse, _a1 error) *AgentServiceServer_DeleteTask {
	return &AgentServiceServer_DeleteTask{Call: _m.Call.Return(_a0, _a1)}
}

func (_m *AgentServiceServer) OnDeleteTask(_a0 context.Context, _a1 *admin.DeleteTaskRequest) *AgentServiceServer_DeleteTask {
	c_call := _m.On("DeleteTask", _a0, _a1)
	return &AgentServiceServer_DeleteTask{Call: c_call}
}

func (_m *AgentServiceServer) OnDeleteTaskMatch(matchers ...interface{}) *AgentServiceServer_DeleteTask {
	c_call := _m.On("DeleteTask", matchers...)
	return &AgentServiceServer_DeleteTask{Call: c_call}
}

// DeleteTask provides a mock function with given fields: _a0, _a1
func (_m *AgentServiceServer) DeleteTask(_a0 context.Context, _a1 *admin.DeleteTaskRequest) (*admin.DeleteTaskResponse, error) {
	ret := _m.Called(_a0, _a1)

	var r0 *admin.DeleteTaskResponse
	if rf, ok := ret.Get(0).(func(context.Context, *admin.DeleteTaskRequest) *admin.DeleteTaskResponse); ok {
		r0 = rf(_a0, _a1)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(*admin.DeleteTaskResponse)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(context.Context, *admin.DeleteTaskRequest) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}

type AgentServiceServer_GetTask struct {
	*mock.Call
}

func (_m AgentServiceServer_GetTask) Return(_a0 *admin.GetTaskResponse, _a1 error) *AgentServiceServer_GetTask {
	return &AgentServiceServer_GetTask{Call: _m.Call.Return(_a0, _a1)}
}

func (_m *AgentServiceServer) OnGetTask(_a0 context.Context, _a1 *admin.GetTaskRequest) *AgentServiceServer_GetTask {
	c_call := _m.On("GetTask", _a0, _a1)
	return &AgentServiceServer_GetTask{Call: c_call}
}

func (_m *AgentServiceServer) OnGetTaskMatch(matchers ...interface{}) *AgentServiceServer_GetTask {
	c_call := _m.On("GetTask", matchers...)
	return &AgentServiceServer_GetTask{Call: c_call}
}

// GetTask provides a mock function with given fields: _a0, _a1
func (_m *AgentServiceServer) GetTask(_a0 context.Context, _a1 *admin.GetTaskRequest) (*admin.GetTaskResponse, error) {
	ret := _m.Called(_a0, _a1)

	var r0 *admin.GetTaskResponse
	if rf, ok := ret.Get(0).(func(context.Context, *admin.GetTaskRequest) *admin.GetTaskResponse); ok {
		r0 = rf(_a0, _a1)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(*admin.GetTaskResponse)
		}
	}

	var r1 error
	if rf, ok := ret.Get(1).(func(context.Context, *admin.GetTaskRequest) error); ok {
		r1 = rf(_a0, _a1)
	} else {
		r1 = ret.Error(1)
	}

	return r0, r1
}
