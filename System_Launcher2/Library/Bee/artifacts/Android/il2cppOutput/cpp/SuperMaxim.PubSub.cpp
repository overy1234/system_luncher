#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
struct ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C;
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1;
struct IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct KeyCollection_t9522C3C920110393F1F2E122A89A7842CC685F4B;
struct KeyCollection_tF6A5442C3A0EF2C6B6DF4DBF172663F9FA86EF88;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE;
struct MonoBehaviourSingleton_2_tD19F46C08BD2889396ACFE931AEB563B7E00445B;
struct MonoBehaviourSingleton_2_t86F8869B222A6CCF1C9DA1A1402EBA226436228E;
struct MonoBehaviourSingleton_2_tB4FF5120168A9EEDAA0754897E3C519F5DB68954;
struct Segment_tC500857FBC09702E4FF2578DCC44CB3DD316473C;
struct Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009;
struct Singleton_2_t927611E93329A1E53B36D564D10928746AE795AB;
struct ValueCollection_t7E3246E03017C6AA513D095FDEC1FBA15801DFA9;
struct ValueCollection_t8E867C2EC22CF5A8700DFD96E0AC354F91A080DE;
struct EntryU5BU5D_t0E471725A3D61791995809865638BEAF7AF674E0;
struct EntryU5BU5D_t47C6FE862C771C10036865490A4961A36436BC17;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct SubscriberU5BU5D_tBD1A86C5CCD99871D2A4B6E776CC3E29DABA4C06;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1;
struct ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B;
struct Exception_t;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC;
struct ILoggerConfig_tD1C18ED072DCE5838062C0A64D58213E5FFD8210;
struct IMessenger_t98599D3FB6D0C41E42240E870A3550A9E74199EC;
struct IMessengerMonitor_t1201965F6CC118236BE8F5D2BCAA9A3783526CF2;
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
struct IThreadDispatcher_t19BB085901F7A19D3FE64C82853F46E216CB81C5;
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
struct MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Messenger_t6022A59860E21FB0ADB137CC07FB1B7C36ED4E08;
struct MessengerMonitor_t227D984AA6000DC3F4876DC186253020FD142E3D;
struct MethodBase_t;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct MulticastDelegate_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45;
struct PayloadCommandPublisher_tF5D410F9781E6C852699AB0A69409C5EB4F91089;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct String_t;
struct Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A;
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
struct Type_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t8341C76ECF123B1850738401324B8083BCE9F4B2;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D;
struct WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2;
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoggerConfig_tD1C18ED072DCE5838062C0A64D58213E5FFD8210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IThreadDispatcher_t19BB085901F7A19D3FE64C82853F46E216CB81C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7F551BF9E53D3ED15EDA6962FBAD3FC2A7591228____8FE3E4CB84FE7FA8057D613A274B6A2811FFFC20719910C44C2D225A076F4F4F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7F551BF9E53D3ED15EDA6962FBAD3FC2A7591228____FCD6FAFF46B2C5486DB1E9446A58605D68B83A01F097ADCE073B4C3D38E7F36E_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral17963DAF3A97A1DB71C5A2C1415A8C4617048238;
IL2CPP_EXTERN_C String_t* _stringLiteral2091C74E4522CA143A0DA3FD803199B72E05955D;
IL2CPP_EXTERN_C String_t* _stringLiteral42978315D472AD03D77D9F28425D2452EDCB4B21;
IL2CPP_EXTERN_C String_t* _stringLiteral55315F802CF39E863FFE02A657BB40D7FB043F59;
IL2CPP_EXTERN_C String_t* _stringLiteral61380A6CB61EB81C8683D3967896FEDE44E18405;
IL2CPP_EXTERN_C String_t* _stringLiteral66740196DDAF70E378582F1D80EB9D8C6DA817CB;
IL2CPP_EXTERN_C String_t* _stringLiteral98BDF7FE5F62EB70EE236FC1C4E73E0AC6D02F78;
IL2CPP_EXTERN_C String_t* _stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43;
IL2CPP_EXTERN_C String_t* _stringLiteralB7BCD813B5FD5C8B38AC0BCE6ECF4E8328B84F83;
IL2CPP_EXTERN_C String_t* _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350;
IL2CPP_EXTERN_C String_t* _stringLiteralE9489C15AA4F196323930F5B6159572433A6D4F6;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m84BF08DC5572BD11CF16CDB8545BB779E9FAED68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_m327E413FB4FBFA716E2467485E0EF3694ED7F5BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_mEF0936F7D6EA38C3740C1EC5F8F2CF03113AC67B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7AA086B03780D916811DABF36721B6879EDF1279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFFCD8322B05E161004CE7294A66855DCA7AF189B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m7D2267A196FF1884EFC4BD0ABD61F3F069643A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE4A66FB1BB94A38DC2926DBE479BF8217547FF89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m66C2D4451C90A18D335E0FCF75289B39C064D6E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mFD41744A2C24F1E07F938EFF89027D6CF552F943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7E3EF2B823FA2775745A2436603741C175677DD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0A5167F4C918856AF7794F5438E5FC625BE2ADC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6DA39ABDF3B775CF498BFF1527DF8EC15880C3C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m8BF2EC874534E78AA9267FE92E836946AFA3679D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB9359BF5594ED6AD9C7C30FE57B5EA0565E6E1AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m061DE983A08EB7F185445DCB60A094AFA0010DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2E9A2F0AE14DCD34A0FB22FA1224F761283FAB30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0A37C7ECAA7EA1C2FA3AEB23245BF99481440412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMessengerPublish_Publish_TisPayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45_m7A0975057582FD3DCC52D9F7179198A0071D0881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m838229A3374217C0A45E80991BB0FA12DCAD6628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m06242DD948410568A9CEDA8A55ED1B83D54993D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m96CF4F911D390CA1AA9DD5D5C83F393E77D14933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m443F7DD98C5CCCA15072E774DE6F3D3F61FE6D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mB2014409672F2DD3F9F84CB05AFBF39B26316961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m5EAB1614D6E4A060FAC8114CFF9B3E378B248903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8E31F59425E7115F248301A2CFB5693A224F6F62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBDF1F4E8BB663177A3C7D06D75520D8B50676B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m172CE80C23FE7858652FC2C1F5DA1A986F37ED63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviourSingleton_2__ctor_m40BFECD2F544D0B185A9F6D74AE400A8ED52AE5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviourSingleton_2__ctor_mCE8458C61129014E3F99AC5834312E5AF54E799E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviourSingleton_2_get_Default_mB4825EEC3A85EF4BB4132839BDFE0B8B4AE77C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_2__ctor_m6E77433C1F3C9DEE399445E874CBE191F8E1F385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisException_t_mA7450A16CA946B83C6E0B2B10471E5448A3F41AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subscriber__ctor_m561CF390020794B37F659C882E8C56A59AE849AA_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t8F794B3E721AC1B3CD6CF63DD7778729A5663554 
{
};
struct ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_tC500857FBC09702E4FF2578DCC44CB3DD316473C* ____tail;
	Segment_tC500857FBC09702E4FF2578DCC44CB3DD316473C* ____head;
};
struct Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0E471725A3D61791995809865638BEAF7AF674E0* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9522C3C920110393F1F2E122A89A7842CC685F4B* ____keys;
	ValueCollection_t7E3246E03017C6AA513D095FDEC1FBA15801DFA9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t47C6FE862C771C10036865490A4961A36436BC17* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF6A5442C3A0EF2C6B6DF4DBF172663F9FA86EF88* ____keys;
	ValueCollection_t8E867C2EC22CF5A8700DFD96E0AC354F91A080DE* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE  : public RuntimeObject
{
	SubscriberU5BU5D_tBD1A86C5CCD99871D2A4B6E776CC3E29DABA4C06* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009  : public RuntimeObject
{
};
struct Singleton_2_t927611E93329A1E53B36D564D10928746AE795AB  : public RuntimeObject
{
};
struct U3CPrivateImplementationDetailsU3E_t7F551BF9E53D3ED15EDA6962FBAD3FC2A7591228  : public RuntimeObject
{
};
struct CollectionExtensions_tF777A4D6019F88420D3030FD68A998909D7A0FD3  : public RuntimeObject
{
};
struct ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1  : public RuntimeObject
{
	RuntimeObject* ___U3CConfigU3Ek__BackingField;
};
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};
struct DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B  : public RuntimeObject
{
	WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* ___U3CActionU3Ek__BackingField;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___U3CPayloadU3Ek__BackingField;
};
struct LogTargetExtensions_tEF466B94D10814313201D5044A92B48CB69BE4DE  : public RuntimeObject
{
};
struct Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1  : public RuntimeObject
{
};
struct PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45  : public RuntimeObject
{
	String_t* ____id;
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ____data;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A  : public RuntimeObject
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____callbackTarget;
	MethodInfo_t* ____callbackMethod;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____predicateTarget;
	MethodInfo_t* ____predicateMethod;
	Type_t* ___U3CPayloadTypeU3Ek__BackingField;
	int32_t ___U3CIdU3Ek__BackingField;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t8341C76ECF123B1850738401324B8083BCE9F4B2  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2  : public RuntimeObject
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____ref;
	bool ___IsDisposed;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247 
{
	List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* ____list;
	int32_t ____index;
	int32_t ____version;
	Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* ____current;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Messenger_t6022A59860E21FB0ADB137CC07FB1B7C36ED4E08  : public Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009
{
	Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* ____subscribersSet;
	List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* ____subscribers;
	List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* ____add;
	bool ____isPublishing;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread;
	RuntimeObject* ___m_ThreadStartArg;
	RuntimeObject* ___pending_exception;
	MulticastDelegate_t* ___m_Delegate;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext;
	bool ___m_ExecutionContextBelongsToOuterScope;
	RuntimeObject* ___principal;
	int32_t ___principal_version;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D  : public WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2
{
	int32_t ___U3CIdU3Ek__BackingField;
	MethodInfo_t* ___U3CMethodU3Ek__BackingField;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1146_t6C276A379ADCF2C98E11F1BB6E9D1EECBCE318E4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1146_t6C276A379ADCF2C98E11F1BB6E9D1EECBCE318E4__padding[1146];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1718_tB931F0644024E2789707EA015F091B5FD9631F76 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1718_tB931F0644024E2789707EA015F091B5FD9631F76__padding[1718];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct LogTarget_t53556110E18840BCBBB7848C3EEEDF99C548F88E 
{
	int32_t ___value__;
};
struct LogType_t99AA3865ADD86052CE7FB79699BD600A04884254 
{
	int32_t ___value__;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CTargetU3Ek__BackingField;
	bool ___U3CIsEnabledU3Ek__BackingField;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CMessageTimeSpanU3Ek__BackingField;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	bool ___isLongReference;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct MonoBehaviourSingleton_2_tD19F46C08BD2889396ACFE931AEB563B7E00445B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct MonoBehaviourSingleton_2_t86F8869B222A6CCF1C9DA1A1402EBA226436228E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct PayloadCommandPublisher_tF5D410F9781E6C852699AB0A69409C5EB4F91089  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* ____payload;
};
struct MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86  : public MonoBehaviourSingleton_2_t86F8869B222A6CCF1C9DA1A1402EBA226436228E
{
	ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* ____tasks;
	int32_t ___U3CThreadIdU3Ek__BackingField;
};
struct MessengerMonitor_t227D984AA6000DC3F4876DC186253020FD142E3D  : public MonoBehaviourSingleton_2_tD19F46C08BD2889396ACFE931AEB563B7E00445B
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE_StaticFields
{
	SubscriberU5BU5D_tBD1A86C5CCD99871D2A4B6E776CC3E29DABA4C06* ___s_emptyArray;
};
struct Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_StaticFields
{
	RuntimeObject* ___U3CDefaultU3Ek__BackingField;
};
struct Singleton_2_t927611E93329A1E53B36D564D10928746AE795AB_StaticFields
{
	RuntimeObject* ___U3CDefaultU3Ek__BackingField;
};
struct U3CPrivateImplementationDetailsU3E_t7F551BF9E53D3ED15EDA6962FBAD3FC2A7591228_StaticFields
{
	__StaticArrayInitTypeSizeU3D1718_tB931F0644024E2789707EA015F091B5FD9631F76 ___8FE3E4CB84FE7FA8057D613A274B6A2811FFFC20719910C44C2D225A076F4F4F;
	__StaticArrayInitTypeSizeU3D1146_t6C276A379ADCF2C98E11F1BB6E9D1EECBCE318E4 ___FCD6FAFF46B2C5486DB1E9446A58605D68B83A01F097ADCE073B4C3D38E7F36E;
};
struct Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_StaticFields
{
	RuntimeObject* ___U3CConsoleU3Ek__BackingField;
};
struct MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_StaticFields
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____root;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr;
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture;
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct MonoBehaviourSingleton_2_tD19F46C08BD2889396ACFE931AEB563B7E00445B_StaticFields
{
	RuntimeObject* ____default;
};
struct MonoBehaviourSingleton_2_t86F8869B222A6CCF1C9DA1A1402EBA226436228E_StaticFields
{
	RuntimeObject* ____default;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoBehaviourSingleton_2_get_Default_mE6C220055246CDAFA945D88A16F8A99687A1B64B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_2__ctor_mEBCA3C85FB356F6D7D7A7F2E682169BCFBCB4AAC_gshared (Singleton_2_t927611E93329A1E53B36D564D10928746AE795AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourSingleton_2__ctor_m45329D2F8885B0FD388139D30546E27F22331DB3_gshared (MonoBehaviourSingleton_2_tB4FF5120168A9EEDAA0754897E3C519F5DB68954* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_2_get_Default_m9636C4027E065E6AC47E0CD16EF993C8CFE98B05_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_gshared (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mA93A5A146DE4520B153BECFFAF36279EB29FA21E_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline (const RuntimeMethod* method) ;
inline RuntimeObject* MonoBehaviourSingleton_2_get_Default_mB4825EEC3A85EF4BB4132839BDFE0B8B4AE77C9B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))MonoBehaviourSingleton_2_get_Default_mE6C220055246CDAFA945D88A16F8A99687A1B64B_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Subscriber_get_IsAlive_mDA69E0DE3C6D808C8B169FE1A61147590F5DC8E8 (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Subscriber_get_PayloadType_m7CD9C69049756C459467440804D864BA89F0BCEA_inline (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m7D2267A196FF1884EFC4BD0ABD61F3F069643A4D (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryGetValue_m7E3EF2B823FA2775745A2436603741C175677DD1 (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* __this, Type_t* ___0_key, Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1*, Type_t*, Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m0A5167F4C918856AF7794F5438E5FC625BE2ADC2 (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
inline void Dictionary_2_Add_mFFCD8322B05E161004CE7294A66855DCA7AF189B (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* __this, Type_t* ___0_key, Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1*, Type_t*, Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Subscriber_get_Id_m8921B18B7D9226BFF6A10684EE57C7DB32FB08CA_inline (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mE4A66FB1BB94A38DC2926DBE479BF8217547FF89 (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2_Add_m7AA086B03780D916811DABF36721B6879EDF1279 (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* __this, int32_t ___0_key, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338*, int32_t, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool List_1_Contains_m96CF4F911D390CA1AA9DD5D5C83F393E77D14933 (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_m838229A3374217C0A45E80991BB0FA12DCAD6628_inline (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* List_1_get_Item_m172CE80C23FE7858652FC2C1F5DA1A986F37ED63 (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void List_1_RemoveAt_mB2014409672F2DD3F9F84CB05AFBF39B26316961 (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m5EAB1614D6E4A060FAC8114CFF9B3E378B248903 (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
inline Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* Dictionary_2_get_Item_mB9359BF5594ED6AD9C7C30FE57B5EA0565E6E1AF (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* (*) (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_Remove_mFD41744A2C24F1E07F938EFF89027D6CF552F943 (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m8BF2EC874534E78AA9267FE92E836946AFA3679D (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
inline bool Dictionary_2_Remove_m66C2D4451C90A18D335E0FCF75289B39C064D6E0 (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
inline int32_t List_1_get_Count_mBDF1F4E8BB663177A3C7D06D75520D8B50676B41_inline (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247 List_1_GetEnumerator_m443F7DD98C5CCCA15072E774DE6F3D3F61FE6D27 (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247 (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_m061DE983A08EB7F185445DCB60A094AFA0010DF4 (Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* Enumerator_get_Current_m0A37C7ECAA7EA1C2FA3AEB23245BF99481440412_inline (Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247* __this, const RuntimeMethod* method)
{
	return ((  Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* (*) (Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_SubscribeInternal_m4F87FF30B02B7BCC03BD0C2B082DDC51A1106740 (Messenger_t6022A59860E21FB0ADB137CC07FB1B7C36ED4E08* __this, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* ___0_subscriber, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m2E9A2F0AE14DCD34A0FB22FA1224F761283FAB30 (Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void List_1_Clear_m06242DD948410568A9CEDA8A55ED1B83D54993D7_inline (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_m6DA39ABDF3B775CF498BFF1527DF8EC15880C3C2 (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline void List_1__ctor_m8E31F59425E7115F248301A2CFB5693A224F6F62 (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void Singleton_2__ctor_m6E77433C1F3C9DEE399445E874CBE191F8E1F385 (Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009*, const RuntimeMethod*))Singleton_2__ctor_mEBCA3C85FB356F6D7D7A7F2E682169BCFBCB4AAC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
inline void MonoBehaviourSingleton_2__ctor_mCE8458C61129014E3F99AC5834312E5AF54E799E (MonoBehaviourSingleton_2_tD19F46C08BD2889396ACFE931AEB563B7E00445B* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoBehaviourSingleton_2_tD19F46C08BD2889396ACFE931AEB563B7E00445B*, const RuntimeMethod*))MonoBehaviourSingleton_2__ctor_m45329D2F8885B0FD388139D30546E27F22331DB3_gshared)(__this, method);
}
inline RuntimeObject* Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Singleton_2_get_Default_m9636C4027E065E6AC47E0CD16EF993C8CFE98B05_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_get_Config_m1C7E8859DD3F2B30A6EF383FC6F311596C5E7488_inline (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogInfo_mB5C962810941305370396A6CD90637939BBB9C28 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogWarning_m9AF570F72C09D72D00945ADAA672D5B11CECDADA (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_mCB157FEC80878A20717BF7A5C9C93DA855381790 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_m40407031B66B59A795BC3CCAA6AC6D5650973EDC (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
inline String_t* String_Join_TisException_t_mA7450A16CA946B83C6E0B2B10471E5448A3F41AE (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_gshared)(___0_separator, ___1_values, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLoggerConfig__ctor_m2103571E4BB067ADF77C5D3E7C8A175A5D030238 (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_Name_mD175E7412CD9B0AEAEBF9A4458BF6F41DC5D7BAB_inline (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_Target_mFBAA43BE58B9D0AE27B4527ED62A5963F6BC88EC_inline (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_IsEnabled_m3088E50F6022F3140DDB0840AFEEF6AF97148BD8_inline (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger__ctor_m4F7E7FC7D53E5D5F9643F9F893B015F2F53E78A7 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_get_Id_m914B41CBA4D7D0C48FC8B2872EBB218DC5DA410C_inline (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper__ctor_m95D375074D634E0ACC421ABBFA75B199BD020A0A (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WeakRefDelegate_set_Method_mE37B3303A3B50634CFF813E560F5A1778A45605F_inline (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefWrapper_get_IsAlive_m674104EDA9EFE57E97FC7B09EC994E03DC3E4169 (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* WeakRefDelegate_get_Method_mE90E2E9649B8C1F2D81CBEE00335DF3119D7CA15_inline (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRefWrapper_get_Target_m4340BBE09FE7396FAA1A479BED22504D3233C678 (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper_Dispose_m98A708C2A78C57C834C6DFDE382DBD945EFE2767 (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefDelegate_Equals_mFC8E6A9517C37B64C0A5022A2D69081FB5ECE472 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, Delegate_t* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m8085B7DB432EB4B11F2FFDB543B3F1D05D4A8D99 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefDelegate__ctor_m3374A043ECC1AC7E7C736059FA26C0ABA49B6647 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, Delegate_t* ___0_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DispatcherTask_set_Action_mF6247AADEDB25E7D450A93D2C00CFEED8DB9AAA2_inline (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DispatcherTask_set_Payload_m36AF0F44312B9476446A4697D6A31F70C2BD030D_inline (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC_inline (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DispatcherTask_get_Payload_mA151C571114319135A0A7A4291E8F4822F7D5695_inline (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRefDelegate_Invoke_m0D27D281EE5A5822AB66612AC136AAE3FFF85304 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper_Dispose_m2F47E082EA39D5EE31BD16603BC9B81DEC0E0BC9 (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, const RuntimeMethod* method) ;
inline int32_t ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514 (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C*, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mA93A5A146DE4520B153BECFFAF36279EB29FA21E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadDispatcher_set_ThreadId_m3A7DC1250209776557972572502DE90AF89D2B1C_inline (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask__ctor_m2E128250BF6D59F2C25ECF0EA9450932DACACCD2 (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, Delegate_t* ___0_action, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_payload, const RuntimeMethod* method) ;
inline void ConcurrentQueue_1_Enqueue_m84BF08DC5572BD11CF16CDB8545BB779E9FAED68 (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* __this, DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C*, DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B*, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared)(__this, ___0_item, method);
}
inline bool ConcurrentQueue_1_TryDequeue_m327E413FB4FBFA716E2467485E0EF3694ED7F5BA (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* __this, DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C*, DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B**, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_Invoke_m975EBDF90E89D45D647A6A28DCB19A8BE3325CDE (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_Dispose_m569C8F70C80384E1F19852EE97BCB1053D314962 (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) ;
inline void ConcurrentQueue_1__ctor_mEF0936F7D6EA38C3740C1EC5F8F2CF03113AC67B (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C*, const RuntimeMethod*))ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared)(__this, method);
}
inline void MonoBehaviourSingleton_2__ctor_m40BFECD2F544D0B185A9F6D74AE400A8ED52AE5E (MonoBehaviourSingleton_2_t86F8869B222A6CCF1C9DA1A1402EBA226436228E* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoBehaviourSingleton_2_t86F8869B222A6CCF1C9DA1A1402EBA226436228E*, const RuntimeMethod*))MonoBehaviourSingleton_2__ctor_m45329D2F8885B0FD388139D30546E27F22331DB3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m7AB93F1E57A94FC7904D6AE15D9B756F2588B5EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7F551BF9E53D3ED15EDA6962FBAD3FC2A7591228____8FE3E4CB84FE7FA8057D613A274B6A2811FFFC20719910C44C2D225A076F4F4F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7F551BF9E53D3ED15EDA6962FBAD3FC2A7591228____FCD6FAFF46B2C5486DB1E9446A58605D68B83A01F097ADCE073B4C3D38E7F36E_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1718));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7F551BF9E53D3ED15EDA6962FBAD3FC2A7591228____8FE3E4CB84FE7FA8057D613A274B6A2811FFFC20719910C44C2D225A076F4F4F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1146));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7F551BF9E53D3ED15EDA6962FBAD3FC2A7591228____FCD6FAFF46B2C5486DB1E9446A58605D68B83A01F097ADCE073B4C3D38E7F36E_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)26);
		(&V_0)->___TotalTypes = ((int32_t)26);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m9E17979CA9299C4FA01219DF777FB8F3EFBFBDB8 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t8341C76ECF123B1850738401324B8083BCE9F4B2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshal_pinvoke(const MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806& unmarshaled, MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshal_pinvoke_back(const MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshaled_pinvoke& marshaled, MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshal_pinvoke_cleanup(MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshal_com(const MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806& unmarshaled, MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshal_com_back(const MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshaled_com& marshaled, MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshal_com_cleanup(MonoScriptData_tC147629C12E5D9731CD538CA87A5CE2B1504D806_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger__cctor_m669C3646FEE769DCFB2FF843911B0BFAEBFB3D96 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IThreadDispatcher_t19BB085901F7A19D3FE64C82853F46E216CB81C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourSingleton_2_get_Default_mB4825EEC3A85EF4BB4132839BDFE0B8B4AE77C9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42978315D472AD03D77D9F28425D2452EDCB4B21);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3;
		L_3 = MonoBehaviourSingleton_2_get_Default_mB4825EEC3A85EF4BB4132839BDFE0B8B4AE77C9B(MonoBehaviourSingleton_2_get_Default_mB4825EEC3A85EF4BB4132839BDFE0B8B4AE77C9B_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IThreadDispatcher_t19BB085901F7A19D3FE64C82853F46E216CB81C5_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_0);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(6, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_0, _stringLiteral42978315D472AD03D77D9F28425D2452EDCB4B21, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_SubscribeInternal_m4F87FF30B02B7BCC03BD0C2B082DDC51A1106740 (Messenger_t6022A59860E21FB0ADB137CC07FB1B7C36ED4E08* __this, Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* ___0_subscriber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7AA086B03780D916811DABF36721B6879EDF1279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFFCD8322B05E161004CE7294A66855DCA7AF189B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7D2267A196FF1884EFC4BD0ABD61F3F069643A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE4A66FB1BB94A38DC2926DBE479BF8217547FF89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7E3EF2B823FA2775745A2436603741C175677DD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0A5167F4C918856AF7794F5438E5FC625BE2ADC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m838229A3374217C0A45E80991BB0FA12DCAD6628_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m96CF4F911D390CA1AA9DD5D5C83F393E77D14933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17963DAF3A97A1DB71C5A2C1415A8C4617048238);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2091C74E4522CA143A0DA3FD803199B72E05955D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7BCD813B5FD5C8B38AC0BCE6ECF4E8328B84F83);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* V_1 = NULL;
	{
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_0 = ___0_subscriber;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_1 = ___0_subscriber;
		NullCheck(L_1);
		bool L_2;
		L_2 = Subscriber_get_IsAlive_mDA69E0DE3C6D808C8B169FE1A61147590F5DC8E8(L_1, NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2091C74E4522CA143A0DA3FD803199B72E05955D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral2091C74E4522CA143A0DA3FD803199B72E05955D);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(18, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_3, _stringLiteralB7BCD813B5FD5C8B38AC0BCE6ECF4E8328B84F83, L_5);
		return;
	}

IL_002a:
	{
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_7 = ___0_subscriber;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Subscriber_get_PayloadType_m7CD9C69049756C459467440804D864BA89F0BCEA_inline(L_7, NULL);
		V_0 = L_8;
		Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* L_9 = __this->____subscribersSet;
		Type_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_m7D2267A196FF1884EFC4BD0ABD61F3F069643A4D(L_9, L_10, Dictionary_2_ContainsKey_m7D2267A196FF1884EFC4BD0ABD61F3F069643A4D_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* L_12 = __this->____subscribersSet;
		Type_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_TryGetValue_m7E3EF2B823FA2775745A2436603741C175677DD1(L_12, L_13, (&V_1), Dictionary_2_TryGetValue_m7E3EF2B823FA2775745A2436603741C175677DD1_RuntimeMethod_var);
		goto IL_0063;
	}

IL_0050:
	{
		Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* L_15 = (Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338*)il2cpp_codegen_object_new(Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0A5167F4C918856AF7794F5438E5FC625BE2ADC2(L_15, Dictionary_2__ctor_m0A5167F4C918856AF7794F5438E5FC625BE2ADC2_RuntimeMethod_var);
		V_1 = L_15;
		Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* L_16 = __this->____subscribersSet;
		Type_t* L_17 = V_0;
		Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* L_18 = V_1;
		NullCheck(L_16);
		Dictionary_2_Add_mFFCD8322B05E161004CE7294A66855DCA7AF189B(L_16, L_17, L_18, Dictionary_2_Add_mFFCD8322B05E161004CE7294A66855DCA7AF189B_RuntimeMethod_var);
	}

IL_0063:
	{
		Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* L_19 = V_1;
		if (L_19)
		{
			goto IL_0077;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_20;
		L_20 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(12, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_20, _stringLiteral17963DAF3A97A1DB71C5A2C1415A8C4617048238);
		return;
	}

IL_0077:
	{
		Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* L_22 = V_1;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_23 = ___0_subscriber;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Subscriber_get_Id_m8921B18B7D9226BFF6A10684EE57C7DB32FB08CA_inline(L_23, NULL);
		NullCheck(L_22);
		bool L_25;
		L_25 = Dictionary_2_ContainsKey_mE4A66FB1BB94A38DC2926DBE479BF8217547FF89(L_22, L_24, Dictionary_2_ContainsKey_mE4A66FB1BB94A38DC2926DBE479BF8217547FF89_RuntimeMethod_var);
		if (!L_25)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
		Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* L_26 = V_1;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_27 = ___0_subscriber;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Subscriber_get_Id_m8921B18B7D9226BFF6A10684EE57C7DB32FB08CA_inline(L_27, NULL);
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_29 = ___0_subscriber;
		NullCheck(L_26);
		Dictionary_2_Add_m7AA086B03780D916811DABF36721B6879EDF1279(L_26, L_28, L_29, Dictionary_2_Add_m7AA086B03780D916811DABF36721B6879EDF1279_RuntimeMethod_var);
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_30 = __this->____subscribers;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_31 = ___0_subscriber;
		NullCheck(L_30);
		bool L_32;
		L_32 = List_1_Contains_m96CF4F911D390CA1AA9DD5D5C83F393E77D14933(L_30, L_31, List_1_Contains_m96CF4F911D390CA1AA9DD5D5C83F393E77D14933_RuntimeMethod_var);
		if (L_32)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_33 = __this->____subscribers;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_34 = ___0_subscriber;
		NullCheck(L_33);
		List_1_Add_m838229A3374217C0A45E80991BB0FA12DCAD6628_inline(L_33, L_34, List_1_Add_m838229A3374217C0A45E80991BB0FA12DCAD6628_RuntimeMethod_var);
	}

IL_00ad:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger_Process_m29ED94B40EE456758D887F538E894EDF849E64DA (Messenger_t6022A59860E21FB0ADB137CC07FB1B7C36ED4E08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7D2267A196FF1884EFC4BD0ABD61F3F069643A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m66C2D4451C90A18D335E0FCF75289B39C064D6E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mFD41744A2C24F1E07F938EFF89027D6CF552F943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m8BF2EC874534E78AA9267FE92E836946AFA3679D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB9359BF5594ED6AD9C7C30FE57B5EA0565E6E1AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m061DE983A08EB7F185445DCB60A094AFA0010DF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E9A2F0AE14DCD34A0FB22FA1224F761283FAB30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0A37C7ECAA7EA1C2FA3AEB23245BF99481440412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m06242DD948410568A9CEDA8A55ED1B83D54993D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m443F7DD98C5CCCA15072E774DE6F3D3F61FE6D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mB2014409672F2DD3F9F84CB05AFBF39B26316961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m5EAB1614D6E4A060FAC8114CFF9B3E378B248903_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDF1F4E8BB663177A3C7D06D75520D8B50676B41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m172CE80C23FE7858652FC2C1F5DA1A986F37ED63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* V_1 = NULL;
	Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* V_3 = NULL;
	{
		V_0 = 0;
		goto IL_0091;
	}

IL_0007:
	{
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_0 = __this->____subscribers;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_2;
		L_2 = List_1_get_Item_m172CE80C23FE7858652FC2C1F5DA1A986F37ED63(L_0, L_1, List_1_get_Item_m172CE80C23FE7858652FC2C1F5DA1A986F37ED63_RuntimeMethod_var);
		V_1 = L_2;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_3 = V_1;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_4 = __this->____subscribers;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_mB2014409672F2DD3F9F84CB05AFBF39B26316961(L_4, L_5, List_1_RemoveAt_mB2014409672F2DD3F9F84CB05AFBF39B26316961_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_008d;
	}

IL_0029:
	{
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = Subscriber_get_IsAlive_mDA69E0DE3C6D808C8B169FE1A61147590F5DC8E8(L_7, NULL);
		if (L_8)
		{
			goto IL_008d;
		}
	}
	{
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_9 = __this->____subscribers;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_10 = V_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Remove_m5EAB1614D6E4A060FAC8114CFF9B3E378B248903(L_9, L_10, List_1_Remove_m5EAB1614D6E4A060FAC8114CFF9B3E378B248903_RuntimeMethod_var);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* L_13 = __this->____subscribersSet;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_14 = V_1;
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = Subscriber_get_PayloadType_m7CD9C69049756C459467440804D864BA89F0BCEA_inline(L_14, NULL);
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m7D2267A196FF1884EFC4BD0ABD61F3F069643A4D(L_13, L_15, Dictionary_2_ContainsKey_m7D2267A196FF1884EFC4BD0ABD61F3F069643A4D_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_008d;
		}
	}
	{
		Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* L_17 = __this->____subscribersSet;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_18 = V_1;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = Subscriber_get_PayloadType_m7CD9C69049756C459467440804D864BA89F0BCEA_inline(L_18, NULL);
		NullCheck(L_17);
		Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* L_20;
		L_20 = Dictionary_2_get_Item_mB9359BF5594ED6AD9C7C30FE57B5EA0565E6E1AF(L_17, L_19, Dictionary_2_get_Item_mB9359BF5594ED6AD9C7C30FE57B5EA0565E6E1AF_RuntimeMethod_var);
		Dictionary_2_t7C0E0EE9DC973C0DC73409C540BD80F0B917A338* L_21 = L_20;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Subscriber_get_Id_m8921B18B7D9226BFF6A10684EE57C7DB32FB08CA_inline(L_22, NULL);
		NullCheck(L_21);
		bool L_24;
		L_24 = Dictionary_2_Remove_mFD41744A2C24F1E07F938EFF89027D6CF552F943(L_21, L_23, Dictionary_2_Remove_mFD41744A2C24F1E07F938EFF89027D6CF552F943_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_25;
		L_25 = Dictionary_2_get_Count_m8BF2EC874534E78AA9267FE92E836946AFA3679D(L_21, Dictionary_2_get_Count_m8BF2EC874534E78AA9267FE92E836946AFA3679D_RuntimeMethod_var);
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* L_26 = __this->____subscribersSet;
		Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_27 = V_1;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = Subscriber_get_PayloadType_m7CD9C69049756C459467440804D864BA89F0BCEA_inline(L_27, NULL);
		NullCheck(L_26);
		bool L_29;
		L_29 = Dictionary_2_Remove_m66C2D4451C90A18D335E0FCF75289B39C064D6E0(L_26, L_28, Dictionary_2_Remove_m66C2D4451C90A18D335E0FCF75289B39C064D6E0_RuntimeMethod_var);
	}

IL_008d:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0091:
	{
		int32_t L_31 = V_0;
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_32 = __this->____subscribers;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mBDF1F4E8BB663177A3C7D06D75520D8B50676B41_inline(L_32, List_1_get_Count_mBDF1F4E8BB663177A3C7D06D75520D8B50676B41_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0007;
		}
	}
	{
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_34 = __this->____add;
		NullCheck(L_34);
		Enumerator_tF9ED8F3BA6C44C317B25E5551BC8FC274E45B247 L_35;
		L_35 = List_1_GetEnumerator_m443F7DD98C5CCCA15072E774DE6F3D3F61FE6D27(L_34, List_1_GetEnumerator_m443F7DD98C5CCCA15072E774DE6F3D3F61FE6D27_RuntimeMethod_var);
		V_2 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{
				Enumerator_Dispose_m061DE983A08EB7F185445DCB60A094AFA0010DF4((&V_2), Enumerator_Dispose_m061DE983A08EB7F185445DCB60A094AFA0010DF4_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00bf_1;
			}

IL_00b0_1:
			{
				Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_36;
				L_36 = Enumerator_get_Current_m0A37C7ECAA7EA1C2FA3AEB23245BF99481440412_inline((&V_2), Enumerator_get_Current_m0A37C7ECAA7EA1C2FA3AEB23245BF99481440412_RuntimeMethod_var);
				V_3 = L_36;
				Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* L_37 = V_3;
				Messenger_SubscribeInternal_m4F87FF30B02B7BCC03BD0C2B082DDC51A1106740(__this, L_37, NULL);
			}

IL_00bf_1:
			{
				bool L_38;
				L_38 = Enumerator_MoveNext_m2E9A2F0AE14DCD34A0FB22FA1224F761283FAB30((&V_2), Enumerator_MoveNext_m2E9A2F0AE14DCD34A0FB22FA1224F761283FAB30_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_00b0_1;
				}
			}
			{
				goto IL_00d8;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d8:
	{
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_39 = __this->____add;
		NullCheck(L_39);
		List_1_Clear_m06242DD948410568A9CEDA8A55ED1B83D54993D7_inline(L_39, List_1_Clear_m06242DD948410568A9CEDA8A55ED1B83D54993D7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Messenger__ctor_mC8112FE9355B098121301568906CA1CC2BD95C16 (Messenger_t6022A59860E21FB0ADB137CC07FB1B7C36ED4E08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6DA39ABDF3B775CF498BFF1527DF8EC15880C3C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E31F59425E7115F248301A2CFB5693A224F6F62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2__ctor_m6E77433C1F3C9DEE399445E874CBE191F8E1F385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1* L_0 = (Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1*)il2cpp_codegen_object_new(Dictionary_2_tEE04417EA947E3AA0B82087681E6C9D4490D36C1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6DA39ABDF3B775CF498BFF1527DF8EC15880C3C2(L_0, Dictionary_2__ctor_m6DA39ABDF3B775CF498BFF1527DF8EC15880C3C2_RuntimeMethod_var);
		__this->____subscribersSet = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subscribersSet), (void*)L_0);
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_1 = (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*)il2cpp_codegen_object_new(List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE_il2cpp_TypeInfo_var);
		List_1__ctor_m8E31F59425E7115F248301A2CFB5693A224F6F62(L_1, List_1__ctor_m8E31F59425E7115F248301A2CFB5693A224F6F62_RuntimeMethod_var);
		__this->____subscribers = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subscribers), (void*)L_1);
		List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE* L_2 = (List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE*)il2cpp_codegen_object_new(List_1_t535EB865E10BC5E791E98BFFB1A6E7CB19B650BE_il2cpp_TypeInfo_var);
		List_1__ctor_m8E31F59425E7115F248301A2CFB5693A224F6F62(L_2, List_1__ctor_m8E31F59425E7115F248301A2CFB5693A224F6F62_RuntimeMethod_var);
		__this->____add = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____add), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		Singleton_2__ctor_m6E77433C1F3C9DEE399445E874CBE191F8E1F385(__this, Singleton_2__ctor_m6E77433C1F3C9DEE399445E874CBE191F8E1F385_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Subscriber_get_IsAlive_mDA69E0DE3C6D808C8B169FE1A61147590F5DC8E8 (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->____callbackMethod;
		bool L_1;
		L_1 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		MethodInfo_t* L_2 = __this->____callbackMethod;
		NullCheck(L_2);
		bool L_3;
		L_3 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4 = __this->____callbackTarget;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = __this->____callbackTarget;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5, L_5);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = __this->____callbackTarget;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_7);
		if (L_8)
		{
			goto IL_0043;
		}
	}

IL_0041:
	{
		return (bool)0;
	}

IL_0043:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Subscriber_get_PayloadType_m7CD9C69049756C459467440804D864BA89F0BCEA (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CPayloadTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Subscriber_get_Id_m8921B18B7D9226BFF6A10684EE57C7DB32FB08CA (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Subscriber_GetHashCode_m97F3D322F88645CD7F8B5984A231B619D088B2C7 (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Subscriber_get_Id_m8921B18B7D9226BFF6A10684EE57C7DB32FB08CA_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subscriber__ctor_m561CF390020794B37F659C882E8C56A59AE849AA (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, Type_t* ___0_payloadType, Delegate_t* ___1_callback, Delegate_t* ___2_predicate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Type_t* L_0 = ___0_payloadType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9489C15AA4F196323930F5B6159572433A6D4F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscriber__ctor_m561CF390020794B37F659C882E8C56A59AE849AA_RuntimeMethod_var)));
	}

IL_001a:
	{
		Delegate_t* L_3 = ___1_callback;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscriber__ctor_m561CF390020794B37F659C882E8C56A59AE849AA_RuntimeMethod_var)));
	}

IL_0028:
	{
		Type_t* L_5 = ___0_payloadType;
		__this->___U3CPayloadTypeU3Ek__BackingField = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPayloadTypeU3Ek__BackingField), (void*)L_5);
		Delegate_t* L_6 = ___1_callback;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_6);
		__this->___U3CIdU3Ek__BackingField = L_7;
		Delegate_t* L_8 = ___1_callback;
		NullCheck(L_8);
		MethodInfo_t* L_9;
		L_9 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_8, NULL);
		__this->____callbackMethod = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackMethod), (void*)L_9);
		MethodInfo_t* L_10 = __this->____callbackMethod;
		NullCheck(L_10);
		bool L_11;
		L_11 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_10, NULL);
		if (L_11)
		{
			goto IL_006d;
		}
	}
	{
		Delegate_t* L_12 = ___1_callback;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		Delegate_t* L_14 = ___1_callback;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_14, NULL);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_16 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_16, L_15, NULL);
		__this->____callbackTarget = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackTarget), (void*)L_16);
	}

IL_006d:
	{
		Delegate_t* L_17 = ___2_predicate;
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		return;
	}

IL_0071:
	{
		Delegate_t* L_18 = ___2_predicate;
		NullCheck(L_18);
		MethodInfo_t* L_19;
		L_19 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_18, NULL);
		__this->____predicateMethod = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____predicateMethod), (void*)L_19);
		MethodInfo_t* L_20 = __this->____predicateMethod;
		NullCheck(L_20);
		bool L_21;
		L_21 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_20, NULL);
		if (L_21)
		{
			goto IL_00ae;
		}
	}
	{
		Delegate_t* L_22 = ___2_predicate;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_22, NULL);
		Delegate_t* L_24 = ___1_callback;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_24, NULL);
		bool L_26;
		L_26 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_23, L_25, NULL);
		if (L_26)
		{
			goto IL_00ae;
		}
	}
	{
		Delegate_t* L_27 = ___2_predicate;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_27, NULL);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_29 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_29, L_28, NULL);
		__this->____predicateTarget = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____predicateTarget), (void*)L_29);
	}

IL_00ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subscriber_Dispose_m2DFF8BE569F9BDA51BC9E9DD927C18E47024A968 (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) 
{
	{
		__this->____callbackMethod = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackMethod), (void*)(MethodInfo_t*)NULL);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_0 = __this->____callbackTarget;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = __this->____callbackTarget;
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_1, NULL);
		__this->____callbackTarget = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackTarget), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
	}

IL_0022:
	{
		__this->____predicateMethod = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____predicateMethod), (void*)(MethodInfo_t*)NULL);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = __this->____predicateTarget;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->____predicateTarget;
		NullCheck(L_3);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_3, NULL);
		__this->____predicateTarget = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____predicateTarget), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
	}

IL_0044:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessengerMonitor__ctor_m7D8D5D980B5885A81EC04901E4C47303F64872D1 (MessengerMonitor_t227D984AA6000DC3F4876DC186253020FD142E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourSingleton_2__ctor_mCE8458C61129014E3F99AC5834312E5AF54E799E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviourSingleton_2__ctor_mCE8458C61129014E3F99AC5834312E5AF54E799E(__this, MonoBehaviourSingleton_2__ctor_mCE8458C61129014E3F99AC5834312E5AF54E799E_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PayloadCommand_get_Id_mFCCFB041301ABE93623D6016E8213A26E7EA2F36 (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____id;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadCommand_set_Id_mB836FF6375756F5624978011B7C2F7FAA4BFCD35 (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____id = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____id), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* PayloadCommand_get_Data_m760CBFF63DF80F159697401E63A0D4804301AC17 (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_0 = __this->____data;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadCommand_set_Data_m037412B6E40A535423CD8169FC255BCE4B34EEE8 (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ___0_value, const RuntimeMethod* method) 
{
	{
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_0 = ___0_value;
		__this->____data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadCommand__ctor_m7F334E00FA50749BC27975DAFC1551C85EBDB0E9 (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadCommandPublisher_Awake_m7FD003D5910EEDBA6F4EA749FCCDC7A474D906CE (PayloadCommandPublisher_tF5D410F9781E6C852699AB0A69409C5EB4F91089* __this, const RuntimeMethod* method) 
{
	{
		PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* L_0 = __this->____payload;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadCommandPublisher_Publish_mD09CFA4A85F29ADDE52844EE0284893F62D50947 (PayloadCommandPublisher_tF5D410F9781E6C852699AB0A69409C5EB4F91089* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessengerPublish_Publish_TisPayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45_m7A0975057582FD3DCC52D9F7179198A0071D0881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* L_0 = __this->____payload;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_inline(Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var);
		PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* L_2 = __this->____payload;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = GenericInterfaceFuncInvoker1< RuntimeObject*, PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* >::Invoke(IMessengerPublish_Publish_TisPayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45_m7A0975057582FD3DCC52D9F7179198A0071D0881_RuntimeMethod_var, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadCommandPublisher__ctor_m2CAA94918FC1C9952338FC3031810281A8239430 (PayloadCommandPublisher_tF5D410F9781E6C852699AB0A69409C5EB4F91089* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_get_Config_m1C7E8859DD3F2B30A6EF383FC6F311596C5E7488 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CConfigU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger_set_Config_m0A7AF5C1AED881C32D329D1BCBB5BD9BBEBB9550 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CConfigU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggerConfig_tD1C18ED072DCE5838062C0A64D58213E5FFD8210_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConsoleLogger_get_Config_m1C7E8859DD3F2B30A6EF383FC6F311596C5E7488_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(4, ILoggerConfig_tD1C18ED072DCE5838062C0A64D58213E5FFD8210_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogInfo_mB5C962810941305370396A6CD90637939BBB9C28 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogInfo_mD2520BDEC0E57B16EF4F727E1D915BC6AA38D70B (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, String_t* ___1_message, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_format;
		String_t* L_2 = ___1_message;
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_1, L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = ConsoleLogger_LogInfo_mB5C962810941305370396A6CD90637939BBB9C28(__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogInfo_mCB307BBDD2555BA30CC5011D20D030AD178EA129 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_messages;
		String_t* L_2;
		L_2 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = ConsoleLogger_LogInfo_mB5C962810941305370396A6CD90637939BBB9C28(__this, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogInfo_mD1D7AEF627E9F0CE9B12209DC6D199E5AC730636 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_messages;
		String_t* L_2;
		L_2 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___0_format;
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_4, NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = ConsoleLogger_LogInfo_mB5C962810941305370396A6CD90637939BBB9C28(__this, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogInfo_m4FF029A8087EA90B2CB98B07E9253760EFE90DDB (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_messages;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(L_1, L_2, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogWarning_m9AF570F72C09D72D00945ADAA672D5B11CECDADA (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogWarning_mC5E6C8FD301241C066DB0D442862428759767869 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_messages;
		String_t* L_2;
		L_2 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = ConsoleLogger_LogWarning_m9AF570F72C09D72D00945ADAA672D5B11CECDADA(__this, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogWarning_mFFBCE0352AA93C98417026E91B40227A304EE0DE (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, String_t* ___1_message, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_format;
		String_t* L_2 = ___1_message;
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_1, L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = ConsoleLogger_LogWarning_m9AF570F72C09D72D00945ADAA672D5B11CECDADA(__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogWarning_m3972EC02F6E32A57028F00DB67BC9E283A4D22B7 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_messages;
		String_t* L_2;
		L_2 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___0_format;
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_4, NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = ConsoleLogger_LogWarning_m9AF570F72C09D72D00945ADAA672D5B11CECDADA(__this, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogWarning_m62FCC31159349303BEEAFE507A6DFC3DE2FC369D (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_messages, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_messages;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(L_1, L_2, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_mCB157FEC80878A20717BF7A5C9C93DA855381790 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_error;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_m40407031B66B59A795BC3CCAA6AC6D5650973EDC (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		Exception_t* L_1 = ___0_error;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = ConsoleLogger_LogInfo_mB5C962810941305370396A6CD90637939BBB9C28(__this, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_m95EF23DAA3E26496DB062B94174021F851CD6F25 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_errors;
		String_t* L_2;
		L_2 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = ConsoleLogger_LogError_mCB157FEC80878A20717BF7A5C9C93DA855381790(__this, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_m007048B196466594B266FE57442E23DCEDFE682E (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, Exception_t* ___1_error, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_format;
		Exception_t* L_2 = ___1_error;
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_1, L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = ConsoleLogger_LogError_mCB157FEC80878A20717BF7A5C9C93DA855381790(__this, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_m97C226500F53D7EF674A7265F29F4D15DD871122 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, RuntimeObject* ___0_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_errors;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0035;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0035:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Exception_t* L_6;
				L_6 = InterfaceFuncInvoker0< Exception_t* >::Invoke(0, IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				Exception_t* L_7 = V_1;
				RuntimeObject* L_8;
				L_8 = ConsoleLogger_LogError_m40407031B66B59A795BC3CCAA6AC6D5650973EDC(__this, L_7, NULL);
			}

IL_0022_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0036;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_mE2C61AD0381A0D01691F8158D30DFDB7C43C6AD7 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, RuntimeObject* ___1_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisException_t_mA7450A16CA946B83C6E0B2B10471E5448A3F41AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___1_errors;
		String_t* L_2;
		L_2 = String_Join_TisException_t_mA7450A16CA946B83C6E0B2B10471E5448A3F41AE(_stringLiteral9E66DCBC17E3F3115FA747CCD93457E8EC73EB43, L_1, String_Join_TisException_t_mA7450A16CA946B83C6E0B2B10471E5448A3F41AE_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = ___0_format;
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_4, NULL);
		RuntimeObject* L_6;
		L_6 = ConsoleLogger_LogError_mCB157FEC80878A20717BF7A5C9C93DA855381790(__this, L_5, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_LogError_mAB81A252E2D1CE9BF7A0DB1A33C31322BF4BA06B (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_errors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = ConsoleLogger_get_IsEnabled_mFA2EB0C86E0BCDD04F194D1A837FD73563044875(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		String_t* L_1 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_errors;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(L_1, L_2, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger__ctor_m4F7E7FC7D53E5D5F9643F9F893B015F2F53E78A7 (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* L_0 = (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597*)il2cpp_codegen_object_new(ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597_il2cpp_TypeInfo_var);
		ConsoleLoggerConfig__ctor_m2103571E4BB067ADF77C5D3E7C8A175A5D030238(L_0, NULL);
		__this->___U3CConfigU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConsoleLoggerConfig_get_Name_m44F173E38E313BD3EF01A764BCC860E38FB3AE76 (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_Name_mD175E7412CD9B0AEAEBF9A4458BF6F41DC5D7BAB (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsoleLoggerConfig_get_Target_m042D53FDDA36B80567823837E78BA5493D083B8F (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTargetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_Target_mFBAA43BE58B9D0AE27B4527ED62A5963F6BC88EC (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsoleLoggerConfig_get_IsEnabled_m02329B8DDD382C151A46C6B78C4B506D7BC1721E (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsEnabledU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_IsEnabled_m3088E50F6022F3140DDB0840AFEEF6AF97148BD8 (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsEnabledU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ConsoleLoggerConfig_get_MessageTimeSpan_mED256D485E2B293DEA7CA39AAB5CC6E18A891A3E (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CMessageTimeSpanU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_MessageTimeSpan_mED56EF403F1F3B5D880CBDEB1C4B4E2E80322749 (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		__this->___U3CMessageTimeSpanU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLoggerConfig__ctor_m2103571E4BB067ADF77C5D3E7C8A175A5D030238 (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66740196DDAF70E378582F1D80EB9D8C6DA817CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ConsoleLoggerConfig_set_Name_mD175E7412CD9B0AEAEBF9A4458BF6F41DC5D7BAB_inline(__this, _stringLiteral66740196DDAF70E378582F1D80EB9D8C6DA817CB, NULL);
		ConsoleLoggerConfig_set_Target_mFBAA43BE58B9D0AE27B4527ED62A5963F6BC88EC_inline(__this, 0, NULL);
		ConsoleLoggerConfig_set_IsEnabled_m3088E50F6022F3140DDB0840AFEEF6AF97148BD8_inline(__this, (bool)1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_StaticFields*)il2cpp_codegen_static_fields_for(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var))->___U3CConsoleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loggers__cctor_m649C6460BF44AA53EDCB19891F6A5439DFF33F5C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* L_0 = (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1*)il2cpp_codegen_object_new(ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1_il2cpp_TypeInfo_var);
		ConsoleLogger__ctor_m4F7E7FC7D53E5D5F9643F9F893B015F2F53E78A7(L_0, NULL);
		((Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_StaticFields*)il2cpp_codegen_static_fields_for(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var))->___U3CConsoleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_StaticFields*)il2cpp_codegen_static_fields_for(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var))->___U3CConsoleU3Ek__BackingField), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogTargetExtensions_HasFlagFast_m38590CD9438B38269E6CD03AD681D5A66CE09107 (int32_t ___0_value, int32_t ___1_flag, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_flag;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((uint32_t)0)))? 1 : 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_get_Id_m914B41CBA4D7D0C48FC8B2872EBB218DC5DA410C (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* WeakRefDelegate_get_Method_mE90E2E9649B8C1F2D81CBEE00335DF3119D7CA15 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___U3CMethodU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefDelegate_set_Method_mE37B3303A3B50634CFF813E560F5A1778A45605F (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = ___0_value;
		__this->___U3CMethodU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_GetHashCode_mB5727FEEAA9D2CADCA4C6305B0605DB052363769 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = WeakRefDelegate_get_Id_m914B41CBA4D7D0C48FC8B2872EBB218DC5DA410C_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefDelegate__ctor_m3374A043ECC1AC7E7C736059FA26C0ABA49B6647 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, Delegate_t* ___0_method, const RuntimeMethod* method) 
{
	{
		Delegate_t* L_0 = ___0_method;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_0, NULL);
		WeakRefWrapper__ctor_m95D375074D634E0ACC421ABBFA75B199BD020A0A(__this, L_1, NULL);
		Delegate_t* L_2 = ___0_method;
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_2, NULL);
		WeakRefDelegate_set_Method_mE37B3303A3B50634CFF813E560F5A1778A45605F_inline(__this, L_3, NULL);
		Delegate_t* L_4 = ___0_method;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_4);
		__this->___U3CIdU3Ek__BackingField = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRefDelegate_Invoke_m0D27D281EE5A5822AB66612AC136AAE3FFF85304 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	{
		bool L_0 = ((WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2*)__this)->___IsDisposed;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = WeakRefWrapper_get_IsAlive_m674104EDA9EFE57E97FC7B09EC994E03DC3E4169(__this, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return NULL;
	}

IL_0012:
	{
		MethodInfo_t* L_2;
		L_2 = WeakRefDelegate_get_Method_mE90E2E9649B8C1F2D81CBEE00335DF3119D7CA15_inline(__this, NULL);
		RuntimeObject* L_3;
		L_3 = WeakRefWrapper_get_Target_m4340BBE09FE7396FAA1A479BED22504D3233C678(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_args;
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefDelegate_Contains_m55743DC42D90B51C9BA66D28179BAFC25CE8BF33 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, Delegate_t* ___0_method, const RuntimeMethod* method) 
{
	{
		Delegate_t* L_0 = ___0_method;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		bool L_1;
		L_1 = WeakRefWrapper_get_IsAlive_m674104EDA9EFE57E97FC7B09EC994E03DC3E4169(__this, NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2;
		L_2 = WeakRefWrapper_get_Target_m4340BBE09FE7396FAA1A479BED22504D3233C678(__this, NULL);
		Delegate_t* L_3 = ___0_method;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_3, NULL);
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		MethodInfo_t* L_6;
		L_6 = WeakRefDelegate_get_Method_mE90E2E9649B8C1F2D81CBEE00335DF3119D7CA15_inline(__this, NULL);
		Delegate_t* L_7 = ___0_method;
		NullCheck(L_7);
		MethodInfo_t* L_8;
		L_8 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_7, NULL);
		bool L_9;
		L_9 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_6, L_8, NULL);
		return L_9;
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefDelegate_Dispose_mA55839DDB88882767C678E1286864B49C928C0AB (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_disposing;
		WeakRefWrapper_Dispose_m98A708C2A78C57C834C6DFDE382DBD945EFE2767(__this, L_0, NULL);
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		WeakRefDelegate_set_Method_mE37B3303A3B50634CFF813E560F5A1778A45605F_inline(__this, (MethodInfo_t*)NULL, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefDelegate_Equals_mFC8E6A9517C37B64C0A5022A2D69081FB5ECE472 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, Delegate_t* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Delegate_t* L_0 = ___0_other;
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
		Delegate_t* L_1 = ___0_other;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		V_0 = L_2;
		int32_t L_3;
		L_3 = WeakRefDelegate_get_Id_m914B41CBA4D7D0C48FC8B2872EBB218DC5DA410C_inline(__this, NULL);
		int32_t L_4 = V_0;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_CompareTo_m64B8B4CD82B06EB04F1BE408F7406D59C863B849 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_0, Delegate_t_il2cpp_TypeInfo_var));
		Delegate_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		Delegate_t* L_2 = V_0;
		bool L_3;
		L_3 = WeakRefDelegate_Equals_mFC8E6A9517C37B64C0A5022A2D69081FB5ECE472(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WeakRefDelegate_ToString_m725E71BA75FB8B6D320E753B134AE6D1FC711737 (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BDF7FE5F62EB70EE236FC1C4E73E0AC6D02F78);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_2);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_1;
		int32_t L_5;
		L_5 = WeakRefDelegate_get_Id_m914B41CBA4D7D0C48FC8B2872EBB218DC5DA410C_inline(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		MethodInfo_t* L_9;
		L_9 = WeakRefDelegate_get_Method_mE90E2E9649B8C1F2D81CBEE00335DF3119D7CA15_inline(__this, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		bool L_11;
		L_11 = WeakRefWrapper_get_IsAlive_m674104EDA9EFE57E97FC7B09EC994E03DC3E4169(__this, NULL);
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.boolean_class, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		String_t* L_14;
		L_14 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral98BDF7FE5F62EB70EE236FC1C4E73E0AC6D02F78, L_10, NULL);
		return L_14;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRefWrapper_get_Target_m4340BBE09FE7396FAA1A479BED22504D3233C678 (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = WeakRefWrapper_get_IsAlive_m674104EDA9EFE57E97FC7B09EC994E03DC3E4169(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = __this->____ref;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefWrapper_get_IsAlive_m674104EDA9EFE57E97FC7B09EC994E03DC3E4169 (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, const RuntimeMethod* method) 
{
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_0 = __this->____ref;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = __this->____ref;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->____ref;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_3);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper__ctor_m95D375074D634E0ACC421ABBFA75B199BD020A0A (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		WeakReference__ctor_m8085B7DB432EB4B11F2FFDB543B3F1D05D4A8D99(L_1, L_0, (bool)0, NULL);
		__this->____ref = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ref), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper_Dispose_m98A708C2A78C57C834C6DFDE382DBD945EFE2767 (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___IsDisposed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = __this->____ref;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->____ref;
		NullCheck(L_3);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_3, NULL);
		__this->____ref = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ref), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
	}

IL_0027:
	{
		__this->___IsDisposed = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper_Dispose_m2F47E082EA39D5EE31BD16603BC9B81DEC0E0BC9 (WeakRefWrapper_t6FD54630810F96067958DFAFFD6ABEF2A26A24C2* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(5, __this, (bool)1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) 
{
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_0 = __this->___U3CActionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_set_Action_mF6247AADEDB25E7D450A93D2C00CFEED8DB9AAA2 (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* ___0_value, const RuntimeMethod* method) 
{
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_0 = ___0_value;
		__this->___U3CActionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DispatcherTask_get_Payload_mA151C571114319135A0A7A4291E8F4822F7D5695 (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___U3CPayloadU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_set_Payload_m36AF0F44312B9476446A4697D6A31F70C2BD030D (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_value;
		__this->___U3CPayloadU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPayloadU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask__ctor_m2E128250BF6D59F2C25ECF0EA9450932DACACCD2 (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, Delegate_t* ___0_action, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Delegate_t* L_0 = ___0_action;
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_1 = (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D*)il2cpp_codegen_object_new(WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D_il2cpp_TypeInfo_var);
		WeakRefDelegate__ctor_m3374A043ECC1AC7E7C736059FA26C0ABA49B6647(L_1, L_0, NULL);
		DispatcherTask_set_Action_mF6247AADEDB25E7D450A93D2C00CFEED8DB9AAA2_inline(__this, L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_payload;
		DispatcherTask_set_Payload_m36AF0F44312B9476446A4697D6A31F70C2BD030D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_Invoke_m975EBDF90E89D45D647A6A28DCB19A8BE3325CDE (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) 
{
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_0;
		L_0 = DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_1;
		L_1 = DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = WeakRefWrapper_get_IsAlive_m674104EDA9EFE57E97FC7B09EC994E03DC3E4169(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		return;
	}

IL_0016:
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_3;
		L_3 = DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = DispatcherTask_get_Payload_mA151C571114319135A0A7A4291E8F4822F7D5695_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = WeakRefDelegate_Invoke_m0D27D281EE5A5822AB66612AC136AAE3FFF85304(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_Dispose_m569C8F70C80384E1F19852EE97BCB1053D314962 (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) 
{
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_0;
		L_0 = DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_1;
		L_1 = DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC_inline(__this, NULL);
		NullCheck(L_1);
		WeakRefWrapper_Dispose_m2F47E082EA39D5EE31BD16603BC9B81DEC0E0BC9(L_1, NULL);
		DispatcherTask_set_Action_mF6247AADEDB25E7D450A93D2C00CFEED8DB9AAA2_inline(__this, (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D*)NULL, NULL);
	}

IL_001a:
	{
		DispatcherTask_set_Payload_m36AF0F44312B9476446A4697D6A31F70C2BD030D_inline(__this, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainThreadDispatcher_get_ThreadId_mDC8CFDAA4623F31173AD5CD2C871B398C1C0EFB5 (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CThreadIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_set_ThreadId_m3A7DC1250209776557972572502DE90AF89D2B1C (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CThreadIdU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainThreadDispatcher_get_TasksCount_m0BF9626FEC0351261D19EA5B05B52EC975AF1FFB (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* L_0 = __this->____tasks;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514(L_0, ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Awake_mC10FF6501FC145BE387D4733506E63DB83C233B7 (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, const RuntimeMethod* method) 
{
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		MainThreadDispatcher_set_ThreadId_m3A7DC1250209776557972572502DE90AF89D2B1C_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Dispatch_m903E219F7D56E783137670D3F895A376F20550C9 (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, Delegate_t* ___0_action, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m84BF08DC5572BD11CF16CDB8545BB779E9FAED68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* L_0 = __this->____tasks;
		Delegate_t* L_1 = ___0_action;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_payload;
		DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* L_3 = (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B*)il2cpp_codegen_object_new(DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B_il2cpp_TypeInfo_var);
		DispatcherTask__ctor_m2E128250BF6D59F2C25ECF0EA9450932DACACCD2(L_3, L_1, L_2, NULL);
		NullCheck(L_0);
		ConcurrentQueue_1_Enqueue_m84BF08DC5572BD11CF16CDB8545BB779E9FAED68(L_0, L_3, ConcurrentQueue_1_Enqueue_m84BF08DC5572BD11CF16CDB8545BB779E9FAED68_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Update_m42E58AEB1B2836E9BB0BBF4982295E678D51D686 (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_m327E413FB4FBFA716E2467485E0EF3694ED7F5BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55315F802CF39E863FFE02A657BB40D7FB043F59);
		s_Il2CppMethodInitialized = true;
	}
	DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* V_0 = NULL;
	{
		goto IL_004f;
	}

IL_0002:
	{
		ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* L_0 = __this->____tasks;
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_TryDequeue_m327E413FB4FBFA716E2467485E0EF3694ED7F5BA(L_0, (&V_0), ConcurrentQueue_1_TryDequeue_m327E413FB4FBFA716E2467485E0EF3694ED7F5BA_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* L_5 = __this->____tasks;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514(L_5, ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514_RuntimeMethod_var);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_4;
		DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* L_10 = V_0;
		NullCheck(L_10);
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_11;
		L_11 = DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC_inline(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		NullCheck(L_2);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(6, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_2, _stringLiteral55315F802CF39E863FFE02A657BB40D7FB043F59, L_9);
		DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* L_13 = V_0;
		NullCheck(L_13);
		DispatcherTask_Invoke_m975EBDF90E89D45D647A6A28DCB19A8BE3325CDE(L_13, NULL);
		DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* L_14 = V_0;
		NullCheck(L_14);
		DispatcherTask_Dispose_m569C8F70C80384E1F19852EE97BCB1053D314962(L_14, NULL);
	}

IL_004f:
	{
		ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* L_15 = __this->____tasks;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514(L_15, ConcurrentQueue_1_get_Count_mE07CD852D8E36696A633CDD08912C02A2C1B8514_RuntimeMethod_var);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher__ctor_m6B63B64D21AC76A8CBDA1F9F73EF75A840D2F6DC (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_mEF0936F7D6EA38C3740C1EC5F8F2CF03113AC67B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourSingleton_2__ctor_m40BFECD2F544D0B185A9F6D74AE400A8ED52AE5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C* L_0 = (ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C*)il2cpp_codegen_object_new(ConcurrentQueue_1_t9340225B1A4856FF1166A4E81A4C81622781FF3C_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mEF0936F7D6EA38C3740C1EC5F8F2CF03113AC67B(L_0, ConcurrentQueue_1__ctor_mEF0936F7D6EA38C3740C1EC5F8F2CF03113AC67B_RuntimeMethod_var);
		__this->____tasks = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tasks), (void*)L_0);
		MonoBehaviourSingleton_2__ctor_m40BFECD2F544D0B185A9F6D74AE400A8ED52AE5E(__this, MonoBehaviourSingleton_2__ctor_m40BFECD2F544D0B185A9F6D74AE400A8ED52AE5E_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MonoBehaviourRoot_GetRoot_m58D1AA283C0B7317A5315356CFDA4624B3D0A530 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61380A6CB61EB81C8683D3967896FEDE44E18405);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_StaticFields*)il2cpp_codegen_static_fields_for(MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_il2cpp_TypeInfo_var))->____root;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ((MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_StaticFields*)il2cpp_codegen_static_fields_for(MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_il2cpp_TypeInfo_var))->____root;
		return L_2;
	}

IL_0013:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral61380A6CB61EB81C8683D3967896FEDE44E18405, NULL);
		V_0 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteral61380A6CB61EB81C8683D3967896FEDE44E18405, NULL);
		V_0 = L_6;
	}

IL_0032:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		((MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_StaticFields*)il2cpp_codegen_static_fields_for(MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_il2cpp_TypeInfo_var))->____root = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_StaticFields*)il2cpp_codegen_static_fields_for(MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_il2cpp_TypeInfo_var))->____root), (void*)L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_StaticFields*)il2cpp_codegen_static_fields_for(MonoBehaviourRoot_tDB53628D87C173142E24CC58B08491C9B9AB4EE1_il2cpp_TypeInfo_var))->____root;
		return L_8;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionExtensions_IsNullOrEmpty_m241089F821A52FA3577D17E1E059AA133E5B78E1 (String_t* ___0_source, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_source;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_StaticFields*)il2cpp_codegen_static_fields_for(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var))->___U3CConsoleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Subscriber_get_PayloadType_m7CD9C69049756C459467440804D864BA89F0BCEA_inline (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CPayloadTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Subscriber_get_Id_m8921B18B7D9226BFF6A10684EE57C7DB32FB08CA_inline (Subscriber_t4F962377D3F511E9B554EA8B74580ADFAF98EC1A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_target;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConsoleLogger_get_Config_m1C7E8859DD3F2B30A6EF383FC6F311596C5E7488_inline (ConsoleLogger_tEBE7E847979579D836102E4867A87BB4A6F831E1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CConfigU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_Name_mD175E7412CD9B0AEAEBF9A4458BF6F41DC5D7BAB_inline (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_Target_mFBAA43BE58B9D0AE27B4527ED62A5963F6BC88EC_inline (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsoleLoggerConfig_set_IsEnabled_m3088E50F6022F3140DDB0840AFEEF6AF97148BD8_inline (ConsoleLoggerConfig_t8451BB5CC4174162B4C88F50CF3FA65A6D433597* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsEnabledU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_get_Id_m914B41CBA4D7D0C48FC8B2872EBB218DC5DA410C_inline (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WeakRefDelegate_set_Method_mE37B3303A3B50634CFF813E560F5A1778A45605F_inline (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = ___0_value;
		__this->___U3CMethodU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* WeakRefDelegate_get_Method_mE90E2E9649B8C1F2D81CBEE00335DF3119D7CA15_inline (WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___U3CMethodU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DispatcherTask_set_Action_mF6247AADEDB25E7D450A93D2C00CFEED8DB9AAA2_inline (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* ___0_value, const RuntimeMethod* method) 
{
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_0 = ___0_value;
		__this->___U3CActionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DispatcherTask_set_Payload_m36AF0F44312B9476446A4697D6A31F70C2BD030D_inline (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_value;
		__this->___U3CPayloadU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPayloadU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* DispatcherTask_get_Action_m8C28DDE16DEB0C88D1B43EBB9D313AD6B89DB3BC_inline (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) 
{
	{
		WeakRefDelegate_t32F7C6AC45DCC9839026DF87DC104318A603693D* L_0 = __this->___U3CActionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DispatcherTask_get_Payload_mA151C571114319135A0A7A4291E8F4822F7D5695_inline (DispatcherTask_t0AA4296C24719A46A23A30BEC92F9C34C080CA3B* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___U3CPayloadU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadDispatcher_set_ThreadId_m3A7DC1250209776557972572502DE90AF89D2B1C_inline (MainThreadDispatcher_tA9D89229F7C0B6FD1D7872F7831A1FBA0450BA86* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CThreadIdU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_2_get_Default_m9636C4027E065E6AC47E0CD16EF993C8CFE98B05_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject* L_0 = ((Singleton_2_t927611E93329A1E53B36D564D10928746AE795AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CDefaultU3Ek__BackingField;
		return L_0;
	}
}
