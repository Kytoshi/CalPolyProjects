﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.Threading.Tasks.VoidTaskResult>
struct Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Reflection.CustomAttributeNamedArgument>
struct IEnumerator_1_tF000C9F0E5825B7175EEFFE4206D7E4CA63AC048;
// System.Collections.Generic.IEnumerator`1<System.Reflection.CustomAttributeTypedArgument>
struct IEnumerator_1_tE5705EFC200D381292594B7E9CD60030D84E5E66;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tC94A6A591E58FD9BB826AF5D15001E425B682707;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_tA9B3F6D4DDBA3A555103C2DDC65AD75936EAB181;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Object,System.Object>
struct Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9;
// System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>
struct Predicate_1_t71B48A6F8F2E9674171F09CA11C0A20A066C1B40;
// System.Predicate`1<System.Int32>
struct Predicate_1_tED4FCD5B1AA7E54F65C6005FA1131B090CD5205E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<UnityEngine.RaycastHit2D>
struct Predicate_1_t9055FDFD9CFCC052508081AE0A90D9254ADD0DEE;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_tFA18DEC8134D5D2D0C1FE30372A0B455BB6FA0CD;
// System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct Predicate_1_tDCE23EAF6493699BBEEFEFA2DF749D6B29AD17C3;
// System.Predicate`1<UnityEngine.Camera/RenderRequest>
struct Predicate_1_tDFA01DE6116A07CF0BA344A62DCEB459F6553CDF;
// System.Predicate`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Predicate_1_t37DCC10ABCA72CA0B7539363EF733CDC2823E931;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>
struct ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>
struct ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.IO.SearchResultHandler`1<System.Object>
struct SearchResultHandler_1_tB819A963B62A843474E27DDAFE239812CF70839D;
// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration>
struct Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B;
// System.Threading.Tasks.Shared`1<System.Object>
struct Shared_1_t9CD470164021C8F0989F8E21A955B5B9AE6CA05C;
// System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>
struct SparseArray_1_t0EBA1596FB6FD2DC6F89C27334AFE9C976DBD259;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Object>
struct SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6;
// System.Threading.SparselyPopulatedArray`1<System.Object>
struct SparselyPopulatedArray_1_tD55330C40D801085FD9D705F3844A08F28EFE37B;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Object,System.Object>
struct Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Tuple`2<System.Object,System.Char>
struct Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E;
// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct Tuple_4_t936566050E79A53330A93469CAF15575A12A114D;
// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Object,System.Object>[]
struct NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskExceptionHolder
struct TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003;
IL2CPP_EXTERN_C String_t* _stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m123E20CD4E3CC51B5AD2010E3BEB0E08502B1E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m3DF11CEF04129066D80E213A02C6E1A16EF2770F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m45DA83B8321A999F8E5368833CDD148D95AA141D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m52F8C4F663DE685AD4BAA9EE6B79D0996146FB91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A;
struct CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451;
struct CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Threading.Tasks.Task`1/<>c<System.Boolean>
struct U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D_StaticFields
{
public:
	// System.Threading.Tasks.Task`1/<>c<TResult> System.Threading.Tasks.Task`1/<>c::<>9
	U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.Tasks.Task`1/<>c<System.Int32>
struct U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E_StaticFields
{
public:
	// System.Threading.Tasks.Task`1/<>c<TResult> System.Threading.Tasks.Task`1/<>c::<>9
	U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.Tasks.Task`1/<>c<System.Object>
struct U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950_StaticFields
{
public:
	// System.Threading.Tasks.Task`1/<>c<TResult> System.Threading.Tasks.Task`1/<>c::<>9
	U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.Tasks.Task`1/<>c<System.Threading.Tasks.VoidTaskResult>
struct U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1_StaticFields
{
public:
	// System.Threading.Tasks.Task`1/<>c<TResult> System.Threading.Tasks.Task`1/<>c::<>9
	U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Object,System.Object>
struct Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9  : public RuntimeObject
{
public:
	// TKey System.Collections.Concurrent.ConcurrentDictionary`2/Node::_key
	RuntimeObject * ____key_0;
	// TValue System.Collections.Concurrent.ConcurrentDictionary`2/Node::_value
	RuntimeObject * ____value_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2/Node::_next
	Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * ____next_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/Node::_hashcode
	int32_t ____hashcode_3;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9, ____next_2)); }
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * get__next_2() const { return ____next_2; }
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__hashcode_3() { return static_cast<int32_t>(offsetof(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9, ____hashcode_3)); }
	inline int32_t get__hashcode_3() const { return ____hashcode_3; }
	inline int32_t* get_address_of__hashcode_3() { return &____hashcode_3; }
	inline void set__hashcode_3(int32_t value)
	{
		____hashcode_3 = value;
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>
struct ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>
struct ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.IO.SearchResultHandler`1<System.Object>
struct SearchResultHandler_1_tB819A963B62A843474E27DDAFE239812CF70839D  : public RuntimeObject
{
public:

public:
};


// System.Threading.Tasks.Shared`1<System.Object>
struct Shared_1_t9CD470164021C8F0989F8E21A955B5B9AE6CA05C  : public RuntimeObject
{
public:
	// T System.Threading.Tasks.Shared`1::Value
	RuntimeObject * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Shared_1_t9CD470164021C8F0989F8E21A955B5B9AE6CA05C, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>
struct SparseArray_1_t0EBA1596FB6FD2DC6F89C27334AFE9C976DBD259  : public RuntimeObject
{
public:
	// T[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue/SparseArray`1::m_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_array_0;

public:
	inline static int32_t get_offset_of_m_array_0() { return static_cast<int32_t>(offsetof(SparseArray_1_t0EBA1596FB6FD2DC6F89C27334AFE9C976DBD259, ___m_array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_array_0() const { return ___m_array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_array_0() { return &___m_array_0; }
	inline void set_m_array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_array_0), (void*)value);
	}
};


// System.Threading.SparselyPopulatedArray`1<System.Object>
struct SparselyPopulatedArray_1_tD55330C40D801085FD9D705F3844A08F28EFE37B  : public RuntimeObject
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SparselyPopulatedArray`1::m_tail
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___m_tail_0;

public:
	inline static int32_t get_offset_of_m_tail_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArray_1_tD55330C40D801085FD9D705F3844A08F28EFE37B, ___m_tail_0)); }
	inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * get_m_tail_0() const { return ___m_tail_0; }
	inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 ** get_address_of_m_tail_0() { return &___m_tail_0; }
	inline void set_m_tail_0(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * value)
	{
		___m_tail_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_tail_0), (void*)value);
	}
};


// System.Threading.Tasks.SystemThreadingTasks_FutureDebugView`1<System.Object>
struct SystemThreadingTasks_FutureDebugView_1_t4C9A912669598580918A4250B4641B02F31CD089  : public RuntimeObject
{
public:

public:
};


// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Object,System.Object>
struct Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/Tables::_buckets
	NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* ____buckets_0;
	// System.Object[] System.Collections.Concurrent.ConcurrentDictionary`2/Tables::_locks
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____locks_1;
	// System.Int32[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2/Tables::_countPerLock
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____countPerLock_2;

public:
	inline static int32_t get_offset_of__buckets_0() { return static_cast<int32_t>(offsetof(Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA, ____buckets_0)); }
	inline NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* get__buckets_0() const { return ____buckets_0; }
	inline NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A** get_address_of__buckets_0() { return &____buckets_0; }
	inline void set__buckets_0(NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* value)
	{
		____buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of__locks_1() { return static_cast<int32_t>(offsetof(Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA, ____locks_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__locks_1() const { return ____locks_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__locks_1() { return &____locks_1; }
	inline void set__locks_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____locks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locks_1), (void*)value);
	}

	inline static int32_t get_offset_of__countPerLock_2() { return static_cast<int32_t>(offsetof(Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA, ____countPerLock_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__countPerLock_2() const { return ____countPerLock_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__countPerLock_2() { return &____countPerLock_2; }
	inline void set__countPerLock_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____countPerLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____countPerLock_2), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Char>
struct Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Il2CppChar ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6, ___m_Item2_1)); }
	inline Il2CppChar get_m_Item2_1() const { return ___m_Item2_1; }
	inline Il2CppChar* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Il2CppChar value)
	{
		___m_Item2_1 = value;
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	RuntimeObject * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}
};


// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct Tuple_4_t936566050E79A53330A93469CAF15575A12A114D  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	int32_t ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item4_3)); }
	inline int32_t get_m_Item4_3() const { return ___m_Item4_3; }
	inline int32_t* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(int32_t value)
	{
		___m_Item4_3 = value;
	}
};


// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	RuntimeObject * ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	RuntimeObject * ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item4_3)); }
	inline RuntimeObject * get_m_Item4_3() const { return ___m_Item4_3; }
	inline RuntimeObject ** get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(RuntimeObject * value)
	{
		___m_Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item4_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784  : public RuntimeObject
{
public:

public:
};


// System.Collections.LowLevelComparer
struct LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields, ___Default_0)); }
	inline LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.ObjectEqualityComparer
struct ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean>
struct ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.VoidTaskResult>
struct ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071, ___m_task_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493, ___Delegate_0)); }
	inline UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9, ___Delegate_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF, ___Delegate_0)); }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90, ___Delegate_0)); }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870, ___Delegate_0)); }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD, ___Delegate_0)); }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC  : public EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D
{
public:

public:
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>
struct SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>
struct TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC, ___m_task_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};

// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741, ___Delegate_0)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>
struct ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>
struct ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___key_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_key_0() const { return ___key_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Threading.SparselyPopulatedArrayFragment`1<System.Object>
struct SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6  : public RuntimeObject
{
public:
	// T[] System.Threading.SparselyPopulatedArrayFragment`1::m_elements
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_elements_0;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SparselyPopulatedArrayFragment`1::m_freeCount
	int32_t ___m_freeCount_1;
	// System.Threading.SparselyPopulatedArrayFragment`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SparselyPopulatedArrayFragment`1::m_next
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___m_next_2;
	// System.Threading.SparselyPopulatedArrayFragment`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SparselyPopulatedArrayFragment`1::m_prev
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___m_prev_3;

public:
	inline static int32_t get_offset_of_m_elements_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6, ___m_elements_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_elements_0() const { return ___m_elements_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_elements_0() { return &___m_elements_0; }
	inline void set_m_elements_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_elements_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_elements_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_freeCount_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6, ___m_freeCount_1)); }
	inline int32_t get_m_freeCount_1() const { return ___m_freeCount_1; }
	inline int32_t* get_address_of_m_freeCount_1() { return &___m_freeCount_1; }
	inline void set_m_freeCount_1(int32_t value)
	{
		___m_freeCount_1 = value;
	}

	inline static int32_t get_offset_of_m_next_2() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6, ___m_next_2)); }
	inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * get_m_next_2() const { return ___m_next_2; }
	inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 ** get_address_of_m_next_2() { return &___m_next_2; }
	inline void set_m_next_2(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * value)
	{
		___m_next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_next_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_prev_3() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6, ___m_prev_3)); }
	inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * get_m_prev_3() const { return ___m_prev_3; }
	inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 ** get_address_of_m_prev_3() { return &___m_prev_3; }
	inline void set_m_prev_3(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * value)
	{
		___m_prev_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_prev_3), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  value)
	{
		___typedArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_marshaled_com
{
	CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.ExceptionArgument
struct ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ExceptionResource
struct ExceptionResource_tD29FDAA391137C7766FB63B5F13FA0F12AF6C3FA 
{
public:
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionResource_tD29FDAA391137C7766FB63B5F13FA0F12AF6C3FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.InternalTaskOptions
struct InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF 
{
public:
	// System.Int32 System.Threading.Tasks.InternalTaskOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.StackCrawlMark
struct StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5 
{
public:
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// UnityEngine.Camera/RenderRequestMode
struct RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Threading.Tasks.Task/ContingentProperties::m_capturedContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_capturedContext_0;
	// System.Threading.ManualResetEventSlim modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_completionEvent
	ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * ___m_completionEvent_1;
	// System.Threading.Tasks.TaskExceptionHolder modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_exceptionsHolder
	TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * ___m_exceptionsHolder_2;
	// System.Threading.CancellationToken System.Threading.Tasks.Task/ContingentProperties::m_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_cancellationToken_3;
	// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration> System.Threading.Tasks.Task/ContingentProperties::m_cancellationRegistration
	Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * ___m_cancellationRegistration_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_internalCancellationRequested
	int32_t ___m_internalCancellationRequested_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_completionCountdown
	int32_t ___m_completionCountdown_6;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_exceptionalChildren
	List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * ___m_exceptionalChildren_7;

public:
	inline static int32_t get_offset_of_m_capturedContext_0() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_capturedContext_0)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_capturedContext_0() const { return ___m_capturedContext_0; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_capturedContext_0() { return &___m_capturedContext_0; }
	inline void set_m_capturedContext_0(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_capturedContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_capturedContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_completionEvent_1() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_completionEvent_1)); }
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * get_m_completionEvent_1() const { return ___m_completionEvent_1; }
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E ** get_address_of_m_completionEvent_1() { return &___m_completionEvent_1; }
	inline void set_m_completionEvent_1(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * value)
	{
		___m_completionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completionEvent_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_exceptionsHolder_2() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_exceptionsHolder_2)); }
	inline TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * get_m_exceptionsHolder_2() const { return ___m_exceptionsHolder_2; }
	inline TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 ** get_address_of_m_exceptionsHolder_2() { return &___m_exceptionsHolder_2; }
	inline void set_m_exceptionsHolder_2(TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * value)
	{
		___m_exceptionsHolder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exceptionsHolder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_cancellationToken_3() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_cancellationToken_3() const { return ___m_cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_cancellationToken_3() { return &___m_cancellationToken_3; }
	inline void set_m_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_cancellationRegistration_4() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_cancellationRegistration_4)); }
	inline Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * get_m_cancellationRegistration_4() const { return ___m_cancellationRegistration_4; }
	inline Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B ** get_address_of_m_cancellationRegistration_4() { return &___m_cancellationRegistration_4; }
	inline void set_m_cancellationRegistration_4(Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * value)
	{
		___m_cancellationRegistration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cancellationRegistration_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCancellationRequested_5() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_internalCancellationRequested_5)); }
	inline int32_t get_m_internalCancellationRequested_5() const { return ___m_internalCancellationRequested_5; }
	inline int32_t* get_address_of_m_internalCancellationRequested_5() { return &___m_internalCancellationRequested_5; }
	inline void set_m_internalCancellationRequested_5(int32_t value)
	{
		___m_internalCancellationRequested_5 = value;
	}

	inline static int32_t get_offset_of_m_completionCountdown_6() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_completionCountdown_6)); }
	inline int32_t get_m_completionCountdown_6() const { return ___m_completionCountdown_6; }
	inline int32_t* get_address_of_m_completionCountdown_6() { return &___m_completionCountdown_6; }
	inline void set_m_completionCountdown_6(int32_t value)
	{
		___m_completionCountdown_6 = value;
	}

	inline static int32_t get_offset_of_m_exceptionalChildren_7() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_exceptionalChildren_7)); }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * get_m_exceptionalChildren_7() const { return ___m_exceptionalChildren_7; }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB ** get_address_of_m_exceptionalChildren_7() { return &___m_exceptionalChildren_7; }
	inline void set_m_exceptionalChildren_7(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * value)
	{
		___m_exceptionalChildren_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exceptionalChildren_7), (void*)value);
	}
};


// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration>
struct Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B  : public RuntimeObject
{
public:
	// T System.Threading.Tasks.Shared`1::Value
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B, ___Value_0)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_Value_0() const { return ___Value_0; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Value_0))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Value_0))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284, ___m_result_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_result_22() const { return ___m_result_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_22)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Int32>
struct Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Threading.Tasks.VoidTaskResult>
struct Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Threading.Tasks.VoidTaskResult>
struct Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>
struct Predicate_1_t71B48A6F8F2E9674171F09CA11C0A20A066C1B40  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<System.Int32>
struct Predicate_1_tED4FCD5B1AA7E54F65C6005FA1131B090CD5205E  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.RaycastHit2D>
struct Predicate_1_t9055FDFD9CFCC052508081AE0A90D9254ADD0DEE  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_tFA18DEC8134D5D2D0C1FE30372A0B455BB6FA0CD  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct Predicate_1_tDCE23EAF6493699BBEEFEFA2DF749D6B29AD17C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.Camera/RenderRequest>
struct Predicate_1_tDFA01DE6116A07CF0BA344A62DCEB459F6553CDF  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Predicate_1_t37DCC10ABCA72CA0B7539363EF733CDC2823E931  : public MulticastDelegate_t
{
public:

public:
};


// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  m_Items[1];

public:
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  m_Items[1];

public:
	inline CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Object,System.Object>[]
struct NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * m_Items[1];

public:
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::.ctor(System.Threading.SparselyPopulatedArrayFragment`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayAddInfo_1__ctor_mC515DCE911FCE4CB31B221DB67FD3F613B4D743B_gshared (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___source0, int32_t ___index1, const RuntimeMethod* method);
// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::get_Source()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * SparselyPopulatedArrayAddInfo_1_get_Source_mF16A5757073BEDF261071800F1E44DBC7FD64D0A_gshared_inline (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_m504E6BF8E69B6BF3E2D670654834F4AD8D47BDB7_gshared_inline (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_gshared_inline (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_gshared_inline (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_gshared_inline (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_gshared_inline (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_m00AE49530694432761D2AC5849CAF68F0BD49AEE_gshared (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_m93EA35BCE92CF8F40FACEED76DC3E9669191B78E_gshared (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_mBC64F50B1AF5434E6D60CEC0D77A57E28E99C0AD_gshared (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_mD570AA3F661F72D4051BA5B379832317ECD78534_gshared (ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowNotSupportedException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E (int32_t ___resource0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A (int32_t ___resource0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773 (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument,System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mFBB0FE021BE66E1402AAC69275C0EDB716E3CC11 (int32_t ___argument0, int32_t ___resource1, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::.ctor(System.Threading.SparselyPopulatedArrayFragment`1<T>,System.Int32)
inline void SparselyPopulatedArrayAddInfo_1__ctor_mC515DCE911FCE4CB31B221DB67FD3F613B4D743B (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D *, SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *, int32_t, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1__ctor_mC515DCE911FCE4CB31B221DB67FD3F613B4D743B_gshared)(__this, ___source0, ___index1, method);
}
// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::get_Source()
inline SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * SparselyPopulatedArrayAddInfo_1_get_Source_mF16A5757073BEDF261071800F1E44DBC7FD64D0A_inline (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, const RuntimeMethod* method)
{
	return ((  SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * (*) (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D *, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1_get_Source_mF16A5757073BEDF261071800F1E44DBC7FD64D0A_gshared_inline)(__this, method);
}
// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::get_Index()
inline int32_t SparselyPopulatedArrayAddInfo_1_get_Index_m504E6BF8E69B6BF3E2D670654834F4AD8D47BDB7_inline (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D *, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1_get_Index_m504E6BF8E69B6BF3E2D670654834F4AD8D47BDB7_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_inline (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, const RuntimeMethod*))TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_gshared_inline)(__this, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::OnCompletedInternal(System.Threading.Tasks.Task,System.Action,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation1, bool ___continueOnCapturedContext2, bool ___flowExecutionContext3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D_gshared)(__this, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::ValidateEnd(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_inline (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_gshared_inline)(__this, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53_gshared)(__this, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_inline (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, const RuntimeMethod*))TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_gshared_inline)(__this, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2 (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2_gshared)(__this, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
inline RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_inline (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, const RuntimeMethod*))TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_gshared_inline)(__this, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E_gshared)(__this, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::GetResult()
inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, const RuntimeMethod* method)
{
	return ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskFactory::CheckMultiTaskContinuationOptions(System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A (int32_t ___continuationOptions0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskFactory::CheckCreationOptions(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65 (int32_t ___creationOptions0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor(System.Boolean,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___canceled0, int32_t ___creationOptions1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct2, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5 (int32_t ___creationOptions0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::PossiblyCaptureContext(System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, int32_t* ___stackMark0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Delegate_t * ___action0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::AtomicStateUpdate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, int32_t ___newBits0, int32_t ___illegalBits1, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794 (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task/ContingentProperties::SetCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591 (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::FinishStageThree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsWaitNotificationEnabledOrNotRanToCompletion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::InternalWait(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, int32_t ___millisecondsTimeout0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::NotifyDebuggerOfWaitCompletionIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsRanToCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::ThrowIfExceptional(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___includeTaskCanceledExceptions0, const RuntimeMethod* method);
// System.Threading.Tasks.Task/ContingentProperties System.Threading.Tasks.Task::EnsureContingentPropertiesInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___needsProtection0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::AddException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::Finish(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___bUserDelegateExecuted0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::RecordInternalCancellationRequest(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::CancellationCleanupLogic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_m00AE49530694432761D2AC5849CAF68F0BD49AEE (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D *, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_m00AE49530694432761D2AC5849CAF68F0BD49AEE_gshared)(__this, ___task0, ___continueOnCapturedContext1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_m93EA35BCE92CF8F40FACEED76DC3E9669191B78E (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_m93EA35BCE92CF8F40FACEED76DC3E9669191B78E_gshared)(__this, ___task0, ___continueOnCapturedContext1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_mBC64F50B1AF5434E6D60CEC0D77A57E28E99C0AD (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_mBC64F50B1AF5434E6D60CEC0D77A57E28E99C0AD_gshared)(__this, ___task0, ___continueOnCapturedContext1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_mD570AA3F661F72D4051BA5B379832317ECD78534 (ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 *, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_mD570AA3F661F72D4051BA5B379832317ECD78534_gshared)(__this, ___task0, ___continueOnCapturedContext1, method);
}
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m34B16565FCB93CC63DAF544CC55CD4459A7435AB (int32_t ___h10, int32_t ___h21, int32_t ___h32, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * ___call0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36 (Type_t * ___objectType0, String_t* ___functionName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7 (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Equals(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectEqualityComparer_1_Equals_m5298E3C41D8392E6782DF665621439DD7A925365_gshared (ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___x0, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___y1, const RuntimeMethod* method)
{
	{
	}
	{
	}
	{
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_2 = ___y1;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_3 = (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_3);
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (&___x0));
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_5, (RuntimeObject *)L_4);
		___x0 = *(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *)UnBox(L_5);
		return (bool)L_6;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Int32 System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::GetHashCode(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectEqualityComparer_1_GetHashCode_mB7220A01A1D727874EC7D0F45FDA3B81EDB9C565_gshared (ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___obj0, const RuntimeMethod* method)
{
	{
		goto IL_000a;
	}
	{
		return (int32_t)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (&___obj0));
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_1);
		___obj0 = *(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *)UnBox(L_1);
		return (int32_t)L_2;
	}
}
// System.Int32 System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::IndexOf(T[],T,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectEqualityComparer_1_IndexOf_mE52DEA860907232A7FDE8E4715711D2F50E0FD17_gshared (ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC * __this, WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* ___array0, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___startIndex2;
		int32_t L_1 = ___count3;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		goto IL_002b;
	}
	{
		int32_t L_3 = ___startIndex2;
		V_1 = (int32_t)L_3;
		goto IL_0025;
	}

IL_0011:
	{
		WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* L_4 = ___array0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		goto IL_0021;
	}
	{
		int32_t L_8 = V_1;
		return (int32_t)L_8;
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0063;
	}

IL_002b:
	{
		int32_t L_12 = ___startIndex2;
		V_2 = (int32_t)L_12;
		goto IL_005f;
	}

IL_002f:
	{
		WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* L_13 = ___array0;
		int32_t L_14 = V_2;
		int32_t L_15 = L_14;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
	}
	{
		WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* L_17 = ___array0;
		int32_t L_18 = V_2;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_19 = ___value1;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_20 = (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 )L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_20);
		RuntimeObject * L_22 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18))));
		bool L_23;
		L_23 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_22, (RuntimeObject *)L_21);
		*((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18))) = *(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *)UnBox(L_22);
		if (!L_23)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_24 = V_2;
		return (int32_t)L_24;
	}

IL_005b:
	{
		int32_t L_25 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_002f;
		}
	}

IL_0063:
	{
		return (int32_t)(-1);
	}
}
// System.Int32 System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::LastIndexOf(T[],T,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectEqualityComparer_1_LastIndexOf_m6FFC3088ED2DEFDD3D4308DAADF4AD4170F2A5B2_gshared (ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC * __this, WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* ___array0, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___startIndex2;
		int32_t L_1 = ___count3;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		goto IL_002d;
	}
	{
		int32_t L_3 = ___startIndex2;
		V_1 = (int32_t)L_3;
		goto IL_0027;
	}

IL_0013:
	{
		WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* L_4 = ___array0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		goto IL_0023;
	}
	{
		int32_t L_8 = V_1;
		return (int32_t)L_8;
	}

IL_0023:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0065;
	}

IL_002d:
	{
		int32_t L_12 = ___startIndex2;
		V_2 = (int32_t)L_12;
		goto IL_0061;
	}

IL_0031:
	{
		WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* L_13 = ___array0;
		int32_t L_14 = V_2;
		int32_t L_15 = L_14;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
	}
	{
		WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* L_17 = ___array0;
		int32_t L_18 = V_2;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_19 = ___value1;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_20 = (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 )L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_20);
		RuntimeObject * L_22 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18))));
		bool L_23;
		L_23 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_22, (RuntimeObject *)L_21);
		*((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18))) = *(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *)UnBox(L_22);
		if (!L_23)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_24 = V_2;
		return (int32_t)L_24;
	}

