// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/service/admin.proto

package flyteidl.service;

public final class Admin {
  private Admin() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\034flyteidl/service/admin.proto\022\020flyteidl" +
      ".service\032\034google/api/annotations.proto\032\034" +
      "flyteidl/admin/project.proto\032.flyteidl/a" +
      "dmin/project_domain_attributes.proto\032\031fl" +
      "yteidl/admin/task.proto\032\035flyteidl/admin/" +
      "workflow.proto\032(flyteidl/admin/workflow_" +
      "attributes.proto\032 flyteidl/admin/launch_" +
      "plan.proto\032\032flyteidl/admin/event.proto\032\036" +
      "flyteidl/admin/execution.proto\032\'flyteidl" +
      "/admin/matchable_resource.proto\032#flyteid" +
      "l/admin/node_execution.proto\032#flyteidl/a" +
      "dmin/task_execution.proto\032\033flyteidl/admi" +
      "n/common.proto\032,protoc-gen-swagger/optio" +
      "ns/annotations.proto2\331^\n\014AdminService\022\305\002" +
      "\n\nCreateTask\022!.flyteidl.admin.TaskCreate" +
      "Request\032\".flyteidl.admin.TaskCreateRespo" +
      "nse\"\357\001\202\323\344\223\002\022\"\r/api/v1/tasks:\001*\222A\323\001\032&Crea" +
      "te and register a task definition.JB\n\00340" +
      "0\022;\n9Returned for bad request that may h" +
      "ave failed validation.Je\n\003409\022^\n\\Returne" +
      "d for a request that references an ident" +
      "ical entity that has already been regist" +
      "ered.\022\262\001\n\007GetTask\022 .flyteidl.admin.Objec" +
      "tGetRequest\032\024.flyteidl.admin.Task\"o\202\323\344\223\002" +
      "?\022=/api/v1/tasks/{id.project}/{id.domain" +
      "}/{id.name}/{id.version}\222A\'\032%Retrieve an" +
      " existing task definition.\022\336\001\n\013ListTaskI" +
      "ds\0220.flyteidl.admin.NamedEntityIdentifie" +
      "rListRequest\032).flyteidl.admin.NamedEntit" +
      "yIdentifierList\"r\202\323\344\223\002%\022#/api/v1/task_id" +
      "s/{project}/{domain}\222AD\032BFetch existing " +
      "task definition identifiers matching inp" +
      "ut filters.\022\353\001\n\tListTasks\022#.flyteidl.adm" +
      "in.ResourceListRequest\032\030.flyteidl.admin." +
      "TaskList\"\236\001\202\323\344\223\002\\\0220/api/v1/tasks/{id.pro" +
      "ject}/{id.domain}/{id.name}Z(\022&/api/v1/t" +
      "asks/{id.project}/{id.domain}\222A9\0327Fetch " +
      "existing task definitions matching input" +
      " filters.\022\331\002\n\016CreateWorkflow\022%.flyteidl." +
      "admin.WorkflowCreateRequest\032&.flyteidl.a" +
      "dmin.WorkflowCreateResponse\"\367\001\202\323\344\223\002\026\"\021/a" +
      "pi/v1/workflows:\001*\222A\327\001\032*Create and regis" +
      "ter a workflow definition.JB\n\003400\022;\n9Ret" +
      "urned for bad request that may have fail" +
      "ed validation.Je\n\003409\022^\n\\Returned for a " +
      "request that references an identical ent" +
      "ity that has already been registered.\022\302\001" +
      "\n\013GetWorkflow\022 .flyteidl.admin.ObjectGet" +
      "Request\032\030.flyteidl.admin.Workflow\"w\202\323\344\223\002" +
      "C\022A/api/v1/workflows/{id.project}/{id.do" +
      "main}/{id.name}/{id.version}\222A+\032)Retriev" +
      "e an existing workflow definition.\022\355\001\n\017L" +
      "istWorkflowIds\0220.flyteidl.admin.NamedEnt" +
      "ityIdentifierListRequest\032).flyteidl.admi" +
      "n.NamedEntityIdentifierList\"}\202\323\344\223\002)\022\'/ap" +
      "i/v1/workflow_ids/{project}/{domain}\222AK\032" +
      "IFetch an existing workflow definition i" +
      "dentifiers matching input filters.\022\377\001\n\rL" +
      "istWorkflows\022#.flyteidl.admin.ResourceLi" +
      "stRequest\032\034.flyteidl.admin.WorkflowList\"" +
      "\252\001\202\323\344\223\002d\0224/api/v1/workflows/{id.project}" +
      "/{id.domain}/{id.name}Z,\022*/api/v1/workfl" +
      "ows/{id.project}/{id.domain}\222A=\032;Fetch e" +
      "xisting workflow definitions matching in" +
      "put filters.\022\345\002\n\020CreateLaunchPlan\022\'.flyt" +
      "eidl.admin.LaunchPlanCreateRequest\032(.fly" +
      "teidl.admin.LaunchPlanCreateResponse\"\375\001\202" +
      "\323\344\223\002\031\"\024/api/v1/launch_plans:\001*\222A\332\001\032-Crea" +
      "te and register a launch plan definition" +
      ".JB\n\003400\022;\n9Returned for bad request tha" +
      "t may have failed validation.Je\n\003409\022^\n\\" +
      "Returned for a request that references a" +
      "n identical entity that has already been" +
      " registered.\022\314\001\n\rGetLaunchPlan\022 .flyteid" +
      "l.admin.ObjectGetRequest\032\032.flyteidl.admi" +
      "n.LaunchPlan\"}\202\323\344\223\002F\022D/api/v1/launch_pla" +
      "ns/{id.project}/{id.domain}/{id.name}/{i" +
      "d.version}\222A.\032,Retrieve an existing laun" +
      "ch plan definition.\022\363\001\n\023GetActiveLaunchP" +
      "lan\022\'.flyteidl.admin.ActiveLaunchPlanReq" +
      "uest\032\032.flyteidl.admin.LaunchPlan\"\226\001\202\323\344\223\002" +
      "@\022>/api/v1/active_launch_plans/{id.proje" +
      "ct}/{id.domain}/{id.name}\222AM\032KRetrieve t" +
      "he active launch plan version specified " +
      "by input request filters.\022\353\001\n\025ListActive" +
      "LaunchPlans\022+.flyteidl.admin.ActiveLaunc" +
      "hPlanListRequest\032\036.flyteidl.admin.Launch" +
      "PlanList\"\204\001\202\323\344\223\0020\022./api/v1/active_launch" +
      "_plans/{project}/{domain}\222AK\032IFetch the " +
      "active launch plan versions specified by" +
      " input request filters.\022\363\001\n\021ListLaunchPl" +
      "anIds\0220.flyteidl.admin.NamedEntityIdenti" +
      "fierListRequest\032).flyteidl.admin.NamedEn" +
      "tityIdentifierList\"\200\001\202\323\344\223\002,\022*/api/v1/lau" +
      "nch_plan_ids/{project}/{domain}\222AK\032IFetc" +
      "h existing launch plan definition identi" +
      "fiers matching input filters.\022\214\002\n\017ListLa" +
      "unchPlans\022#.flyteidl.admin.ResourceListR" +
      "equest\032\036.flyteidl.admin.LaunchPlanList\"\263" +
      "\001\202\323\344\223\002j\0227/api/v1/launch_plans/{id.projec" +
      "t}/{id.domain}/{id.name}Z/\022-/api/v1/laun" +
      "ch_plans/{id.project}/{id.domain}\222A@\032>Fe" +
      "tch existing launch plan definitions mat" +
      "ching input filters.\022\300\006\n\020UpdateLaunchPla" +
      "n\022\'.flyteidl.admin.LaunchPlanUpdateReque" +
      "st\032(.flyteidl.admin.LaunchPlanUpdateResp" +
      "onse\"\330\005\202\323\344\223\002I\032D/api/v1/launch_plans/{id." +
      "project}/{id.domain}/{id.name}/{id.versi" +
      "on}:\001*\222A\205\005\032\202\005Update the status of an exi" +
      "sting launch plan definition. At most on" +
      "e launch plan version for a given {proje" +
      "ct, domain, name} can be active at a tim" +
      "e. If this call sets a launch plan to ac" +
      "tive and existing version is already act" +
      "ive, the result of this call will be tha" +
      "t the formerly active launch plan will b" +
      "e made inactive and specified launch pla" +
      "n in this request will be made active. I" +
      "n the event that the formerly active lau" +
      "nch plan had a schedule associated it wi" +
      "th it, this schedule will be disabled. I" +
      "f the reference launch plan in this requ" +
      "est is being set to active and has a sch" +
      "edule associated with it, the schedule w" +
      "ill be enabled.\022\242\001\n\017CreateExecution\022&.fl" +
      "yteidl.admin.ExecutionCreateRequest\032\'.fl" +
      "yteidl.admin.ExecutionCreateResponse\">\202\323" +
      "\344\223\002\027\"\022/api/v1/executions:\001*\222A\036\032\034Create a" +
      " workflow execution.\022\261\001\n\021RelaunchExecuti" +
      "on\022(.flyteidl.admin.ExecutionRelaunchReq" +
      "uest\032\'.flyteidl.admin.ExecutionCreateRes" +
      "ponse\"I\202\323\344\223\002 \"\033/api/v1/executions/relaun" +
      "ch:\001*\222A \032\036Relaunch a workflow execution." +
      "\022\302\001\n\014GetExecution\022+.flyteidl.admin.Workf" +
      "lowExecutionGetRequest\032\031.flyteidl.admin." +
      "Execution\"j\202\323\344\223\0027\0225/api/v1/executions/{i" +
      "d.project}/{id.domain}/{id.name}\222A*\032(Ret" +
      "rieve an existing workflow execution.\022\202\002" +
      "\n\020GetExecutionData\022/.flyteidl.admin.Work" +
      "flowExecutionGetDataRequest\0320.flyteidl.a" +
      "dmin.WorkflowExecutionGetDataResponse\"\212\001" +
      "\202\323\344\223\002<\022:/api/v1/data/executions/{id.proj" +
      "ect}/{id.domain}/{id.name}\222AE\032CRetrieve " +
      "input and output data from an existing w" +
      "orkflow execution.\022\310\001\n\016ListExecutions\022#." +
      "flyteidl.admin.ResourceListRequest\032\035.fly" +
      "teidl.admin.ExecutionList\"r\202\323\344\223\002-\022+/api/" +
      "v1/executions/{id.project}/{id.domain}\222A" +
      "<\032:Fetch existing workflow executions ma" +
      "tching input filters.\022\364\001\n\022TerminateExecu" +
      "tion\022).flyteidl.admin.ExecutionTerminate" +
      "Request\032*.flyteidl.admin.ExecutionTermin" +
      "ateResponse\"\206\001\202\323\344\223\002:*5/api/v1/executions" +
      "/{id.project}/{id.domain}/{id.name}:\001*\222A" +
      "C\032ATerminate the active workflow executi" +
      "on specified in the request.\022\374\001\n\020GetNode" +
      "Execution\022\'.flyteidl.admin.NodeExecution" +
      "GetRequest\032\035.flyteidl.admin.NodeExecutio" +
      "n\"\237\001\202\323\344\223\002p\022n/api/v1/node_executions/{id." +
      "execution_id.project}/{id.execution_id.d" +
      "omain}/{id.execution_id.name}/{id.node_i" +
      "d}\222A&\032$Retrieve an existing node executi" +
      "on.\022\232\002\n\022ListNodeExecutions\022(.flyteidl.ad" +
      "min.NodeExecutionListRequest\032!.flyteidl." +
      "admin.NodeExecutionList\"\266\001\202\323\344\223\002u\022s/api/v" +
      "1/node_executions/{workflow_execution_id" +
      ".project}/{workflow_execution_id.domain}" +
      "/{workflow_execution_id.name}\222A8\0326Fetch " +
      "existing node executions matching input " +
      "filters.\022\357\004\n\031ListNodeExecutionsForTask\022/" +
      ".flyteidl.admin.NodeExecutionForTaskList" +
      "Request\032!.flyteidl.admin.NodeExecutionLi" +
      "st\"\375\003\202\323\344\223\002\254\003\022\251\003/api/v1/children/task_exe" +
      "cutions/{task_execution_id.node_executio" +
      "n_id.execution_id.project}/{task_executi" +
      "on_id.node_execution_id.execution_id.dom" +
      "ain}/{task_execution_id.node_execution_i" +
      "d.execution_id.name}/{task_execution_id." +
      "node_execution_id.node_id}/{task_executi" +
      "on_id.task_id.project}/{task_execution_i" +
      "d.task_id.domain}/{task_execution_id.tas" +
      "k_id.name}/{task_execution_id.task_id.ve" +
      "rsion}/{task_execution_id.retry_attempt}" +
      "\222AG\032EFetch child node executions launche" +
      "d by the specified task execution.\022\263\002\n\024G" +
      "etNodeExecutionData\022+.flyteidl.admin.Nod" +
      "eExecutionGetDataRequest\032,.flyteidl.admi" +
      "n.NodeExecutionGetDataResponse\"\277\001\202\323\344\223\002u\022" +
      "s/api/v1/data/node_executions/{id.execut" +
      "ion_id.project}/{id.execution_id.domain}" +
      "/{id.execution_id.name}/{id.node_id}\222AA\032" +
      "?Retrieve input and output data from an " +
      "existing node execution.\022\227\001\n\017RegisterPro" +
      "ject\022&.flyteidl.admin.ProjectRegisterReq" +
      "uest\032\'.flyteidl.admin.ProjectRegisterRes" +
      "ponse\"3\202\323\344\223\002\025\"\020/api/v1/projects:\001*\222A\025\032\023R" +
      "egister a project.\022\205\001\n\014ListProjects\022\".fl" +
      "yteidl.admin.ProjectListRequest\032\030.flytei" +
      "dl.admin.Projects\"7\202\323\344\223\002\022\022\020/api/v1/proje" +
      "cts\222A\034\032\032Fetch registered projects.\022\335\001\n\023C" +
      "reateWorkflowEvent\022-.flyteidl.admin.Work" +
      "flowExecutionEventRequest\032..flyteidl.adm" +
      "in.WorkflowExecutionEventResponse\"g\202\323\344\223\002" +
      "\035\"\030/api/v1/events/workflows:\001*\222AA\032?Creat" +
      "e a workflow execution event recording a" +
      " phase transition.\022\311\001\n\017CreateNodeEvent\022)" +
      ".flyteidl.admin.NodeExecutionEventReques" +
      "t\032*.flyteidl.admin.NodeExecutionEventRes" +
      "ponse\"_\202\323\344\223\002\031\"\024/api/v1/events/nodes:\001*\222A" +
      "=\032;Create a node execution event recordi" +
      "ng a phase transition.\022\311\001\n\017CreateTaskEve" +
      "nt\022).flyteidl.admin.TaskExecutionEventRe" +
      "quest\032*.flyteidl.admin.TaskExecutionEven" +
      "tResponse\"_\202\323\344\223\002\031\"\024/api/v1/events/tasks:" +
      "\001*\222A=\032;Create a task execution event rec" +
      "ording a phase transition.\022\251\003\n\020GetTaskEx" +
      "ecution\022\'.flyteidl.admin.TaskExecutionGe" +
      "tRequest\032\035.flyteidl.admin.TaskExecution\"" +
      "\314\002\202\323\344\223\002\234\002\022\231\002/api/v1/task_executions/{id." +
      "node_execution_id.execution_id.project}/" +
      "{id.node_execution_id.execution_id.domai" +
      "n}/{id.node_execution_id.execution_id.na" +
      "me}/{id.node_execution_id.node_id}/{id.t" +
      "ask_id.project}/{id.task_id.domain}/{id." +
      "task_id.name}/{id.task_id.version}/{id.r" +
      "etry_attempt}\222A&\032$Retrieve an existing t" +
      "ask execution.\022\323\002\n\022ListTaskExecutions\022(." +
      "flyteidl.admin.TaskExecutionListRequest\032" +
      "!.flyteidl.admin.TaskExecutionList\"\357\001\202\323\344" +
      "\223\002\255\001\022\252\001/api/v1/task_executions/{node_exe" +
      "cution_id.execution_id.project}/{node_ex" +
      "ecution_id.execution_id.domain}/{node_ex" +
      "ecution_id.execution_id.name}/{node_exec" +
      "ution_id.node_id}\222A8\0326Fetch existing tas" +
      "k executions matching input filters.\022\340\003\n" +
      "\024GetTaskExecutionData\022+.flyteidl.admin.T" +
      "askExecutionGetDataRequest\032,.flyteidl.ad" +
      "min.TaskExecutionGetDataResponse\"\354\002\202\323\344\223\002" +
      "\241\002\022\236\002/api/v1/data/task_executions/{id.no" +
      "de_execution_id.execution_id.project}/{i" +
      "d.node_execution_id.execution_id.domain}" +
      "/{id.node_execution_id.execution_id.name" +
      "}/{id.node_execution_id.node_id}/{id.tas" +
      "k_id.project}/{id.task_id.domain}/{id.ta" +
      "sk_id.name}/{id.task_id.version}/{id.ret" +
      "ry_attempt}\222AA\032?Retrieve input and outpu" +
      "t data from an existing task execution.\022" +
      "\277\002\n\035UpdateProjectDomainAttributes\0224.flyt" +
      "eidl.admin.ProjectDomainAttributesUpdate" +
      "Request\0325.flyteidl.admin.ProjectDomainAt" +
      "tributesUpdateResponse\"\260\001\202\323\344\223\002O\032J/api/v1" +
      "/project_domain_attributes/{attributes.p" +
      "roject}/{attributes.domain}:\001*\222AX\032VUpdat" +
      "e the customized resource attributes ass" +
      "ociated with a project-domain combinatio" +
      "n\022\237\002\n\032GetProjectDomainAttributes\0221.flyte" +
      "idl.admin.ProjectDomainAttributesGetRequ" +
      "est\0322.flyteidl.admin.ProjectDomainAttrib" +
      "utesGetResponse\"\231\001\202\323\344\223\0026\0224/api/v1/projec" +
      "t_domain_attributes/{project}/{domain}\222A" +
      "Z\032XRetrieve the customized resource attr" +
      "ibutes associated with a project-domain " +
      "combination\022\251\002\n\035DeleteProjectDomainAttri" +
      "butes\0224.flyteidl.admin.ProjectDomainAttr" +
      "ibutesDeleteRequest\0325.flyteidl.admin.Pro" +
      "jectDomainAttributesDeleteResponse\"\232\001\202\323\344" +
      "\223\0029*4/api/v1/project_domain_attributes/{" +
      "project}/{domain}:\001*\222AX\032VDelete the cust" +
      "omized resource attributes associated wi" +
      "th a project-domain combination\022\316\002\n\030Upda" +
      "teWorkflowAttributes\022/.flyteidl.admin.Wo" +
      "rkflowAttributesUpdateRequest\0320.flyteidl" +
      ".admin.WorkflowAttributesUpdateResponse\"" +
      "\316\001\202\323\344\223\002_\032Z/api/v1/workflow_attributes/{a" +
      "ttributes.project}/{attributes.domain}/{" +
      "attributes.workflow}:\001*\222Af\032dUpdate the c" +
      "ustomized resource attributes associated" +
      " with a project, domain and workflow com" +
      "bination\022\243\002\n\025GetWorkflowAttributes\022,.fly" +
      "teidl.admin.WorkflowAttributesGetRequest" +
      "\032-.flyteidl.admin.WorkflowAttributesGetR" +
      "esponse\"\254\001\202\323\344\223\002;\0229/api/v1/workflow_attri" +
      "butes/{project}/{domain}/{workflow}\222Ah\032f" +
      "Retrieve the customized resource attribu" +
      "tes associated with a project, domain an" +
      "d workflow combination\022\255\002\n\030DeleteWorkflo" +
      "wAttributes\022/.flyteidl.admin.WorkflowAtt" +
      "ributesDeleteRequest\0320.flyteidl.admin.Wo" +
      "rkflowAttributesDeleteResponse\"\255\001\202\323\344\223\002>*" +
      "9/api/v1/workflow_attributes/{project}/{" +
      "domain}/{workflow}:\001*\222Af\032dDelete the cus" +
      "tomized resource attributes associated w" +
      "ith a project, domain and workflow combi" +
      "nation\022\341\001\n\027ListMatchableAttributes\022..fly" +
      "teidl.admin.ListMatchableAttributesReque" +
      "st\032/.flyteidl.admin.ListMatchableAttribu" +
      "tesResponse\"e\202\323\344\223\002\036\022\034/api/v1/matchable_a" +
      "ttributes\222A>\032<Retrieve a list of Matchab" +
      "leAttributesConfiguration objects.\022\200\002\n\021L" +
      "istNamedEntities\022&.flyteidl.admin.NamedE" +
      "ntityListRequest\032\037.flyteidl.admin.NamedE" +
      "ntityList\"\241\001\202\323\344\223\002;\0229/api/v1/named_entiti" +
      "es/{resource_type}/{project}/{domain}\222A]" +
      "\032[Retrieve a list of NamedEntity objects" +
      " sharing a common resource type, project" +
      ", and domain.\022\312\001\n\016GetNamedEntity\022%.flyte" +
      "idl.admin.NamedEntityGetRequest\032\033.flytei" +
      "dl.admin.NamedEntity\"t\202\323\344\223\002K\022I/api/v1/na" +
      "med_entities/{resource_type}/{id.project" +
      "}/{id.domain}/{id.name}\222A \032\036Retrieve a N" +
      "amedEntity object.\022\363\001\n\021UpdateNamedEntity" +
      "\022(.flyteidl.admin.NamedEntityUpdateReque" +
      "st\032).flyteidl.admin.NamedEntityUpdateRes" +
      "ponse\"\210\001\202\323\344\223\002N\032I/api/v1/named_entities/{" +
      "resource_type}/{id.project}/{id.domain}/" +
      "{id.name}:\001*\222A1\032/Update the fields assoc" +
      "iated with a NamedEntityB5Z3github.com/l" +
      "yft/flyteidl/gen/pb-go/flyteidl/serviceb" +
      "\006proto3"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          com.google.api.AnnotationsProto.getDescriptor(),
          flyteidl.admin.ProjectOuterClass.getDescriptor(),
          flyteidl.admin.ProjectDomainAttributesOuterClass.getDescriptor(),
          flyteidl.admin.TaskOuterClass.getDescriptor(),
          flyteidl.admin.WorkflowOuterClass.getDescriptor(),
          flyteidl.admin.WorkflowAttributesOuterClass.getDescriptor(),
          flyteidl.admin.LaunchPlanOuterClass.getDescriptor(),
          flyteidl.admin.Event.getDescriptor(),
          flyteidl.admin.ExecutionOuterClass.getDescriptor(),
          flyteidl.admin.MatchableResourceOuterClass.getDescriptor(),
          flyteidl.admin.NodeExecutionOuterClass.getDescriptor(),
          flyteidl.admin.TaskExecutionOuterClass.getDescriptor(),
          flyteidl.admin.Common.getDescriptor(),
          grpc.gateway.protoc_gen_swagger.options.Annotations.getDescriptor(),
        }, assigner);
    com.google.protobuf.ExtensionRegistry registry =
        com.google.protobuf.ExtensionRegistry.newInstance();
    registry.add(com.google.api.AnnotationsProto.http);
    registry.add(grpc.gateway.protoc_gen_swagger.options.Annotations.openapiv2Operation);
    com.google.protobuf.Descriptors.FileDescriptor
        .internalUpdateFileDescriptor(descriptor, registry);
    com.google.api.AnnotationsProto.getDescriptor();
    flyteidl.admin.ProjectOuterClass.getDescriptor();
    flyteidl.admin.ProjectDomainAttributesOuterClass.getDescriptor();
    flyteidl.admin.TaskOuterClass.getDescriptor();
    flyteidl.admin.WorkflowOuterClass.getDescriptor();
    flyteidl.admin.WorkflowAttributesOuterClass.getDescriptor();
    flyteidl.admin.LaunchPlanOuterClass.getDescriptor();
    flyteidl.admin.Event.getDescriptor();
    flyteidl.admin.ExecutionOuterClass.getDescriptor();
    flyteidl.admin.MatchableResourceOuterClass.getDescriptor();
    flyteidl.admin.NodeExecutionOuterClass.getDescriptor();
    flyteidl.admin.TaskExecutionOuterClass.getDescriptor();
    flyteidl.admin.Common.getDescriptor();
    grpc.gateway.protoc_gen_swagger.options.Annotations.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
