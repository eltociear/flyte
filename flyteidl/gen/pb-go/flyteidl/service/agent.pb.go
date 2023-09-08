// Code generated by protoc-gen-go. DO NOT EDIT.
// source: flyteidl/service/agent.proto

package service

import (
	context "context"
	fmt "fmt"
	admin "github.com/flyteorg/flyteidl/gen/pb-go/flyteidl/admin"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

func init() { proto.RegisterFile("flyteidl/service/agent.proto", fileDescriptor_f7d1dfd1fb77d2ef) }

var fileDescriptor_f7d1dfd1fb77d2ef = []byte{
	// 212 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x92, 0x49, 0xcb, 0xa9, 0x2c,
	0x49, 0xcd, 0x4c, 0xc9, 0xd1, 0x2f, 0x4e, 0x2d, 0x2a, 0xcb, 0x4c, 0x4e, 0xd5, 0x4f, 0x4c, 0x4f,
	0xcd, 0x2b, 0xd1, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x12, 0x80, 0xc9, 0xea, 0x41, 0x65, 0xa5,
	0xa4, 0xe0, 0xea, 0x13, 0x53, 0x72, 0x33, 0xf3, 0x90, 0x55, 0x1b, 0xf5, 0x33, 0x71, 0x09, 0x3a,
	0x16, 0x57, 0xe6, 0x25, 0x3b, 0x82, 0x04, 0x83, 0x21, 0x3a, 0x84, 0x42, 0xb9, 0xb8, 0x9c, 0x8b,
	0x52, 0x13, 0x4b, 0x52, 0x43, 0x12, 0x8b, 0xb3, 0x85, 0x14, 0xf5, 0xe0, 0x46, 0x82, 0x0d, 0xd0,
	0x43, 0xc8, 0x05, 0xa5, 0x16, 0x96, 0xa6, 0x16, 0x97, 0x48, 0x29, 0xe1, 0x53, 0x52, 0x5c, 0x90,
	0x9f, 0x57, 0x9c, 0xaa, 0xc4, 0x20, 0xe4, 0xc3, 0xc5, 0xee, 0x9e, 0x5a, 0x02, 0x36, 0x53, 0x0e,
	0x5d, 0x03, 0x54, 0x02, 0x66, 0xa0, 0x3c, 0x4e, 0x79, 0xb8, 0x69, 0xa1, 0x5c, 0x5c, 0x2e, 0xa9,
	0x39, 0xa9, 0xb8, 0x1c, 0x89, 0x90, 0xc3, 0xe9, 0x48, 0x64, 0x25, 0x30, 0x63, 0x9d, 0x2c, 0xa3,
	0xcc, 0xd3, 0x33, 0x4b, 0x32, 0x4a, 0x93, 0xf4, 0x92, 0xf3, 0x73, 0xf5, 0xc1, 0x3a, 0xf2, 0x8b,
	0xd2, 0xf5, 0xe1, 0x61, 0x98, 0x9e, 0x9a, 0xa7, 0x5f, 0x90, 0xa4, 0x9b, 0x9e, 0xaf, 0x8f, 0x1e,
	0x0d, 0x49, 0x6c, 0xe0, 0x30, 0x35, 0x06, 0x04, 0x00, 0x00, 0xff, 0xff, 0x38, 0xbf, 0x55, 0xcc,
	0xa1, 0x01, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// AsyncAgentServiceClient is the client API for AsyncAgentService service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type AsyncAgentServiceClient interface {
	// Send a task create request to the agent server.
	CreateTask(ctx context.Context, in *admin.CreateTaskRequest, opts ...grpc.CallOption) (*admin.CreateTaskResponse, error)
	// Get job status.
	GetTask(ctx context.Context, in *admin.GetTaskRequest, opts ...grpc.CallOption) (*admin.GetTaskResponse, error)
	// Delete the task resource.
	DeleteTask(ctx context.Context, in *admin.DeleteTaskRequest, opts ...grpc.CallOption) (*admin.DeleteTaskResponse, error)
}

type asyncAgentServiceClient struct {
	cc *grpc.ClientConn
}

func NewAsyncAgentServiceClient(cc *grpc.ClientConn) AsyncAgentServiceClient {
	return &asyncAgentServiceClient{cc}
}

func (c *asyncAgentServiceClient) CreateTask(ctx context.Context, in *admin.CreateTaskRequest, opts ...grpc.CallOption) (*admin.CreateTaskResponse, error) {
	out := new(admin.CreateTaskResponse)
	err := c.cc.Invoke(ctx, "/flyteidl.service.AsyncAgentService/CreateTask", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *asyncAgentServiceClient) GetTask(ctx context.Context, in *admin.GetTaskRequest, opts ...grpc.CallOption) (*admin.GetTaskResponse, error) {
	out := new(admin.GetTaskResponse)
	err := c.cc.Invoke(ctx, "/flyteidl.service.AsyncAgentService/GetTask", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *asyncAgentServiceClient) DeleteTask(ctx context.Context, in *admin.DeleteTaskRequest, opts ...grpc.CallOption) (*admin.DeleteTaskResponse, error) {
	out := new(admin.DeleteTaskResponse)
	err := c.cc.Invoke(ctx, "/flyteidl.service.AsyncAgentService/DeleteTask", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// AsyncAgentServiceServer is the server API for AsyncAgentService service.
type AsyncAgentServiceServer interface {
	// Send a task create request to the agent server.
	CreateTask(context.Context, *admin.CreateTaskRequest) (*admin.CreateTaskResponse, error)
	// Get job status.
	GetTask(context.Context, *admin.GetTaskRequest) (*admin.GetTaskResponse, error)
	// Delete the task resource.
	DeleteTask(context.Context, *admin.DeleteTaskRequest) (*admin.DeleteTaskResponse, error)
}

// UnimplementedAsyncAgentServiceServer can be embedded to have forward compatible implementations.
type UnimplementedAsyncAgentServiceServer struct {
}

func (*UnimplementedAsyncAgentServiceServer) CreateTask(ctx context.Context, req *admin.CreateTaskRequest) (*admin.CreateTaskResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method CreateTask not implemented")
}
func (*UnimplementedAsyncAgentServiceServer) GetTask(ctx context.Context, req *admin.GetTaskRequest) (*admin.GetTaskResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method GetTask not implemented")
}
func (*UnimplementedAsyncAgentServiceServer) DeleteTask(ctx context.Context, req *admin.DeleteTaskRequest) (*admin.DeleteTaskResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method DeleteTask not implemented")
}

func RegisterAsyncAgentServiceServer(s *grpc.Server, srv AsyncAgentServiceServer) {
	s.RegisterService(&_AsyncAgentService_serviceDesc, srv)
}

func _AsyncAgentService_CreateTask_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(admin.CreateTaskRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(AsyncAgentServiceServer).CreateTask(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/flyteidl.service.AsyncAgentService/CreateTask",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(AsyncAgentServiceServer).CreateTask(ctx, req.(*admin.CreateTaskRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _AsyncAgentService_GetTask_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(admin.GetTaskRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(AsyncAgentServiceServer).GetTask(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/flyteidl.service.AsyncAgentService/GetTask",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(AsyncAgentServiceServer).GetTask(ctx, req.(*admin.GetTaskRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _AsyncAgentService_DeleteTask_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(admin.DeleteTaskRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(AsyncAgentServiceServer).DeleteTask(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/flyteidl.service.AsyncAgentService/DeleteTask",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(AsyncAgentServiceServer).DeleteTask(ctx, req.(*admin.DeleteTaskRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _AsyncAgentService_serviceDesc = grpc.ServiceDesc{
	ServiceName: "flyteidl.service.AsyncAgentService",
	HandlerType: (*AsyncAgentServiceServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "CreateTask",
			Handler:    _AsyncAgentService_CreateTask_Handler,
		},
		{
			MethodName: "GetTask",
			Handler:    _AsyncAgentService_GetTask_Handler,
		},
		{
			MethodName: "DeleteTask",
			Handler:    _AsyncAgentService_DeleteTask_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "flyteidl/service/agent.proto",
}