IL_005d:
	{
		int32_t L_25 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0031;
		}
	}

IL_0065:
	{
		return (int32_t)(-1);
	}
}
// System.Boolean System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectEqualityComparer_1_Equals_m840F713A60EFF07E3D7F5CE2530F35B7F6B610BF_gshared (ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((!(((RuntimeObject*)(ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC *)((ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectEqualityComparer_1_GetHashCode_mBE4672CD3C28EB8A9E60A54DA7CE73B39C712A6B_gshared (ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0;
		L_0 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_1);
		return (int32_t)L_2;
	}
}
// System.Void System.Collections.Generic.ObjectEqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEqualityComparer_1__ctor_m52A71AF91E608D19708F14FF9DBFD5AC02162122_gshared (ObjectEqualityComparer_1_t93368D337566084DE32D758C51A2CFB4CE9FDDAC * __this, const RuntimeMethod* method)
{
	{
		((  void (*) (EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m6DDF071DE28B2B2AFB774BA6A79DAFAF42AF8CC9_gshared (Predicate_1_t71B48A6F8F2E9674171F09CA11C0A20A066C1B40 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mFC4A9C842C594CE8A47D08444A331DE0F64D8CC4_gshared (Predicate_1_t71B48A6F8F2E9674171F09CA11C0A20A066C1B40 * __this, KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___obj0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m12D7E28C790416B7F3E8738CD0C98213E744E19F_gshared (Predicate_1_t71B48A6F8F2E9674171F09CA11C0A20A066C1B40 * __this, KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_mE6D0BC78CE5F328848C27C4411D47E3D285FE01E_gshared (Predicate_1_t71B48A6F8F2E9674171F09CA11C0A20A066C1B40 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m15D44D0E044DB7B98816BEAF9CC9937AB75637E9_gshared (Predicate_1_tED4FCD5B1AA7E54F65C6005FA1131B090CD5205E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2CD0DAA41126E0DF23F140A7C6BECA0AB6592959_gshared (Predicate_1_tED4FCD5B1AA7E54F65C6005FA1131B090CD5205E * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m82601F0455C2256B440D7CCD4A582FE006878A45_gshared (Predicate_1_tED4FCD5B1AA7E54F65C6005FA1131B090CD5205E * __this, int32_t ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m3CA4AEF257C04CBD04A01F2A160AF2EF76991DD2_gshared (Predicate_1_tED4FCD5B1AA7E54F65C6005FA1131B090CD5205E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6D3A43A54FAC38E55033FA2CCD04E7BD19C943CF_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___obj0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m2BEA907731B8CDA9D4CA213637D54EBB1F7F8174_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_mD0302860893AAE37F05B1C30D2055E37D7C5A657_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.RaycastHit2D>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m7397D28C0B3F6CAF67F515510F94AAC16B1BB4C1_gshared (Predicate_1_t9055FDFD9CFCC052508081AE0A90D9254ADD0DEE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.RaycastHit2D>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m1E8585B8A4EB93ED7E20C485994CAAD7DE98A247_gshared (Predicate_1_t9055FDFD9CFCC052508081AE0A90D9254ADD0DEE * __this, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___obj0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.RaycastHit2D>::BeginInvoke(T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m6F92DF2746DA73073EFE2050FFADA1F29B455673_gshared (Predicate_1_t9055FDFD9CFCC052508081AE0A90D9254ADD0DEE * __this, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Predicate`1<UnityEngine.RaycastHit2D>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m047C2F6BBFE7C0DC670B9A5817DEB58D7068D846_gshared (Predicate_1_t9055FDFD9CFCC052508081AE0A90D9254ADD0DEE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m753A323EFCEC0CFF32E4DAABEAA0F71EE7F2809F_gshared (Predicate_1_tFA18DEC8134D5D2D0C1FE30372A0B455BB6FA0CD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8A46CD72E2849E47BCF38ABE5B3C0CA56A68C06E_gshared (Predicate_1_tFA18DEC8134D5D2D0C1FE30372A0B455BB6FA0CD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___obj0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_mBA970C920E69EA498F8FF4ACFF971B2E9A8ADD26_gshared (Predicate_1_tFA18DEC8134D5D2D0C1FE30372A0B455BB6FA0CD * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m196C32984931A3BB771EDA03963C525FAE071BA8_gshared (Predicate_1_tFA18DEC8134D5D2D0C1FE30372A0B455BB6FA0CD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m7E44171AD6CE787A9CD91692FE20B2A164A9EC29_gshared (Predicate_1_tDCE23EAF6493699BBEEFEFA2DF749D6B29AD17C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m39F943F4658F60A061C8FB960995950D016208A3_gshared (Predicate_1_tDCE23EAF6493699BBEEFEFA2DF749D6B29AD17C3 * __this, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___obj0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::BeginInvoke(T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_mADE188062858C4208D0CD63502F58F7B22F7F3DA_gshared (Predicate_1_tDCE23EAF6493699BBEEFEFA2DF749D6B29AD17C3 * __this, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Predicate`1<UnityEngine.BeforeRenderHelper/OrderBlock>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_mF4AA09CE0D4E9CA9D465A5D8A8E3C5DB9DA3907C_gshared (Predicate_1_tDCE23EAF6493699BBEEFEFA2DF749D6B29AD17C3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.Camera/RenderRequest>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m9AE1FBB59C7804F43BB7F70F6616C066E08357CE_gshared (Predicate_1_tDFA01DE6116A07CF0BA344A62DCEB459F6553CDF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.Camera/RenderRequest>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD7797CBE2273C74BD54ED7F5D4A3B161F3B1BB75_gshared (Predicate_1_tDFA01DE6116A07CF0BA344A62DCEB459F6553CDF * __this, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___obj0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.Camera/RenderRequest>::BeginInvoke(T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m64DC80BAF17601C4F4088CD2D43FFFAECC036855_gshared (Predicate_1_tDFA01DE6116A07CF0BA344A62DCEB459F6553CDF * __this, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Predicate`1<UnityEngine.Camera/RenderRequest>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m288662FE7F0DFC2608C68B449142CD896DE8213D_gshared (Predicate_1_tDFA01DE6116A07CF0BA344A62DCEB459F6553CDF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Predicate`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m8F857AB4515F540252A80981F665591BEFCCB2A0_gshared (Predicate_1_t37DCC10ABCA72CA0B7539363EF733CDC2823E931 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Predicate`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCD1DAC421B4FB481E03C84B48CA31C89C061E43D_gshared (Predicate_1_t37DCC10ABCA72CA0B7539363EF733CDC2823E931 * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  >::Invoke(targetMethod, targetThis, ___obj0);
					else
						result = GenericVirtFuncInvoker1< bool, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						result = VirtFuncInvoker1< bool, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___obj0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::BeginInvoke(T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Predicate_1_BeginInvoke_m9A5A4ED350C2539D89FD48792B05AA0795F501DA_gshared (Predicate_1_t37DCC10ABCA72CA0B7539363EF733CDC2823E931 * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_il2cpp_TypeInfo_var, &___obj0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Predicate`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_EndInvoke_m9C48A7530861655B9C99D94F8F1558E9D66B647A_gshared (Predicate_1_t37DCC10ABCA72CA0B7539363EF733CDC2823E931 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mDCF2476FE7DC5E93AC43D7C21B04F4F6592D3505_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)7, /*hidden argument*/NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___list0;
		__this->set_list_0(L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m736D640DF2D568C1FD5CC7C979434F7F466EB9C8_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  ReadOnlyCollection_1_get_Item_m3D3A82B39E83A3B8DF5C0F9CBA41F9D7B31601A1_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		return (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )L_2;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7E23A0C5417203FA2478280AC8653392D6FBBB16_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_1 = ___value0;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )L_1);
		return (bool)L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m43AC73B4E6BC21BBAEBC0E87D4C4D409578C83A9_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m51D83255337C9CE25E59E9AD3BA7EE248F897FEE_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m63608906E7B76468FE7B9D70E54DB08182E4B4BF_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_1 = ___value0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  >::Invoke(2 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )L_1);
		return (int32_t)L_2;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9E419D50D2E4B7EFAE745F0C2B46F1322DAA160E_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m8EF1834C1BE327DF515590AB748537C53BE83A11_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		return (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_mB2E1C5ED371E697D87335E20463BCF3A64DB0C89_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31C79871AAE5E071D6A9B9FEBC4567BB59B32A76_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mC63D378BF8A02DD3697BD5F5278BE9C58555FD21_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m412801944A4C0A312DAACB6F5B26E7145054963B_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.ICollection<T>.Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m6920B3D3823CCE300F8520F2E83B986571D3584B_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_mE7497EA49C1D3CC94C4E9B5538F459196FC636A3_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mEFA5DAD8BB90E9E7D1DB93C5BA82746DD7933692_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF1AA67CC5B4C018659391958D865FBD6D2CF17DF_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451* V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		RuntimeArray * L_1 = ___array0;
		int32_t L_2;
		L_2 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)7, /*hidden argument*/NULL);
	}

IL_0018:
	{
		RuntimeArray * L_3 = ___array0;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_3, (int32_t)0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)6, /*hidden argument*/NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFBB0FE021BE66E1402AAC69275C0EDB716E3CC11((int32_t)((int32_t)17), (int32_t)4, /*hidden argument*/NULL);
	}

IL_0033:
	{
		RuntimeArray * L_6 = ___array0;
		int32_t L_7;
		L_7 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___index1;
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0049;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)5, /*hidden argument*/NULL);
	}

IL_0049:
	{
		RuntimeArray * L_10 = ___array0;
		V_0 = (CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451*)((CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451*)IsInst((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject* L_12 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451* L_13 = V_0;
		int32_t L_14 = ___index1;
		InterfaceActionInvoker2< CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_12, (CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451*)L_13, (int32_t)L_14);
		return;
	}

IL_0061:
	{
		RuntimeArray * L_15 = ___array0;
		Type_t * L_16;
		L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_15, /*hidden argument*/NULL);
		Type_t * L_17;
		L_17 = VirtFuncInvoker0< Type_t * >::Invoke(91 /* System.Type System.Type::GetElementType() */, (Type_t *)L_16);
		V_1 = (Type_t *)L_17;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 5)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_19;
		Type_t * L_20 = V_1;
		Type_t * L_21 = V_2;
		bool L_22;
		L_22 = VirtFuncInvoker1< bool, Type_t * >::Invoke(102 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_20, (Type_t *)L_21);
		if (L_22)
		{
			goto IL_0091;
		}
	}
	{
		Type_t * L_23 = V_2;
		Type_t * L_24 = V_1;
		bool L_25;
		L_25 = VirtFuncInvoker1< bool, Type_t * >::Invoke(102 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_23, (Type_t *)L_24);
		if (L_25)
		{
			goto IL_0091;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
	}

IL_0091:
	{
		RuntimeArray * L_26 = ___array0;
		V_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_3;
		if (L_27)
		{
			goto IL_00a2;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		RuntimeObject* L_28 = (RuntimeObject*)__this->get_list_0();
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeNamedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_28);
		V_4 = (int32_t)L_29;
	}

IL_00af:
	try
	{ // begin try (depth: 1)
		{
			V_5 = (int32_t)0;
			goto IL_00d4;
		}

IL_00b4:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = V_3;
			int32_t L_31 = ___index1;
			int32_t L_32 = (int32_t)L_31;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
			RuntimeObject* L_33 = (RuntimeObject*)__this->get_list_0();
			int32_t L_34 = V_5;
			CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_35;
			L_35 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_33, (int32_t)L_34);
			CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_36 = (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )L_35;
			RuntimeObject * L_37 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_36);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject *)L_37);
			int32_t L_38 = V_5;
			V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		}

IL_00d4:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00b4;
			}
		}

IL_00da:
		{
			goto IL_00e6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00dc;
		}
		throw e;
	}

CATCH_00dc:
	{ // begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e6;
	} // end catch (depth: 1)

IL_00e6:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13C50D50797D424309378B8AD8BAE437724E9940_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_IList_get_Item_mF8C2C44B7870037B7E274AF7C8AC202B4E3DED1B_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_3 = (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_3);
		return (RuntimeObject *)L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_mCFD65CE6DA818F63C30A9653AC384B4E6B4E8F80_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m3A778B50120BAB734ED23A25F42846C2445C7573_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return (int32_t)(-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_m642595225F9F050BA091B09AF4A2B51101B6A439_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::IsCompatibleObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mF9BCB0CC5E80207124F1531BBB57AE36CDB17E6A_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA ));
		CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_2 = V_0;
		CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA  L_3 = (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_3);
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m95F7845C553CFE3B69FA205B4D658A50A7E1F536_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		bool L_3;
		L_3 = ((  bool (*) (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 *, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 *)__this, (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )((*(CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA *)((CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (bool)L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mB133EB8DDA0C35BAD009F6484043CC3C6ACEF7F6_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 *, CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 *)__this, (CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA )((*(CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA *)((CustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (int32_t)L_3;
	}

IL_0015:
	{
		return (int32_t)(-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m2F331159BB2F4782680939A66DAE27646B5FC37C_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m448A233C5DF5AC45768D5315C37CB7FC6A57D89F_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_mB5085D8DC4FA66E09B93353F6C372CBE07154943_gshared (ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m5AD02ABD96C2DBF99144C430920F41CF64C658FA_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)7, /*hidden argument*/NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___list0;
		__this->set_list_0(L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF6F24336D702AB0E175BF95DE0B3C982DD183CF1_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ReadOnlyCollection_1_get_Item_mD36A5BC7E4B76316C5FFD2AACF470C67565490EC_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		return (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )L_2;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m1226644270DBAF86C0D5640A1E28072F8959FF1E_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_1 = ___value0;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )L_1);
		return (bool)L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m7F5DB8CBAD2E79CD147FBFABF230B8058D1F6AFF_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m336D6EC6CD86C85072EBEDC5D830681D86FB23D1_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeTypedArgument>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA1A0D3CF230F70B67CBB9338C85156A87F7B6F43_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_1 = ___value0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  >::Invoke(2 /* System.Int32 System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )L_1);
		return (int32_t)L_2;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mF75C45D87F8EDDFC67EC68FB14481FCFCDFB24A1_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC051C9D120F0E28DC6224E223E4AF0AB088FB111_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		return (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m9B01E76A587EE8262375344318467BD893FD98DF_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m09EE7F5FBC866DCF02459609E962D1405579E1C2_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mBDDF794E50A3663413E065ACAC05AD82AD9F5155_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m623114E8C4EA100D70CD37704E272B268CF3DF7E_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.ICollection<T>.Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_mD9806DFD68033291F74EDA207E3C4ECA1804FDB2_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_mC60815F5BC89E4FD0DCA56C9BF5B7819C0ECB29C_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m380FBF21C104202A7AF0646F9F3D2A807DA5DB8D_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mCDA696E42FE1EFB6DD640B95D6A2E14684F1B849_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98* V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		RuntimeArray * L_1 = ___array0;
		int32_t L_2;
		L_2 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)7, /*hidden argument*/NULL);
	}

IL_0018:
	{
		RuntimeArray * L_3 = ___array0;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_3, (int32_t)0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)6, /*hidden argument*/NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFBB0FE021BE66E1402AAC69275C0EDB716E3CC11((int32_t)((int32_t)17), (int32_t)4, /*hidden argument*/NULL);
	}

IL_0033:
	{
		RuntimeArray * L_6 = ___array0;
		int32_t L_7;
		L_7 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___index1;
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0049;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)5, /*hidden argument*/NULL);
	}

IL_0049:
	{
		RuntimeArray * L_10 = ___array0;
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98*)((CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98*)IsInst((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject* L_12 = (RuntimeObject*)__this->get_list_0();
		CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98* L_13 = V_0;
		int32_t L_14 = ___index1;
		InterfaceActionInvoker2< CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_12, (CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98*)L_13, (int32_t)L_14);
		return;
	}

IL_0061:
	{
		RuntimeArray * L_15 = ___array0;
		Type_t * L_16;
		L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_15, /*hidden argument*/NULL);
		Type_t * L_17;
		L_17 = VirtFuncInvoker0< Type_t * >::Invoke(91 /* System.Type System.Type::GetElementType() */, (Type_t *)L_16);
		V_1 = (Type_t *)L_17;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 5)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_19;
		Type_t * L_20 = V_1;
		Type_t * L_21 = V_2;
		bool L_22;
		L_22 = VirtFuncInvoker1< bool, Type_t * >::Invoke(102 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_20, (Type_t *)L_21);
		if (L_22)
		{
			goto IL_0091;
		}
	}
	{
		Type_t * L_23 = V_2;
		Type_t * L_24 = V_1;
		bool L_25;
		L_25 = VirtFuncInvoker1< bool, Type_t * >::Invoke(102 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_23, (Type_t *)L_24);
		if (L_25)
		{
			goto IL_0091;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
	}

IL_0091:
	{
		RuntimeArray * L_26 = ___array0;
		V_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_3;
		if (L_27)
		{
			goto IL_00a2;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		RuntimeObject* L_28 = (RuntimeObject*)__this->get_list_0();
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CustomAttributeTypedArgument>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_28);
		V_4 = (int32_t)L_29;
	}

IL_00af:
	try
	{ // begin try (depth: 1)
		{
			V_5 = (int32_t)0;
			goto IL_00d4;
		}

IL_00b4:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = V_3;
			int32_t L_31 = ___index1;
			int32_t L_32 = (int32_t)L_31;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
			RuntimeObject* L_33 = (RuntimeObject*)__this->get_list_0();
			int32_t L_34 = V_5;
			CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_35;
			L_35 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_33, (int32_t)L_34);
			CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_36 = (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )L_35;
			RuntimeObject * L_37 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_36);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject *)L_37);
			int32_t L_38 = V_5;
			V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		}

IL_00d4:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00b4;
			}
		}

IL_00da:
		{
			goto IL_00e6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00dc;
		}
		throw e;
	}

CATCH_00dc:
	{ // begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e6;
	} // end catch (depth: 1)

IL_00e6:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_mE3E746D6EA83CD29A7F3DB96E88BC666A8485303_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_IList_get_Item_m1168CE7B1CCD8FED6B3F6CC50FF5B0C10F790198_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_3 = (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_3);
		return (RuntimeObject *)L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m42AFF35D7BB9411ED601378492B0415FA724A468_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_mE9E394DF2990CDC9BA75DD7F69DD2CC733BCEDA8_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return (int32_t)(-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_m1F10D2D0CFB72FDE846EF3E6032D69C44DDDB521_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::IsCompatibleObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m17592EE4D7D3B338A09DEAE5B2402FC72EE7557F_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 ));
		CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_2 = V_0;
		CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910  L_3 = (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6), &L_3);
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m18207D2F683DF7925612204E4F900E6D10D7B501_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		bool L_3;
		L_3 = ((  bool (*) (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 *, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 *)__this, (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )((*(CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 *)((CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (bool)L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m0B51029DADCA88BB7F074CCEE1760FEB35CBEF16_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 *, CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 *)__this, (CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 )((*(CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 *)((CustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910 *)UnBox(L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (int32_t)L_3;
	}

IL_0015:
	{
		return (int32_t)(-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m779DCE8D7DF3C3CC7FB3ACB0910DC2B5D4E10845_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m49A4A90B6646111E1F83AD543DB394AC93010A23_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m7AEB35746E9B5FC54384438D9C9DC5421FC29FF8_gshared (ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mED7425C8A39DDAE57BB831E4903F987E9D033BF2_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)7, /*hidden argument*/NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___list0;
		__this->set_list_0(L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_get_Item_m92C5369651F9216CBCAD03983F2F34C5C3BF0744_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		return (RuntimeObject *)L_2;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC72DF447A107ADCA6039253F8ADDF04BEA6A6141_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_1 = ___value0;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return (bool)L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m257850439F8265C4EA32B5D0F74243E80A8AEE0C_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___array0;
		int32_t L_2 = ___index1;
		InterfaceActionInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_0, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF929EFA5DE6DF61B265560697794F889C81A6AF2_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject * L_1 = ___value0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		return (int32_t)L_2;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mC88B2CD1D342FDF3B26FC6095AAAB13DA0D4A6B3_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m3762DBC45EB750898E681279218BC855829A6DB3_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		return (RuntimeObject *)L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m149EDF4B4DB4928C6E8428136204F89E7496EACF_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2225B6AD256B3FAE1E1081DE8E01CFE5AF0A9414_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m2FFA76CA7E0FCD9FEAC7FB3EBBC701F74CC87DF5_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m1ED09233B5A31E2938BB2525A9296D2C57327D8A_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_mEB2E03D65A5EE2D541DFBFE8035540B29F7F8EB5_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_mC14724FBDDF76FB15528F0B75009B652E760D528_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mCD18249AD9D761049EE55D0636032982C1C9F243_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mB67BFDF2B527A8CEDB4C2865B0E8ACC240C06112_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)3, /*hidden argument*/NULL);
	}

IL_0009:
	{
		RuntimeArray * L_1 = ___array0;
		int32_t L_2;
		L_2 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)7, /*hidden argument*/NULL);
	}

IL_0018:
	{
		RuntimeArray * L_3 = ___array0;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_3, (int32_t)0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)6, /*hidden argument*/NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mFBB0FE021BE66E1402AAC69275C0EDB716E3CC11((int32_t)((int32_t)17), (int32_t)4, /*hidden argument*/NULL);
	}

IL_0033:
	{
		RuntimeArray * L_6 = ___array0;
		int32_t L_7;
		L_7 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___index1;
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0049;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)5, /*hidden argument*/NULL);
	}

IL_0049:
	{
		RuntimeArray * L_10 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject* L_12 = (RuntimeObject*)__this->get_list_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_0;
		int32_t L_14 = ___index1;
		InterfaceActionInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_12, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_13, (int32_t)L_14);
		return;
	}

IL_0061:
	{
		RuntimeArray * L_15 = ___array0;
		Type_t * L_16;
		L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_15, /*hidden argument*/NULL);
		Type_t * L_17;
		L_17 = VirtFuncInvoker0< Type_t * >::Invoke(91 /* System.Type System.Type::GetElementType() */, (Type_t *)L_16);
		V_1 = (Type_t *)L_17;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 5)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_19;
		Type_t * L_20 = V_1;
		Type_t * L_21 = V_2;
		bool L_22;
		L_22 = VirtFuncInvoker1< bool, Type_t * >::Invoke(102 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_20, (Type_t *)L_21);
		if (L_22)
		{
			goto IL_0091;
		}
	}
	{
		Type_t * L_23 = V_2;
		Type_t * L_24 = V_1;
		bool L_25;
		L_25 = VirtFuncInvoker1< bool, Type_t * >::Invoke(102 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_23, (Type_t *)L_24);
		if (L_25)
		{
			goto IL_0091;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
	}

IL_0091:
	{
		RuntimeArray * L_26 = ___array0;
		V_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_3;
		if (L_27)
		{
			goto IL_00a2;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		RuntimeObject* L_28 = (RuntimeObject*)__this->get_list_0();
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (RuntimeObject*)L_28);
		V_4 = (int32_t)L_29;
	}

IL_00af:
	try
	{ // begin try (depth: 1)
		{
			V_5 = (int32_t)0;
			goto IL_00d4;
		}

IL_00b4:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = V_3;
			int32_t L_31 = ___index1;
			int32_t L_32 = (int32_t)L_31;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
			RuntimeObject* L_33 = (RuntimeObject*)__this->get_list_0();
			int32_t L_34 = V_5;
			RuntimeObject * L_35;
			L_35 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_33, (int32_t)L_34);
			ArrayElementTypeCheck (L_30, L_35);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject *)L_35);
			int32_t L_36 = V_5;
			V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		}

IL_00d4:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_4;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_00b4;
			}
		}

IL_00da:
		{
			goto IL_00e6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00dc;
		}
		throw e;
	}

CATCH_00dc:
	{ // begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_m49831D19CFA6026A62C5D52FA7A8E162EBD4DD6A((int32_t)((int32_t)18), /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e6;
	} // end catch (depth: 1)

IL_00e6:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m7573E99B7118813CA97795A165CC0EB01B7A86F0_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_System_Collections_IList_get_Item_mDDEB20B53AA922998D9018C247C472D3937DF38F_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_list_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_0, (int32_t)L_1);
		return (RuntimeObject *)L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m6D55D340A6B38B289D590605A7363C933B32C1E3_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_mBE1B08C4EEC8A211909AB7F95B44A17097396ED7_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return (int32_t)(-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_mC1FF0192037C29BAFB58B2811D78E30559D88847_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IsCompatibleObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m78A3E1647C2ED83B76F6EA30E4AB61FFCF2AD3A7_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mB46A345349EE20AE5A34205F05FB150183439B10_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		bool L_3;
		L_3 = ((  bool (*) (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 *)__this, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (bool)L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m00721ACCB402BE1BFEC4A332292719ADC053B4F4_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 *)__this, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (int32_t)L_3;
	}

IL_0015:
	{
		return (int32_t)(-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m8FFB7B74031610605DAB6E0B6A03E99DD48C920D_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m5FCF844190884920DA8B891DD4C05A023E847FF6_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_mBE5AAD6D030712DB038D8515F166CB63C289F5B1_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ThrowHelper_ThrowNotSupportedException_m8627239FD340A8B1A832B66169EA2CABAC601A2E((int32_t)((int32_t)28), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.SearchResultHandler`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchResultHandler_1__ctor_m1287C307D907806F0E375E508CF4313F47C63340_gshared (SearchResultHandler_1_tB819A963B62A843474E27DDAFE239812CF70839D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shared_1__ctor_m7749556A37187DE384D2541510890ACC6C312EEB_gshared (Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * __this, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___value0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_0 = ___value0;
		__this->set_Value_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Shared`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shared_1__ctor_m7DC8FFEC854851906F8DB91B026481A5C4E4B930_gshared (Shared_1_t9CD470164021C8F0989F8E21A955B5B9AE6CA05C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___value0;
		__this->set_Value_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseArray_1__ctor_m73CC33002A0329EBD6BD0836220C3A637C40178A_gshared (SparseArray_1_t0EBA1596FB6FD2DC6F89C27334AFE9C976DBD259 * __this, int32_t ___initialSize0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialSize0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_0);
		il2cpp_codegen_memory_barrier();
		__this->set_m_array_0(L_1);
		return;
	}
}
// T[] System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* SparseArray_1_get_Current_m25F9E3ACF8D3CA2611F95C633A4C6AEB3B0B6D73_gshared (SparseArray_1_t0EBA1596FB6FD2DC6F89C27334AFE9C976DBD259 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
// System.Int32 System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseArray_1_Add_m6F50AAC239FDD8AAE9EBFC2B3F3F2016629DEC5D_gshared (SparseArray_1_t0EBA1596FB6FD2DC6F89C27334AFE9C976DBD259 * __this, RuntimeObject * ___e0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_1;
		V_2 = (bool)0;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)(RuntimeObject *)L_2, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			V_3 = (int32_t)0;
			goto IL_0083;
		}

IL_0019:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_0;
			int32_t L_4 = V_3;
			int32_t L_5 = L_4;
			RuntimeObject * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
			if (L_6)
			{
				goto IL_0039;
			}
		}

IL_0027:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
			int32_t L_8 = V_3;
			RuntimeObject * L_9 = ___e0;
			VolatileWrite((RuntimeObject **)(RuntimeObject **)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), (RuntimeObject *)L_9);
			int32_t L_10 = V_3;
			V_4 = (int32_t)L_10;
			IL2CPP_LEAVE(0x98, FINALLY_008e);
		}

IL_0039:
		{
			int32_t L_11 = V_3;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)1))))))
			{
				goto IL_007f;
			}
		}

IL_0041:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			if ((!(((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_13) == ((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_14))))
			{
				goto IL_007f;
			}
		}

IL_004c:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), (int32_t)2)));
			V_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_16;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = V_5;
			int32_t L_19 = V_3;
			Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_17, (RuntimeArray *)(RuntimeArray *)L_18, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = V_5;
			int32_t L_21 = V_3;
			RuntimeObject * L_22 = ___e0;
			(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1))), (RuntimeObject *)L_22);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_5;
			il2cpp_codegen_memory_barrier();
			__this->set_m_array_0(L_23);
			int32_t L_24 = V_3;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
			IL2CPP_LEAVE(0x98, FINALLY_008e);
		}

IL_007f:
		{
			int32_t L_25 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		}

IL_0083:
		{
			int32_t L_26 = V_3;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_0;
			if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
			{
				goto IL_0019;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x0, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			bool L_28 = V_2;
			if (!L_28)
			{
				goto IL_0097;
			}
		}

IL_0091:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)(RuntimeObject *)L_29, /*hidden argument*/NULL);
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_JUMP_TBL(0x0, IL_0000)
	}

IL_0098:
	{
		int32_t L_30 = V_4;
		return (int32_t)L_30;
	}
}
// System.Void System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseArray_1_Remove_mE2B0F58E246578556EF983DF5186A2BA917B81D8_gshared (SparseArray_1_t0EBA1596FB6FD2DC6F89C27334AFE9C976DBD259 * __this, RuntimeObject * ___e0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
		V_1 = (bool)0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)(RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
			V_2 = (int32_t)0;
			goto IL_0054;
		}

IL_0017:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_3 = V_2;
			int32_t L_4 = L_3;
			RuntimeObject * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
			RuntimeObject * L_6 = ___e0;
			if ((!(((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)L_6))))
			{
				goto IL_0050;
			}
		}

IL_0032:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_8 = V_2;
			il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
			RuntimeObject * L_9 = V_3;
			VolatileWrite((RuntimeObject **)(RuntimeObject **)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), (RuntimeObject *)L_9);
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}

IL_0050:
		{
			int32_t L_10 = V_2;
			V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_0054:
		{
			int32_t L_11 = V_2;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
			{
				goto IL_0017;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_006c;
			}
		}

IL_0066:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)(RuntimeObject *)L_14, /*hidden argument*/NULL);
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::.ctor(System.Threading.SparselyPopulatedArrayFragment`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayAddInfo_1__ctor_mC515DCE911FCE4CB31B221DB67FD3F613B4D743B_gshared (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_0 = ___source0;
		__this->set_m_source_0(L_0);
		int32_t L_1 = ___index1;
		__this->set_m_index_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void SparselyPopulatedArrayAddInfo_1__ctor_mC515DCE911FCE4CB31B221DB67FD3F613B4D743B_AdjustorThunk (RuntimeObject * __this, SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * _thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D *>(__this + _offset);
	SparselyPopulatedArrayAddInfo_1__ctor_mC515DCE911FCE4CB31B221DB67FD3F613B4D743B(_thisAdjusted, ___source0, ___index1, method);
}
// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * SparselyPopulatedArrayAddInfo_1_get_Source_mF16A5757073BEDF261071800F1E44DBC7FD64D0A_gshared (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, const RuntimeMethod* method)
{
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_0 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)__this->get_m_source_0();
		return (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_0;
	}
}
IL2CPP_EXTERN_C  SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * SparselyPopulatedArrayAddInfo_1_get_Source_mF16A5757073BEDF261071800F1E44DBC7FD64D0A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * _thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D *>(__this + _offset);
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * _returnValue;
	_returnValue = SparselyPopulatedArrayAddInfo_1_get_Source_mF16A5757073BEDF261071800F1E44DBC7FD64D0A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1<System.Object>::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_m504E6BF8E69B6BF3E2D670654834F4AD8D47BDB7_gshared (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_index_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SparselyPopulatedArrayAddInfo_1_get_Index_m504E6BF8E69B6BF3E2D670654834F4AD8D47BDB7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * _thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SparselyPopulatedArrayAddInfo_1_get_Index_m504E6BF8E69B6BF3E2D670654834F4AD8D47BDB7_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.SparselyPopulatedArrayFragment`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m01E13321F6DB13FB51AB1B18CCCB7D0D44AF2379_gshared (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___size0;
		((  void (*) (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *, int32_t, SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)__this, (int32_t)L_0, (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.SparselyPopulatedArrayFragment`1<System.Object>::.ctor(System.Int32,System.Threading.SparselyPopulatedArrayFragment`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m255C270BA84DAD7624581CDFCF78AFBAC5301130_gshared (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * __this, int32_t ___size0, SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * ___prev1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___size0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (uint32_t)L_0);
		__this->set_m_elements_0(L_1);
		int32_t L_2 = ___size0;
		il2cpp_codegen_memory_barrier();
		__this->set_m_freeCount_1(L_2);
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_3 = ___prev1;
		il2cpp_codegen_memory_barrier();
		__this->set_m_prev_3(L_3);
		return;
	}
}
// T System.Threading.SparselyPopulatedArrayFragment`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SparselyPopulatedArrayFragment_1_get_Item_mC3579E477C53F9088A8C833575B30C7D71C7E8FC_gshared (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_elements_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2;
		L_2 = VolatileRead((RuntimeObject **)(RuntimeObject **)((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1))));
		return (RuntimeObject *)L_2;
	}
}
// System.Int32 System.Threading.SparselyPopulatedArrayFragment`1<System.Object>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayFragment_1_get_Length_mB0DC970D503F4C5776CB9A81094AF51DA6CA4B89_gshared (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_elements_0();
		return (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
	}
}
// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayFragment`1<System.Object>::get_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * SparselyPopulatedArrayFragment_1_get_Prev_m3AE2D2BEA384B3DDB6F5E8232451AC419F160665_gshared (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * __this, const RuntimeMethod* method)
{
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_0 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)__this->get_m_prev_3();
		il2cpp_codegen_memory_barrier();
		return (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_0;
	}
}
// T System.Threading.SparselyPopulatedArrayFragment`1<System.Object>::SafeAtomicRemove(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SparselyPopulatedArrayFragment_1_SafeAtomicRemove_m6252DF164CBE58871C4AA1183160ABE31637D844_gshared (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * __this, int32_t ___index0, RuntimeObject * ___expectedElement1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_elements_0();
		int32_t L_1 = ___index0;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		RuntimeObject * L_3 = ___expectedElement1;
		RuntimeObject * L_4;
		L_4 = InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(RuntimeObject **)((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1))), (RuntimeObject *)L_2, (RuntimeObject *)L_3);
		RuntimeObject * L_5 = (RuntimeObject *)L_4;
		G_B1_0 = L_5;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = (int32_t)__this->get_m_freeCount_1();
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->set_m_freeCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		G_B2_0 = G_B1_0;
	}

IL_0035:
	{
		return (RuntimeObject *)G_B2_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.SparselyPopulatedArray`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArray_1__ctor_m4819219D17EF783AA631AE71218B59EA894AA9E6_gshared (SparselyPopulatedArray_1_tD55330C40D801085FD9D705F3844A08F28EFE37B * __this, int32_t ___initialSize0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialSize0;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_1 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_1, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		il2cpp_codegen_memory_barrier();
		__this->set_m_tail_0(L_1);
		return;
	}
}
// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArray`1<System.Object>::get_Tail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * SparselyPopulatedArray_1_get_Tail_mBAA868E1B7091E1FF6BDF656AF3BDE21E98A9048_gshared (SparselyPopulatedArray_1_tD55330C40D801085FD9D705F3844A08F28EFE37B * __this, const RuntimeMethod* method)
{
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_0 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)__this->get_m_tail_0();
		il2cpp_codegen_memory_barrier();
		return (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_0;
	}
}
// System.Threading.SparselyPopulatedArrayAddInfo`1<T> System.Threading.SparselyPopulatedArray`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D  SparselyPopulatedArray_1_Add_m64CEDA3841ECF9A5BAD346FF0714610AB9E40CAE_gshared (SparselyPopulatedArray_1_tD55330C40D801085FD9D705F3844A08F28EFE37B * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * V_0 = NULL;
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * V_1 = NULL;
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject * V_7 = NULL;
	int32_t V_8 = 0;
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * G_B15_0 = NULL;
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * G_B16_1 = NULL;
	int32_t G_B24_0 = 0;

IL_0000:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_0 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)__this->get_m_tail_0();
		il2cpp_codegen_memory_barrier();
		V_0 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_0;
		goto IL_001d;
	}

IL_000b:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_1 = V_0;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_2 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_1->get_m_next_2();
		il2cpp_codegen_memory_barrier();
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_3 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_2;
		V_0 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_3;
		il2cpp_codegen_memory_barrier();
		__this->set_m_tail_0(L_3);
	}

IL_001d:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_4 = V_0;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_5 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_4->get_m_next_2();
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_000b;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_6 = V_0;
		V_1 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_6;
		goto IL_0115;
	}

IL_002e:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_7 = V_1;
		int32_t L_8 = (int32_t)L_7->get_m_freeCount_1();
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_9 = V_1;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_10 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_9;
		int32_t L_11 = (int32_t)L_10->get_m_freeCount_1();
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		L_10->set_m_freeCount_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)));
	}

IL_004b:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_12 = V_1;
		int32_t L_13 = (int32_t)L_12->get_m_freeCount_1();
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_14 = V_1;
		int32_t L_15 = (int32_t)L_14->get_m_freeCount_1();
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)-10))))
		{
			goto IL_010c;
		}
	}

IL_0065:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_16 = V_1;
		int32_t L_17;
		L_17 = ((  int32_t (*) (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		V_3 = (int32_t)L_17;
		int32_t L_18 = V_3;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_19 = V_1;
		int32_t L_20 = (int32_t)L_19->get_m_freeCount_1();
		il2cpp_codegen_memory_barrier();
		int32_t L_21 = V_3;
		V_4 = (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_20))%(int32_t)L_21));
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		V_4 = (int32_t)0;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_23 = V_1;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_24 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_23;
		int32_t L_25 = (int32_t)L_24->get_m_freeCount_1();
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		L_24->set_m_freeCount_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)));
	}

IL_0094:
	{
		V_5 = (int32_t)0;
		goto IL_0107;
	}

IL_0099:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = V_3;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27))%(int32_t)L_28));
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_29 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_29->get_m_elements_0();
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		if (L_33)
		{
			goto IL_0101;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_34 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_34->get_m_elements_0();
		int32_t L_36 = V_6;
		RuntimeObject * L_37 = ___element0;
		il2cpp_codegen_initobj((&V_7), sizeof(RuntimeObject *));
		RuntimeObject * L_38 = V_7;
		RuntimeObject * L_39;
		L_39 = InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(RuntimeObject **)((L_35)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_36))), (RuntimeObject *)L_37, (RuntimeObject *)L_38);
		if (L_39)
		{
			goto IL_0101;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_40 = V_1;
		int32_t L_41 = (int32_t)L_40->get_m_freeCount_1();
		il2cpp_codegen_memory_barrier();
		V_8 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1));
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_42 = V_1;
		int32_t L_43 = V_8;
		G_B14_0 = L_42;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			G_B15_0 = L_42;
			goto IL_00ef;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_00f1;
	}

IL_00ef:
	{
		int32_t L_44 = V_8;
		G_B16_0 = L_44;
		G_B16_1 = G_B15_0;
	}

IL_00f1:
	{
		il2cpp_codegen_memory_barrier();
		G_B16_1->set_m_freeCount_1(G_B16_0);
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_45 = V_1;
		int32_t L_46 = V_6;
		SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D  L_47;
		memset((&L_47), 0, sizeof(L_47));
		SparselyPopulatedArrayAddInfo_1__ctor_mC515DCE911FCE4CB31B221DB67FD3F613B4D743B((&L_47), (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_45, (int32_t)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D )L_47;
	}

IL_0101:
	{
		int32_t L_48 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_0107:
	{
		int32_t L_49 = V_5;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0099;
		}
	}

IL_010c:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_51 = V_1;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_52 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_51->get_m_prev_3();
		il2cpp_codegen_memory_barrier();
		V_1 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_52;
	}

IL_0115:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_53 = V_1;
		if (L_53)
		{
			goto IL_002e;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_54 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_55 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_54->get_m_elements_0();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0136;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_56 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_57 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_56->get_m_elements_0();
		G_B24_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length))), (int32_t)2));
		goto IL_013b;
	}

IL_0136:
	{
		G_B24_0 = ((int32_t)4096);
	}

IL_013b:
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_58 = V_0;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_59 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *, int32_t, SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_59, (int32_t)G_B24_0, (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_58, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_2 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_59;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_60 = V_0;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 ** L_61 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 **)L_60->get_address_of_m_next_2();
		il2cpp_codegen_memory_barrier();
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_62 = V_2;
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_63;
		L_63 = InterlockedCompareExchangeImpl<SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *>((SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 **)(SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 **)L_61, (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_62, (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)NULL);
		if (L_63)
		{
			goto IL_0000;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_64 = V_2;
		il2cpp_codegen_memory_barrier();
		__this->set_m_tail_0(L_64);
		goto IL_0000;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticGetter_1__ctor_mCB9F6199681B0664F67E085BB97DAE5DB341AC30_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_Invoke_m08F70CE702870040A78BB0E5F863F253ECEBC8D4_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * __this, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StaticGetter_1_BeginInvoke_m7C19626A86BEC69169C4BB781F40448AFC036D04_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_EndInvoke_m4BCFC92037FF0D7ED5747DBE3C5B0F8A5CB38F44_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Object,System.Object>::.ctor(System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[],System.Object[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables__ctor_mB1DBA1BD5FD558147563EA6346B85F4C35E2F2E1_gshared (Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA * __this, NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* ___buckets0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___locks1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___countPerLock2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* L_0 = ___buckets0;
		__this->set__buckets_0(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___locks1;
		__this->set__locks_1(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___countPerLock2;
		il2cpp_codegen_memory_barrier();
		__this->set__countPerLock_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_AdjustorThunk (RuntimeObject * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *>(__this + _offset);
	TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___continuation0;
		TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *>(__this + _offset);
	TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D(_thisAdjusted, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, /*hidden argument*/NULL);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_1 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		bool L_2;
		L_2 = ((  bool (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return (bool)L_2;
	}
}
IL2CPP_EXTERN_C  bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *>(__this + _offset);
	bool _returnValue;
	_returnValue = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_AdjustorThunk (RuntimeObject * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *>(__this + _offset);
	TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this->get_m_task_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___continuation0;
		TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *>(__this + _offset);
	TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53(_thisAdjusted, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this->get_m_task_0();
		TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, /*hidden argument*/NULL);
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_1 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this->get_m_task_0();
		int32_t L_2;
		L_2 = ((  int32_t (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_AdjustorThunk (RuntimeObject * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *>(__this + _offset);
	TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___continuation0;
		TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *>(__this + _offset);
	TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2(_thisAdjusted, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, /*hidden argument*/NULL);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_1 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return (RuntimeObject *)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_AdjustorThunk (RuntimeObject * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *>(__this + _offset);
	TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_0 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this->get_m_task_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___continuation0;
		TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *>(__this + _offset);
	TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E(_thisAdjusted, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, const RuntimeMethod* method)
{
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_0 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this->get_m_task_0();
		TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, /*hidden argument*/NULL);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_1 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this->get_m_task_0();
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_2;
		L_2 = ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_2;
	}
}
IL2CPP_EXTERN_C  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *>(__this + _offset);
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  _returnValue;
	_returnValue = TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m94CDE55BE968D75ADDD16A394DA59FB3CC71586E_gshared (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		((  void (*) (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Boolean>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_mB54A6D08E03D5EDE2741C33FBB1DBF3A15A4BC25_gshared (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A((int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65((int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m95A30E31077CC563964CFDDDB4229382E8E597A9_gshared (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		((  void (*) (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Int32>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m99CF2AD2F6A6891B2F1E1D6B5064B6BC074BDA4E_gshared (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A((int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65((int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m0BD45C96838F379D431730A84606A7D2560AD844_gshared (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		((  void (*) (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_mA5825E7F57AFB09B7BEB570FCC074AD27E0A608B_gshared (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A((int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65((int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m048C61580C2DFED01156A742917D59499B45B9C1_gshared (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		((  void (*) (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_mEC1A07D07DC810393CDE14D77F3AE47388DF99E4_gshared (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A((int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65((int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m37A2A89D16FE127FD4C1125B71D30EE0AD5F7547_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4147FD562A52E37964BFF472DB939744FBA7DA29_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, /*hidden argument*/NULL);
		bool L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mEB79C972D350C5A7B7FF71C2846403554423D1FC_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___canceled0, bool ___result1, int32_t ___creationOptions2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___ct3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		bool L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_mC02DD409D1C1B359B32C6B4F4C06F690D8CFCABC_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		((  void (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, Delegate_t *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m123E20CD4E3CC51B5AD2010E3BEB0E08502B1E02_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___parent2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler6;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8;
		L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003)), (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_1__ctor_m123E20CD4E3CC51B5AD2010E3BEB0E08502B1E02_RuntimeMethod_var)));
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_mFBE3512457036F312EF672E0F3A7FEAE3E22EE74_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * V_0 = NULL;
	{
		bool L_0;
		L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		bool L_1;
		L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		bool L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_5;
		L_5 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_6 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_6;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_8 = V_0;
		ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_8, /*hidden argument*/NULL);
	}

IL_004f:
	{
		Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_get_Result_mEC1B2C0D9A04A24259F4E5F7A9191C2A83E43803_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = (bool)__this->get_m_result_22();
		return (bool)L_1;
	}

IL_000f:
	{
		bool L_2;
		L_2 = ((  bool (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (bool)L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Boolean>::get_ResultOnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_get_ResultOnSuccess_mCCDAA69136B5787F8E2E833454430CB7D14C5C22_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_result_22();
		return (bool)L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Boolean>::GetResultCore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_GetResultCore_m08244083EA9926A7905D56F2745686632B23DB4B_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_0;
		bool L_2;
		L_2 = Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)(-1), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_3 = ___waitCompletionNotification0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		bool L_4;
		L_4 = Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		bool L_5;
		L_5 = Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		bool L_6 = (bool)__this->get_m_result_22();
		return (bool)L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetException_m47EF41EFE44B83B833292961D11E92FC9F9AD808_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_0;
		L_0 = Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ___exceptionObject0;
		Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mC7E4F953E4B13FEBAED3EECDD5FC10889D146013_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___tokenToRecord0;
		bool L_1;
		L_1 = ((  bool (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mC924977D82B8429B45E4FC13002C766A44CE9E5A_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		bool L_0;
		L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::InnerInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_m81477762E11D4BEB32871A862072E74ACFB7753D_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * V_0 = NULL;
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_0 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)((Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = V_0;
		bool L_3;
		L_3 = ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateObject_6();
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_inline((&L_0), (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C )L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_m00AE49530694432761D2AC5849CAF68F0BD49AEE((&L_1), (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D )L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__cctor_mA0D0A7BB870B989DF1F67D02C4BE2EA3D45AEF07_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * L_0 = (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D * L_1 = ((U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->get_U3CU3E9_0();
		Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * L_2 = (Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((  void (*) (Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m6A14EF254702334006629FCB5647C803860A7CDD_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB341E7553AAAEB403760159C837759AC0C7B2F20_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4614FE775E152B2268F056D9A0504CD31B935DEA_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___canceled0, int32_t ___result1, int32_t ___creationOptions2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___ct3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_mCCDDF351A22140292DE88EC77D8C644A647AE619_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		((  void (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, Delegate_t *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m52F8C4F663DE685AD4BAA9EE6B79D0996146FB91_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___parent2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler6;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8;
		L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003)), (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_1__ctor_m52F8C4F663DE685AD4BAA9EE6B79D0996146FB91_RuntimeMethod_var)));
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m60A26E300A1D0DE739D50DEA22A44B96661DA6C0_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * V_0 = NULL;
	{
		bool L_0;
		L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		bool L_1;
		L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_5;
		L_5 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_6 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_6;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_8 = V_0;
		ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_8, /*hidden argument*/NULL);
	}

IL_004f:
	{
		Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Int32>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_Result_m71D1165F8F30E8EDD34A98DBC72B55B15825D005_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_m_result_22();
		return (int32_t)L_1;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = ((  int32_t (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Int32>::get_ResultOnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_ResultOnSuccess_mFFF53075109EDE36DFAB103F29EC073F4A2E5D2D_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_result_22();
		return (int32_t)L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Int32>::GetResultCore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_GetResultCore_m6CE9E4211999FFD017F082345D5E28CDFB8FD86F_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_0;
		bool L_2;
		L_2 = Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)(-1), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_3 = ___waitCompletionNotification0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		bool L_4;
		L_4 = Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		bool L_5;
		L_5 = Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		int32_t L_6 = (int32_t)__this->get_m_result_22();
		return (int32_t)L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetException_m3DFC28BCD56E7EE8BDB841F1A97EF4BE8E156A02_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_0;
		L_0 = Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ___exceptionObject0;
		Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mE3C94396026524C6AC39F93E0E765128F15510A2_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___tokenToRecord0;
		bool L_1;
		L_1 = ((  bool (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mEF197EE337A7CBE2EECE69AA1ECA0231718F1EB9_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		bool L_0;
		L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::InnerInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_mDE4EBA1F49EF69FC648243A66A98334582BDE4AD_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * V_0 = NULL;
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_0 = (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)((Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * L_2 = V_0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_1 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateObject_6();
		int32_t L_8;
		L_8 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_inline((&L_0), (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 )L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_m93EA35BCE92CF8F40FACEED76DC3E9669191B78E((&L_1), (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC )L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__cctor_m0F4455B017035D371420B1C9B2AA34D5EF3F4D55_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * L_0 = (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E * L_1 = ((U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->get_U3CU3E9_0();
		Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * L_2 = (Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((  void (*) (Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m0E154B54952313C68BE249DC65272D106C202E8C_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mEB7932B4A44919389589CACDC1D443AB2D1681FB_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mFC380BDDF1AF18F401DBE606D16B29C5A7170D8B_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___canceled0, RuntimeObject * ___result1, int32_t ___creationOptions2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___ct3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_mDDC922A10C49DB4478ADAB2E20B79AA6C2C105D3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Delegate_t *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m45DA83B8321A999F8E5368833CDD148D95AA141D_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___parent2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler6;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8;
		L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003)), (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_1__ctor_m45DA83B8321A999F8E5368833CDD148D95AA141D_RuntimeMethod_var)));
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m1050FBF178389A5D03D30C4C53B7E3E097A56B42_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * V_0 = NULL;
	{
		bool L_0;
		L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		bool L_1;
		L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject * L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_5;
		L_5 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_6 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_6;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_8 = V_0;
		ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_8, /*hidden argument*/NULL);
	}

IL_004f:
	{
		Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_result_22();
		return (RuntimeObject *)L_1;
	}

IL_000f:
	{
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (RuntimeObject *)L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::get_ResultOnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_ResultOnSuccess_m46A8F0AC50B96BA13F1F8C3B88415350C5DF66B7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_result_22();
		return (RuntimeObject *)L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::GetResultCore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_GetResultCore_m4631F08B8681F2A2DE14C25BEB1801B377447B25_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_0;
		bool L_2;
		L_2 = Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)(-1), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_3 = ___waitCompletionNotification0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		bool L_4;
		L_4 = Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		bool L_5;
		L_5 = Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_m_result_22();
		return (RuntimeObject *)L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetException_m2300A530586907923A4332A10CA7976E7262695C_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_0;
		L_0 = Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ___exceptionObject0;
		Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_m3BB36CD1F80D11A98FDA16B2598337DEFA4E9BBA_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___tokenToRecord0;
		bool L_1;
		L_1 = ((  bool (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mA627A702453DE3F952EEA1B68CF604534EDB491F_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		bool L_0;
		L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::InnerInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_m2FE8556EDE2265EA5F8923DE88A5995F75A19221_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * V_0 = NULL;
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_0 = (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_2 = V_0;
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_1 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateObject_6();
		RuntimeObject * L_8;
		L_8 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_inline((&L_0), (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE )L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_mBC64F50B1AF5434E6D60CEC0D77A57E28E99C0AD((&L_1), (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 )L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__cctor_m50823F27341624B67A0AA0E58F1DF03132D5463B_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * L_0 = (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 * L_1 = ((U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->get_U3CU3E9_0();
		Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * L_2 = (Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((  void (*) (Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m7EC33EF34F64114A8D152BBAC30B8863F55D8E57_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, /*hidden argument*/NULL);
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m54069BFDCD1C670A3713A298C56D7F1AF86C5316_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, bool ___canceled0, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___result1, int32_t ___creationOptions2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___ct3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_mA972BE2F2787EBC865852B68C10F851828096F93_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, Delegate_t *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m3DF11CEF04129066D80E213A02C6E1A16EF2770F_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___parent2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler6;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8;
		L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003)), (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_1__ctor_m3DF11CEF04129066D80E213A02C6E1A16EF2770F_RuntimeMethod_var)));
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * V_0 = NULL;
	{
		bool L_0;
		L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		bool L_1;
		L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_5;
		L_5 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_6 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_6;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_8 = V_0;
		ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_8, /*hidden argument*/NULL);
	}

IL_004f:
	{
		Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  Task_1_get_Result_m385E10E855FCEE323B2D95C5C2FE56FB20D26122_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_1 = (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )__this->get_m_result_22();
		return (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_1;
	}

IL_000f:
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_2;
		L_2 = ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::get_ResultOnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  Task_1_get_ResultOnSuccess_m559E89F4C6E683A352F2443533B48AF932CC0E5D_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_0 = (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )__this->get_m_result_22();
		return (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::GetResultCore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  Task_1_GetResultCore_m60248E398FA3FFC22F6284CE25F154B658E55298_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_0;
		bool L_2;
		L_2 = Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)(-1), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_3 = ___waitCompletionNotification0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		bool L_4;
		L_4 = Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		bool L_5;
		L_5 = Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_6 = (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )__this->get_m_result_22();
		return (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetException_mAEC49933FB8034AA98C144D4F9122BE42B89BB0B_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_0;
		L_0 = Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ___exceptionObject0;
		Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___tokenToRecord0;
		bool L_1;
		L_1 = ((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_m77B203D3ACDB89BBACE32DC293B0374ED69A9F4B_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		bool L_0;
		L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::InnerInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_m6A85040F94F47E2F4186134995209AF87ACFBBBD_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 * V_0 = NULL;
	Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_0 = (Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *)((Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 * L_2 = V_0;
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_3;
		L_3 = ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_1 = (Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *)((Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateObject_6();
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_8;
		L_8 = ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC  Task_1_GetAwaiter_mAD5A3A560A8FCDF7CD0BE14516D9B07B021F9366_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_inline((&L_0), (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC )L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3  Task_1_ConfigureAwait_mF5D1E4299E485936C0682DDCC7A141DE412E6124_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_mD570AA3F661F72D4051BA5B379832317ECD78534((&L_1), (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 )L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__cctor_mEE5F7DCA071888CA4E8D5332FAEA2233A460FFD0_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * L_0 = (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 * L_1 = ((U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->get_U3CU3E9_0();
		Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * L_2 = (Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((  void (*) (Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`2<System.Object,System.Char>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m83FF713DB4A914365CB9A6D213C1D31B46269057_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Char>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_m79AB8B3DC587FA8796EC216A623D10DC71A6E202_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_m_Item2_1();
		return (Il2CppChar)L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Char>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m3F946F9DEA25CDC8A34638780152ABF5049BF165_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___item10, Il2CppChar ___item21, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		Il2CppChar L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_mC13D56B08E3BF9AE03134F713E88F59AF49E0986_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (bool)L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mB8764DDC777A14644C984149BC346B303F8CB7E7_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)((Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		Il2CppChar L_9 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_10);
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_12 = V_0;
		Il2CppChar L_13 = (Il2CppChar)L_12->get_m_Item2_1();
		Il2CppChar L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		return (bool)L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m9F56832E563506449F01AB0020EDF8E99AD82E4D_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (int32_t)L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)((Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5;
		L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_RuntimeMethod_var)));
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_9 = V_0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return (int32_t)L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		Il2CppChar L_15 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_16);
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_18 = V_0;
		Il2CppChar L_19 = (Il2CppChar)L_18->get_m_Item2_1();
		Il2CppChar L_20 = L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_20);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_17, (RuntimeObject *)L_21);
		return (int32_t)L_22;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m56B88A8B03BF1856556DB8527DB575A497601841_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m6A8402570FA26D368443512574A0A03CBFAB7585_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		Il2CppChar L_4 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		int32_t L_8;
		L_8 = Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797((int32_t)L_2, (int32_t)L_7, /*hidden argument*/NULL);
		return (int32_t)L_8;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m4F1D997C1F791EC93E8E153E25B8802A2A111436_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_3);
		return (String_t*)L_4;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_mC29992D30719486284F41C1DC333E9A321947EBE_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_3, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		Il2CppChar L_6 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_7 = L_6;
		RuntimeObject * L_8 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_7);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_5, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_10, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_12 = ___sb0;
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_12);
		return (String_t*)L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m2A49F263317603E4A770D5B34222FFCCCB6AE4EB_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m4D9875962578E3B6CC08739D79B226A806756051_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m7904D914C7F0D8920A3F2F0FB05BDA201DC34F7D_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (bool)L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m76DD43DE79BB19BCD41673F706D96FE167C894B2_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)((Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		return (bool)L_12;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m0FB81164CA69BB5F29772A077579254D3F7EE3D4_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (int32_t)L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)((Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5;
		L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_RuntimeMethod_var)));
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_9 = V_0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return (int32_t)L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_16 = V_0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		return (int32_t)L_18;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m93554844C338C3CFF8715DF628FCE38039872674_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mC537B0B94B81AFE40F05E07B16B6741735D1A376_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		int32_t L_6;
		L_6 = Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797((int32_t)L_2, (int32_t)L_5, /*hidden argument*/NULL);
		return (int32_t)L_6;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m2E2FEB492CEDA8B61F6869909C0376A8F0DEEE9A_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_3);
		return (String_t*)L_4;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m910380308358C7A726EC2516E3C9D9BD1E5F8EB6_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_3, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_m_Item2_1();
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_5, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_8, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		return (String_t*)L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item1_m2E4AA65247AA63A450A9C11604492811CA536DE9_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item2_m949C431D298B80641EAA69F86E66E10759727B3C_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
// T3 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item3_mAEE5571981A28E2BCA354F228E7741C0F16EBBD0_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return (RuntimeObject *)L_0;
	}
}
// System.Void System.Tuple`3<System.Object,System.Object,System.Object>::.ctor(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_m25271C40A72B98D04365B37AA075A393FA07DD82_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_m_Item3_2(L_2);
		return;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_Equals_mE4282D65B2614390D3D6131F38CA4F71E38BD30B_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (bool)L_2;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_mC0D0C105DDA322C1B2E2BEF716D15EE7E7A97B04_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)((Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15->get_m_Item3_2();
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		return (bool)L_17;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_m66B7166E41172B9AC64C38A6EA9B0A7FF946F01C_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return (int32_t)L_2;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)((Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5;
		L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_RuntimeMethod_var)));
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_9 = V_0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return (int32_t)L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_16 = V_0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return (int32_t)L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_23 = V_0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23->get_m_Item3_2();
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		return (int32_t)L_25;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m1AED3AC52D43DA1716AA4458567FC4E6F7454B1A_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return (int32_t)L_1;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m64C75EE1F144BBF0539D92AEC518ECEF964CC28A_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		int32_t L_9;
		L_9 = Tuple_CombineHashCodes_m34B16565FCB93CC63DAF544CC55CD4459A7435AB((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, /*hidden argument*/NULL);
		return (int32_t)L_9;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m96B918423D9BBE3EA66EBFE4A617DFF628ECEA42_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_3);
		return (String_t*)L_4;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m5B9310EE550CC41905FF3002D70DEB87884DED37_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_3, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_m_Item2_1();
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_5, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = ___sb0;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_m_Item3_2();
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_10, (RuntimeObject *)L_11, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = ___sb0;
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_13, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_15 = ___sb0;
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_15);
		return (String_t*)L_16;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m5F32E198862372BC9F9C510790E5098584906CAC_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m70E2FD23ACE5513A49D47582782076A592E0A1AF_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_mB8D130AFCEE1037111D5F6387BF34F7893848F45_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item3_2();
		return (int32_t)L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item4_mCB7860299592F8FA0F6F60C1EBA20767982B16DB_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item4_3();
		return (int32_t)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_mB1DB3A2FC05B5B5E5B77912C84AFA3BF7FC379EE_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m793197594101F09AE8784336E26407E9D9A1EE0F_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item3_mCD9FE68A6D1886B978288B54AF485139F1EBCC88_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return (RuntimeObject *)L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item4_mB8E300B37D00D2559EAA714799D1C6CB28D8006C_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item4_3();
		return (RuntimeObject *)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m0251CCA621F83D757C11A2CC5026DDA24A088866_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mF4A4312C4C5D7EC10F1D0AC32360D20951F3E276_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mADA530A569FA02CEE365550C0B1364847F902DAC_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m50A0084C1E73C78361F32170CF616D08681D7380_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m7320ACEFEBD2FA7D50C947BE9CEC62DAE429A329_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m7C92F18128CD7BC314EECF7D6FBE3F0D99B87597_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mF6CE051EB914150BEB88244003A263509CD42FDE_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mA4ADF56200888B2A297C5913DA00A89F11BD87C5_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m16F774E0F869579B89A02E33198957BF2B362763_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mA6A81E3B39C49A2A483B7EC5A7FC6F305C84BDCD_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mCC90A51C5C963477EEE746E3D3856AEBE78FB78A_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mEAA1361DECE0C4E7F731346AD77D6999664527CA_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m936D976DB36E14668A40522AADE9283923079869_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mC190ED9AED96E2FE7A68F86FF0DE1AF6B3F8C270_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m61A3E25D9705ECD97BB9634081BFE1F51A11BB72_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4915ABA44B9B53926A3A694CDF011EF8C7345CD6_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m5AA1F690449F2F9671E0B94633F97A1FAD7E3ED1_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mDCEEB031BDBB99CF9F4FD8C66C8764E7145F233E_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m490BFF59EA4C5D89B467DFF2EBB8294B4D2B625D_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mBE8D06B5C36F3C91DE37A9D965AEB4B499832596_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mEA01486964659C4609BA96B58825B2E9B851FE10_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m66976206F24D939E2132FAB88213AB25CBC0AEED_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mB86D6414884FDC1E91052C11EDE9D2D76F7ECA4F_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m6F58BD0703FA3C41CC7D6F3230771D8B1DF6CEC4_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m88F46BFD94198E51067773C687AF1EA4E56BA6C9_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m61C295D3CAE75DAA73F736514C0F8305F21BF4D4_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m77B1860A1697D777A50B461899187B1F788FED67_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m33FE7C261E18C40BF698970133F4C4AAE221453C_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_m340C3A0B9B1D3D5617E73EFF0AECC0D26BA2434B_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mD613D87947DBD4EAA4AFAB2EAA52C64E61B53393_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___call0;
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_2 = ___call0;
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m4737379F2E23EA022A5577626A9B77BC652C6C81_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m85C211C6A8878EB2C829C518B2E2825592A6BAD2_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_2 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_mB08C5D84E6AF7F4ED076E863ABC8924F3683531F_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___action0;
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_1 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)((InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_6 = V_2;
		bool L_7 = ___arg00;
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1) */, (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)L_6, (bool)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		bool L_21 = ___arg00;
		bool L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_2 = ___call0;
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m883CB9322DD397C11303E11CE1D75DE4DAB7A2A1_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m9F6A762AD5938FB4E433C68A6CAE0E064358B79E_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m042F0FF8A168ACCAC76DFF33398FF72BE89A13D4_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___action0;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_1 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_2 = ___call0;
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mAEF284CEE451CDF002B423EAD1920E36A12A9CF0_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m7B52283F3C9BA5BFFADCEA8C22119BD2DEF4FD39_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m38113512C8395BCA851A99D1A947C8C56FF66C45_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___action0;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_1 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6, (RuntimeObject *)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_21 = ___arg00;
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_22 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_23);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_26 = V_0;
		int32_t L_27;
		L_27 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mF60EF62AFB15A35F2DD69476A73537390423F21A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m9DEDA5637D671AC58D580000A01B4B335B9923F0_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9;
		L_9 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002b;
	}

IL_002b:
	{
		MethodInfo_t * L_10 = V_0;
		return (MethodInfo_t *)L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_2_GetDelegate_m8F25D40B052080876D1C4762AA6E7E6703D0249E_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 * L_2 = (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m4B93C635FB8DB80244E4979D82F6F94941196483_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m28C35DB6F6DBCF1315EC5755FBA0B5DB80822DB7_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12;
		L_12 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return (MethodInfo_t *)L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_3_GetDelegate_m4D1CD01F37200B3D0525A100BCE71287EA769653_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 * L_2 = (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_mAD32A45894B24DF8063BA635592B37EAEAB2C63A_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m18804249F2696D07B6E5723A86A95E2A98424E62_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15;
		L_15 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return (MethodInfo_t *)L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_4_GetDelegate_mCC9B16CF07EAAA26AE65B3BB31CFFC22031EE4A0_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD * L_2 = (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		VirtActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)285212672)))) == ((int32_t)((int32_t)16777216)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * SparselyPopulatedArrayAddInfo_1_get_Source_mF16A5757073BEDF261071800F1E44DBC7FD64D0A_gshared_inline (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, const RuntimeMethod* method)
{
	{
		SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 * L_0 = (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)__this->get_m_source_0();
		return (SparselyPopulatedArrayFragment_1_tC889F0E1C294F8A6562DC32D85F95C85B8FDF1E6 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_m504E6BF8E69B6BF3E2D670654834F4AD8D47BDB7_gshared_inline (SparselyPopulatedArrayAddInfo_1_t8F3BEC3A081BCFDF83207FC35A690A7E2773639D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_index_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_gshared_inline (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_gshared_inline (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_gshared_inline (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_gshared_inline (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
