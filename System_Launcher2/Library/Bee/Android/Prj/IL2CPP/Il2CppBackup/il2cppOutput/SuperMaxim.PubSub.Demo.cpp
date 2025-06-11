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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63;
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
struct ConcurrentQueue_1_t261319C3B9E8208BF932000582F3816F0DFE2BBA;
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
struct Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B;
struct ThreadQueue_1_t5E34F4476AA988302DB6FA4E9EF724BE7F9C5E64;
struct ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52;
struct ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05;
struct ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC;
struct IMessenger_t98599D3FB6D0C41E42240E870A3550A9E74199EC;
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t578E94ADC15F50364EBEBCB358454B9E44C7A592;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
struct U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2;
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tA96C48F987B3B17CE05BD224413595B5474EEE95____139E3A072BBF7C73C3E75F7E974987298FD41B0835B10A4A211F21C1384FC2D3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tA96C48F987B3B17CE05BD224413595B5474EEE95____F3ABA3FCB74C428009BD28C8DE897CFC3504B45416A67F28E0C26B0EC9E4F018_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2CB50E70E19BD77B5FCDAE66E2F322AFE8B94C44;
IL2CPP_EXTERN_C String_t* _stringLiteral2E7225FC4CA277770E4D89A47EC6D0DE5D4F22B1;
IL2CPP_EXTERN_C String_t* _stringLiteral62901238EA67F048C8D65A812FBB9987D215CB27;
IL2CPP_EXTERN_C String_t* _stringLiteral87C8E7CD915474864BBB62D819A7AF2180F08F91;
IL2CPP_EXTERN_C String_t* _stringLiteral8EA52A4F5B26F040746C00B162E8598A36B5A5D5;
IL2CPP_EXTERN_C String_t* _stringLiteral8F1A83B041C8E991158A84BCB1A6B9CB19F76677;
IL2CPP_EXTERN_C String_t* _stringLiteral957B140F706B750AD50126572C78B084FAB42D5E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8135C30F43ADA2FD1F7EF345F5C8A1E0E2E5E68;
IL2CPP_EXTERN_C String_t* _stringLiteralBC42CB9C37CD561EE8F8548513169D9AA8B704D6;
IL2CPP_EXTERN_C String_t* _stringLiteralD1C454F0C657B7EDE0EE6225E3ECDFCE0FEB712D;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8A1CFF0BA9EB61EACCA393170B32558FE5BD83;
IL2CPP_EXTERN_C const RuntimeMethod* ChatController_ChatMessagePredicate_m337F9A2E17F3781203F47E5B52F00B3EF99CA546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatController_OnChatMessage_mCBD08EE36550D0C151D630A8A68D67DDC97B72A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatController_OnPayloadCommand_m1ED14BEA22FA168A1BC42244BAA218791755B8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatController_PayloadCommandPredicate_mF2F2F54579EB2AEED66A42B6F9AC1DFB9175418C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatController_PublishMessage_mF602CEDBD704025590404DEABBAC2C43293C4DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatMsgCountController_ChatMessageFilter_m64557EA21374C6803B391FE4252238A936CC9FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatMsgCountController_OnChatMessageReceived_m92A08FE4E3B857A2138029AEBC8D871CD6DEAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMessengerPublish_Publish_TisChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_mE7E00E7C823051A6F80F33626475F703FF32F0F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMessengerSubscribe_Subscribe_TisChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_mD1DD2DD27BA65ADA760B866C3AA16C0FD5F1EBFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMessengerSubscribe_Subscribe_TisPayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45_m3CB0490E9829B0A061C7FB6523E9502249A06663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadQueue_1_Dispose_m107FA1CEC44AC3F6832FE205B6A1401D24B989B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadQueue_1_Enqueue_m9065668B801BB335E635F20BB3D3314D1D8C4E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadQueue_1_Start_m50FD1C4FC7A936126CE856932F45F32419F0358C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadQueue_1_Stop_mC0D5167184A393EFE77ED4AF0FB7CD27FEFDC2F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadQueue_1__ctor_m9E60A270210DBC864CDA3B98880635BC2C592EEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnableInputFieldCoroutineU3Ed__16_System_Collections_IEnumerator_Reset_m8DA03AC2605E6C3CCBC990C776930B4510A2063A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tFA9866FC6FC0A38CF99126258ABB61BC10802C4A 
{
};
struct Singleton_2_t927611E93329A1E53B36D564D10928746AE795AB  : public RuntimeObject
{
};
struct ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F  : public RuntimeObject
{
	ConcurrentQueue_1_t261319C3B9E8208BF932000582F3816F0DFE2BBA* ____queue;
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer;
};
struct U3CPrivateImplementationDetailsU3E_tA96C48F987B3B17CE05BD224413595B5474EEE95  : public RuntimeObject
{
};
struct ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F  : public RuntimeObject
{
	String_t* ___U3CUserIdU3Ek__BackingField;
	String_t* ___U3CTextU3Ek__BackingField;
};
struct Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0  : public RuntimeObject
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
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t578E94ADC15F50364EBEBCB358454B9E44C7A592  : public RuntimeObject
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
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* ___U3CU3E4__this;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
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
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D108_t57CD4B755C8E88CB6B622E4BD9DDBBD96756CCBF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D108_t57CD4B755C8E88CB6B622E4BD9DDBBD96756CCBF__padding[108];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D293_t824507F4D9118DA67272A63B380C5D8105D074C8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D293_t824507F4D9118DA67272A63B380C5D8105D074C8__padding[293];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor;
	float ___m_ColorMultiplier;
	float ___m_FadeDuration;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
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
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
{
	int32_t ___value__;
};
struct CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380 
{
	int32_t ___value__;
};
struct ContentType_t7E546E516F92E955324D479BB71667931F1A7956 
{
	int32_t ___value__;
};
struct InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4 
{
	int32_t ___value__;
};
struct LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B 
{
	int32_t ___value__;
};
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	int32_t ___value__;
};
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
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
struct Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F  : public MulticastDelegate_t
{
};
struct Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63  : public MulticastDelegate_t
{
};
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};
struct Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668  : public MulticastDelegate_t
{
};
struct Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ____isMultiThreadingOn;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* ____threadQueue;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____chatText;
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ____inputField;
	bool ____isMultiThreadingOn;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____sendButton;
	String_t* ____text;
	String_t* ____userId;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____userIdText;
};
struct ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____counterText;
	int32_t ____msgCount;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	bool ___m_EnableCalled;
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation;
	int32_t ___m_Transition;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState;
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers;
	bool ___m_Interactable;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic;
	bool ___m_GroupsAllowInteraction;
	int32_t ___m_CurrentIndex;
	bool ___U3CisPointerInsideU3Ek__BackingField;
	bool ___U3CisPointerDownU3Ek__BackingField;
	bool ___U3ChasSelectionU3Ek__BackingField;
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache;
};
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick;
};
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder;
	int32_t ___m_ContentType;
	int32_t ___m_InputType;
	Il2CppChar ___m_AsteriskChar;
	int32_t ___m_KeyboardType;
	int32_t ___m_LineType;
	bool ___m_HideMobileInput;
	int32_t ___m_CharacterValidation;
	int32_t ___m_CharacterLimit;
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit;
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit;
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged;
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor;
	bool ___m_CustomCaretColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor;
	String_t* ___m_Text;
	float ___m_CaretBlinkRate;
	int32_t ___m_CaretWidth;
	bool ___m_ReadOnly;
	bool ___m_ShouldActivateOnSelect;
	int32_t ___m_CaretPosition;
	int32_t ___m_CaretSelectPosition;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans;
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer;
	bool ___m_PreventFontCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh;
	bool ___m_AllowInput;
	bool ___m_ShouldActivateNextUpdate;
	bool ___m_UpdateDrag;
	bool ___m_DragPositionOutOfBounds;
	bool ___m_CaretVisible;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine;
	float ___m_BlinkStartTime;
	int32_t ___m_DrawStart;
	int32_t ___m_DrawEnd;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine;
	String_t* ___m_OriginalText;
	bool ___m_WasCanceled;
	bool ___m_HasDoneFocusTransition;
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime;
	bool ___m_TouchKeyboardAllowsInPlaceEditing;
	bool ___m_IsCompositionActive;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData;
	String_t* ___m_Text;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout;
	bool ___m_DisableFontTextureRebuiltCallback;
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts;
};
struct Singleton_2_t927611E93329A1E53B36D564D10928746AE795AB_StaticFields
{
	RuntimeObject* ___U3CDefaultU3Ek__BackingField;
};
struct U3CPrivateImplementationDetailsU3E_tA96C48F987B3B17CE05BD224413595B5474EEE95_StaticFields
{
	__StaticArrayInitTypeSizeU3D293_t824507F4D9118DA67272A63B380C5D8105D074C8 ___139E3A072BBF7C73C3E75F7E974987298FD41B0835B10A4A211F21C1384FC2D3;
	__StaticArrayInitTypeSizeU3D108_t57CD4B755C8E88CB6B622E4BD9DDBBD96756CCBF ___F3ABA3FCB74C428009BD28C8DE897CFC3504B45416A67F28E0C26B0EC9E4F018;
};
struct Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_StaticFields
{
	RuntimeObject* ___U3CConsoleU3Ek__BackingField;
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
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators;
	bool ___s_IsQuestDeviceEvaluated;
	bool ___s_IsQuestDevice;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_2_get_Default_m9636C4027E065E6AC47E0CD16EF993C8CFE98B05_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadQueue_1_Start_m7FE1FD026D18BFA5583C341F303224B4D05FB584_gshared (ThreadQueue_1_t5E34F4476AA988302DB6FA4E9EF724BE7F9C5E64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadQueue_1_Stop_m088AB22AD746DCDDBB71285CE40DDDB4DDF576F7_gshared (ThreadQueue_1_t5E34F4476AA988302DB6FA4E9EF724BE7F9C5E64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadQueue_1_Enqueue_m2F1B1DCCFE1127D17969E03C1BA7D473559886D9_gshared (ThreadQueue_1_t5E34F4476AA988302DB6FA4E9EF724BE7F9C5E64* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_method, RuntimeObject* ___1_parameter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadQueue_1_Dispose_m2875E9208CA3E60F01FBDD14BDF1B0FE0BAD2208_gshared (ThreadQueue_1_t5E34F4476AA988302DB6FA4E9EF724BE7F9C5E64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadQueue_1__ctor_mBC27C6F817590151A03FB4F1F81706E0292EB5C1_gshared (ThreadQueue_1_t5E34F4476AA988302DB6FA4E9EF724BE7F9C5E64* __this, const RuntimeMethod* method) ;

inline RuntimeObject* Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Singleton_2_get_Default_m9636C4027E065E6AC47E0CD16EF993C8CFE98B05_gshared_inline)(method);
}
inline void Action_1__ctor_mF48BC49022A33C7B5452AD4747A8A8C80850B68E (Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Predicate_1__ctor_m7C41C238DB2C90BCBD5A25E33A27E31DE94F0436 (Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_mE41C75B060AC83CB5EDDCE9B9BF2AB7D336A4F5C (Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Predicate_1__ctor_mD7B047551E097D72ABA338CEAEF8BC03920E289B (Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PayloadCommand_get_Id_mFCCFB041301ABE93623D6016E8213A26E7EA2F36_inline (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* PayloadCommand_get_Data_m760CBFF63DF80F159697401E63A0D4804301AC17_inline (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MultiThreadingToggle_get_IsMultiThreadingOn_mAEE347D5A7A9C4368974D762165D7ED6B3D63EDF_inline (MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6* __this, const RuntimeMethod* method) ;
inline void ThreadQueue_1_Start_m50FD1C4FC7A936126CE856932F45F32419F0358C (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* __this, const RuntimeMethod* method)
{
	((  void (*) (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F*, const RuntimeMethod*))ThreadQueue_1_Start_m7FE1FD026D18BFA5583C341F303224B4D05FB584_gshared)(__this, method);
}
inline void ThreadQueue_1_Stop_mC0D5167184A393EFE77ED4AF0FB7CD27FEFDC2F4 (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* __this, const RuntimeMethod* method)
{
	((  void (*) (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F*, const RuntimeMethod*))ThreadQueue_1_Stop_m088AB22AD746DCDDBB71285CE40DDDB4DDF576F7_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatPayload_get_UserId_mC045B4BA16B40C5DED8287807CD99CD2ABC70C02_inline (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1_inline (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionExtensions_IsNullOrEmpty_m241089F821A52FA3577D17E1E059AA133E5B78E1 (String_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ThreadQueue_1_Enqueue_m9065668B801BB335E635F20BB3D3314D1D8C4E63 (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_method, String_t* ___1_parameter, const RuntimeMethod* method)
{
	((  void (*) (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))ThreadQueue_1_Enqueue_m2F1B1DCCFE1127D17969E03C1BA7D473559886D9_gshared)(__this, ___0_method, ___1_parameter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_PublishMessage_mF602CEDBD704025590404DEABBAC2C43293C4DB1 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, String_t* ___0_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatController_EnableInputFieldCoroutine_mB1C1042C61D0946515CDD68869FC2AFDC2DA4803 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInputFieldCoroutineU3Ed__16__ctor_m2A815650F5AC81FE2E54E7B3242DE351B78C86A4 (U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPayload__ctor_m6F294705683AE406BBACB707ADA6078B093741D3 (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatPayload_set_UserId_m67677B0F9C1345F3E7BC9101DE4995E8762AEE29_inline (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatPayload_set_Text_m972F1D66B27899958180868F9D260626437FBDB7_inline (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
inline void ThreadQueue_1_Dispose_m107FA1CEC44AC3F6832FE205B6A1401D24B989B0 (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* __this, const RuntimeMethod* method)
{
	((  void (*) (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F*, const RuntimeMethod*))ThreadQueue_1_Dispose_m2875E9208CA3E60F01FBDD14BDF1B0FE0BAD2208_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
inline void ThreadQueue_1__ctor_m9E60A270210DBC864CDA3B98880635BC2C592EEE (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* __this, const RuntimeMethod* method)
{
	((  void (*) (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F*, const RuntimeMethod*))ThreadQueue_1__ctor_mBC27C6F817590151A03FB4F1F81706E0292EB5C1_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_SetTextWithoutNotify_m2CD8DAC2A298CBABFCEC654A17294427DDD238A3 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_Start_mA9CC970A49DFB95783F50DA11B54971CE3ECC4C8 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatController_ChatMessagePredicate_m337F9A2E17F3781203F47E5B52F00B3EF99CA546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatController_OnChatMessage_mCBD08EE36550D0C151D630A8A68D67DDC97B72A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatController_OnPayloadCommand_m1ED14BEA22FA168A1BC42244BAA218791755B8E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatController_PayloadCommandPredicate_mF2F2F54579EB2AEED66A42B6F9AC1DFB9175418C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessengerSubscribe_Subscribe_TisChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_mD1DD2DD27BA65ADA760B866C3AA16C0FD5F1EBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessengerSubscribe_Subscribe_TisPayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45_m3CB0490E9829B0A061C7FB6523E9502249A06663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____userIdText;
		String_t* L_1 = __this->____userId;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_inline(Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var);
		Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F* L_3 = (Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F*)il2cpp_codegen_object_new(Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F_il2cpp_TypeInfo_var);
		Action_1__ctor_mF48BC49022A33C7B5452AD4747A8A8C80850B68E(L_3, __this, (intptr_t)((void*)ChatController_OnChatMessage_mCBD08EE36550D0C151D630A8A68D67DDC97B72A3_RuntimeMethod_var), NULL);
		Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668* L_4 = (Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668*)il2cpp_codegen_object_new(Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m7C41C238DB2C90BCBD5A25E33A27E31DE94F0436(L_4, __this, (intptr_t)((void*)ChatController_ChatMessagePredicate_m337F9A2E17F3781203F47E5B52F00B3EF99CA546_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = GenericInterfaceFuncInvoker2< RuntimeObject*, Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F*, Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668* >::Invoke(IMessengerSubscribe_Subscribe_TisChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_mD1DD2DD27BA65ADA760B866C3AA16C0FD5F1EBFF_RuntimeMethod_var, L_2, L_3, L_4);
		Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63* L_6 = (Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63*)il2cpp_codegen_object_new(Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63_il2cpp_TypeInfo_var);
		Action_1__ctor_mE41C75B060AC83CB5EDDCE9B9BF2AB7D336A4F5C(L_6, __this, (intptr_t)((void*)ChatController_OnPayloadCommand_m1ED14BEA22FA168A1BC42244BAA218791755B8E5_RuntimeMethod_var), NULL);
		Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B* L_7 = (Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B*)il2cpp_codegen_object_new(Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mD7B047551E097D72ABA338CEAEF8BC03920E289B(L_7, NULL, (intptr_t)((void*)ChatController_PayloadCommandPredicate_mF2F2F54579EB2AEED66A42B6F9AC1DFB9175418C_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = GenericInterfaceFuncInvoker2< RuntimeObject*, Action_1_t44BD6FF653044CD0E935BF8A65A4BB39AFE57E63*, Predicate_1_t14BBA7729C1E012EFFC8F9C4B4BF68D40475780B* >::Invoke(IMessengerSubscribe_Subscribe_TisPayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45_m3CB0490E9829B0A061C7FB6523E9502249A06663_RuntimeMethod_var, L_5, L_6, L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatController_PayloadCommandPredicate_mF2F2F54579EB2AEED66A42B6F9AC1DFB9175418C (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62901238EA67F048C8D65A812FBB9987D215CB27);
		s_Il2CppMethodInitialized = true;
	}
	{
		PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PayloadCommand_get_Id_mFCCFB041301ABE93623D6016E8213A26E7EA2F36_inline(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral62901238EA67F048C8D65A812FBB9987D215CB27, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* L_3 = ___0_payload;
		NullCheck(L_3);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_4;
		L_4 = PayloadCommand_get_Data_m760CBFF63DF80F159697401E63A0D4804301AC17_inline(L_3, NULL);
		return (bool)((!(((RuntimeObject*)(MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6*)((MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6*)IsInstClass((RuntimeObject*)L_4, MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_OnPayloadCommand_m1ED14BEA22FA168A1BC42244BAA218791755B8E5 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadQueue_1_Start_m50FD1C4FC7A936126CE856932F45F32419F0358C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadQueue_1_Stop_mC0D5167184A393EFE77ED4AF0FB7CD27FEFDC2F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6* V_0 = NULL;
	{
		PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* L_0 = ___0_payload;
		NullCheck(L_0);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_1;
		L_1 = PayloadCommand_get_Data_m760CBFF63DF80F159697401E63A0D4804301AC17_inline(L_0, NULL);
		V_0 = ((MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6*)CastclassClass((RuntimeObject*)L_1, MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6_il2cpp_TypeInfo_var));
		MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = MultiThreadingToggle_get_IsMultiThreadingOn_mAEE347D5A7A9C4368974D762165D7ED6B3D63EDF_inline(L_2, NULL);
		__this->____isMultiThreadingOn = L_3;
		bool L_4 = __this->____isMultiThreadingOn;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* L_5 = __this->____threadQueue;
		NullCheck(L_5);
		ThreadQueue_1_Start_m50FD1C4FC7A936126CE856932F45F32419F0358C(L_5, ThreadQueue_1_Start_m50FD1C4FC7A936126CE856932F45F32419F0358C_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* L_6 = __this->____threadQueue;
		NullCheck(L_6);
		ThreadQueue_1_Stop_mC0D5167184A393EFE77ED4AF0FB7CD27FEFDC2F4(L_6, ThreadQueue_1_Stop_mC0D5167184A393EFE77ED4AF0FB7CD27FEFDC2F4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatController_ChatMessagePredicate_m337F9A2E17F3781203F47E5B52F00B3EF99CA546 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* ___0_payload, const RuntimeMethod* method) 
{
	{
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ChatPayload_get_UserId_mC045B4BA16B40C5DED8287807CD99CD2ABC70C02_inline(L_0, NULL);
		String_t* L_2 = __this->____userId;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_4 = ___0_payload;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1_inline(L_4, NULL);
		bool L_6;
		L_6 = CollectionExtensions_IsNullOrEmpty_m241089F821A52FA3577D17E1E059AA133E5B78E1(L_5, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_OnChatMessage_mCBD08EE36550D0C151D630A8A68D67DDC97B72A3 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E7225FC4CA277770E4D89A47EC6D0DE5D4F22B1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____chatText;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_3 = ___0_payload;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1_inline(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_5))) <= ((int32_t)((int32_t)250))))
		{
			goto IL_0033;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->____chatText;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75, L_6, L_7);
	}

IL_0033:
	{
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_8 = ___0_payload;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_10) > ((int32_t)((int32_t)250))))
		{
			goto IL_004d;
		}
	}
	{
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_11 = ___0_payload;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1_inline(L_11, NULL);
		G_B5_0 = L_12;
		goto IL_005e;
	}

IL_004d:
	{
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_13 = ___0_payload;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1_inline(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_14, 0, ((int32_t)250), NULL);
		G_B5_0 = L_15;
	}

IL_005e:
	{
		V_0 = G_B5_0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->____chatText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = L_16;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(74, L_17);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
		L_19 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_20 = L_19;
		RuntimeObject* L_21 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_20);
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_22 = ___0_payload;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = ChatPayload_get_UserId_mC045B4BA16B40C5DED8287807CD99CD2ABC70C02_inline(L_22, NULL);
		String_t* L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_24, NULL);
		String_t* L_26;
		L_26 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral2E7225FC4CA277770E4D89A47EC6D0DE5D4F22B1, L_21, L_23, L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, L_26, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75, L_17, L_27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_OnTextChanged_m448A7D2FF0DBE31087174C2BD7B3A5C1CF00F98D (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_text;
		__this->____text = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text), (void*)L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->____sendButton;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->____inputField;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		bool L_4;
		L_4 = CollectionExtensions_IsNullOrEmpty_m241089F821A52FA3577D17E1E059AA133E5B78E1(L_3, NULL);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_OnTextEndEdit_m9B7070B1C00873A3451586094B458BA38ACFC108 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatController_PublishMessage_mF602CEDBD704025590404DEABBAC2C43293C4DB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadQueue_1_Enqueue_m9065668B801BB335E635F20BB3D3314D1D8C4E63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_text;
		bool L_1;
		L_1 = CollectionExtensions_IsNullOrEmpty_m241089F821A52FA3577D17E1E059AA133E5B78E1(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_2 = __this->____isMultiThreadingOn;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* L_3 = __this->____threadQueue;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_4, __this, (intptr_t)((void*)ChatController_PublishMessage_mF602CEDBD704025590404DEABBAC2C43293C4DB1_RuntimeMethod_var), NULL);
		String_t* L_5 = ___0_text;
		NullCheck(L_3);
		ThreadQueue_1_Enqueue_m9065668B801BB335E635F20BB3D3314D1D8C4E63(L_3, L_4, L_5, ThreadQueue_1_Enqueue_m9065668B801BB335E635F20BB3D3314D1D8C4E63_RuntimeMethod_var);
		goto IL_0032;
	}

IL_002b:
	{
		String_t* L_6 = ___0_text;
		ChatController_PublishMessage_mF602CEDBD704025590404DEABBAC2C43293C4DB1(__this, L_6, NULL);
	}

IL_0032:
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->____inputField;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		RuntimeObject* L_8;
		L_8 = ChatController_EnableInputFieldCoroutine_mB1C1042C61D0946515CDD68869FC2AFDC2DA4803(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatController_EnableInputFieldCoroutine_mB1C1042C61D0946515CDD68869FC2AFDC2DA4803 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* L_0 = (U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2*)il2cpp_codegen_object_new(U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2_il2cpp_TypeInfo_var);
		U3CEnableInputFieldCoroutineU3Ed__16__ctor_m2A815650F5AC81FE2E54E7B3242DE351B78C86A4(L_0, 0, NULL);
		U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_PublishMessage_mF602CEDBD704025590404DEABBAC2C43293C4DB1 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessengerPublish_Publish_TisChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_mE7E00E7C823051A6F80F33626475F703FF32F0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* V_0 = NULL;
	{
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_0 = (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F*)il2cpp_codegen_object_new(ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_il2cpp_TypeInfo_var);
		ChatPayload__ctor_m6F294705683AE406BBACB707ADA6078B093741D3(L_0, NULL);
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_1 = L_0;
		String_t* L_2 = __this->____userId;
		NullCheck(L_1);
		ChatPayload_set_UserId_m67677B0F9C1345F3E7BC9101DE4995E8762AEE29_inline(L_1, L_2, NULL);
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_3 = L_1;
		String_t* L_4 = ___0_text;
		NullCheck(L_3);
		ChatPayload_set_Text_m972F1D66B27899958180868F9D260626437FBDB7_inline(L_3, L_4, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_inline(Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var);
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = GenericInterfaceFuncInvoker1< RuntimeObject*, ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* >::Invoke(IMessengerPublish_Publish_TisChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_mE7E00E7C823051A6F80F33626475F703FF32F0F1_RuntimeMethod_var, L_5, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_KillMe_m5AF8B370B21031B5CC4F57C4F52FDF00C3B39413 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C8E7CD915474864BBB62D819A7AF2180F08F91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F1A83B041C8E991158A84BCB1A6B9CB19F76677);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(12, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_2, _stringLiteral87C8E7CD915474864BBB62D819A7AF2180F08F91);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_5);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(4, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_4, _stringLiteral8F1A83B041C8E991158A84BCB1A6B9CB19F76677, L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController_OnDestroy_m0C871F69336FCBEEAB4E4E7AB344626F7BAD1177 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadQueue_1_Dispose_m107FA1CEC44AC3F6832FE205B6A1401D24B989B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8135C30F43ADA2FD1F7EF345F5C8A1E0E2E5E68);
		s_Il2CppMethodInitialized = true;
	}
	{
		ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* L_0 = __this->____threadQueue;
		NullCheck(L_0);
		ThreadQueue_1_Dispose_m107FA1CEC44AC3F6832FE205B6A1401D24B989B0(L_0, ThreadQueue_1_Dispose_m107FA1CEC44AC3F6832FE205B6A1401D24B989B0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = __this->____userId;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(6, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_1, _stringLiteralB8135C30F43ADA2FD1F7EF345F5C8A1E0E2E5E68, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatController__ctor_mE101EDB01DEB60F28E7374D8885E7E710E08B5B3 (ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadQueue_1__ctor_m9E60A270210DBC864CDA3B98880635BC2C592EEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F* L_0 = (ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F*)il2cpp_codegen_object_new(ThreadQueue_1_t713B48B6FE97B1A78324B230B597D6E420FE715F_il2cpp_TypeInfo_var);
		ThreadQueue_1__ctor_m9E60A270210DBC864CDA3B98880635BC2C592EEE(L_0, ThreadQueue_1__ctor_m9E60A270210DBC864CDA3B98880635BC2C592EEE_RuntimeMethod_var);
		__this->____threadQueue = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____threadQueue), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInputFieldCoroutineU3Ed__16__ctor_m2A815650F5AC81FE2E54E7B3242DE351B78C86A4 (U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInputFieldCoroutineU3Ed__16_System_IDisposable_Dispose_m5B6FE33C61C08982A4938AFEEC8C861B2A858626 (U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnableInputFieldCoroutineU3Ed__16_MoveNext_m9976EA677CC4658C6580EAF0962DCA6A433F0276 (U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CU3E2__current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_002e:
	{
		__this->___U3CU3E1__state = (-1);
		ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* L_4 = V_1;
		NullCheck(L_4);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = L_4->____inputField;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		NullCheck(L_5);
		InputField_SetTextWithoutNotify_m2CD8DAC2A298CBABFCEC654A17294427DDD238A3(L_5, L_6, NULL);
		ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* L_7 = V_1;
		NullCheck(L_7);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_8 = L_7->____inputField;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)1, NULL);
		ChatController_tB7949F2B18837EEC51529DB3D87B7927C6450F52* L_9 = V_1;
		NullCheck(L_9);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_10 = L_9->____inputField;
		NullCheck(L_10);
		InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05(L_10, NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableInputFieldCoroutineU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB4739FF1F0E6230D0AE12A7C13F9229A9FFCC3B2 (U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInputFieldCoroutineU3Ed__16_System_Collections_IEnumerator_Reset_m8DA03AC2605E6C3CCBC990C776930B4510A2063A (U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnableInputFieldCoroutineU3Ed__16_System_Collections_IEnumerator_Reset_m8DA03AC2605E6C3CCBC990C776930B4510A2063A_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableInputFieldCoroutineU3Ed__16_System_Collections_IEnumerator_get_Current_m8D88EE7617EEC0A1015E43234109490D9B0EB99A (U3CEnableInputFieldCoroutineU3Ed__16_t5A430E7BBC85FE89B2AEBAF747D63E4A6C42CAC2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatMsgCountController_Awake_m43D7559D5A2E20351A660904A460B8558F3E00D5 (ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatMsgCountController_Start_m23EEABFF6F3735910F2922AA79B8518463388ADB (ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatMsgCountController_ChatMessageFilter_m64557EA21374C6803B391FE4252238A936CC9FAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatMsgCountController_OnChatMessageReceived_m92A08FE4E3B857A2138029AEBC8D871CD6DEAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessengerSubscribe_Subscribe_TisChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_mD1DD2DD27BA65ADA760B866C3AA16C0FD5F1EBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_2_t49B1714C640D8AFE7FC29FDCECF11C6606BCA009_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_inline(Singleton_2_get_Default_mBA05773FC84AC9335F237BEFE36055F8B84B83E7_RuntimeMethod_var);
		Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F* L_1 = (Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F*)il2cpp_codegen_object_new(Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F_il2cpp_TypeInfo_var);
		Action_1__ctor_mF48BC49022A33C7B5452AD4747A8A8C80850B68E(L_1, __this, (intptr_t)((void*)ChatMsgCountController_OnChatMessageReceived_m92A08FE4E3B857A2138029AEBC8D871CD6DEAD73_RuntimeMethod_var), NULL);
		Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668* L_2 = (Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668*)il2cpp_codegen_object_new(Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m7C41C238DB2C90BCBD5A25E33A27E31DE94F0436(L_2, __this, (intptr_t)((void*)ChatMsgCountController_ChatMessageFilter_m64557EA21374C6803B391FE4252238A936CC9FAF_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = GenericInterfaceFuncInvoker2< RuntimeObject*, Action_1_tE4A25D1139CADCE53A098FB42EB6709D33952A6F*, Predicate_1_tA2C722D837CCBC2368B83978A1ED80A782BFD668* >::Invoke(IMessengerSubscribe_Subscribe_TisChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F_mD1DD2DD27BA65ADA760B866C3AA16C0FD5F1EBFF_RuntimeMethod_var, L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatMsgCountController_ChatMessageFilter_m64557EA21374C6803B391FE4252238A936CC9FAF (ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05* __this, ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_0 = ___0_payload;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____counterText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}

IL_0010:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatMsgCountController_OnDestroy_m2904F70EBBE13C92F9B8230827C0498C8BD71294 (ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CB50E70E19BD77B5FCDAE66E2F322AFE8B94C44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral957B140F706B750AD50126572C78B084FAB42D5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(4, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_0, _stringLiteral2CB50E70E19BD77B5FCDAE66E2F322AFE8B94C44, _stringLiteral957B140F706B750AD50126572C78B084FAB42D5E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatMsgCountController_OnChatMessageReceived_m92A08FE4E3B857A2138029AEBC8D871CD6DEAD73 (ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05* __this, ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1C454F0C657B7EDE0EE6225E3ECDFCE0FEB712D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA8A1CFF0BA9EB61EACCA393170B32558FE5BD83);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* L_3 = ___0_payload;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(6, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_0, _stringLiteralFA8A1CFF0BA9EB61EACCA393170B32558FE5BD83, L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->____counterText;
		int32_t L_6 = __this->____msgCount;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		__this->____msgCount = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD1C454F0C657B7EDE0EE6225E3ECDFCE0FEB712D, L_10, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75, L_5, L_11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatMsgCountController_KillMe_mB264B9D95E5F45B825BA52629EECBD877E041684 (ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F1A83B041C8E991158A84BCB1A6B9CB19F76677);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Loggers_tEF92AC3197FB2BD8E9CAC5E89F0EBB22DAABB3A0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Loggers_get_Console_mA1772B2488DDF9BEAEFA2BCE6FBD3751FC3D1009_inline(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(6, ILogger_t07E12F7CE555CC7279B6F65FA67F61ECE526B2CC_il2cpp_TypeInfo_var, L_0, _stringLiteral8F1A83B041C8E991158A84BCB1A6B9CB19F76677, L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatMsgCountController__ctor_mACF3056DCA87543D4A1AADA44BA378EFF1D0CAB3 (ChatMsgCountController_t813850C4917E42337B8C0A4516057A2109635A05* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPayload_get_UserId_mC045B4BA16B40C5DED8287807CD99CD2ABC70C02 (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPayload_set_UserId_m67677B0F9C1345F3E7BC9101DE4995E8762AEE29 (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CUserIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1 (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPayload_set_Text_m972F1D66B27899958180868F9D260626437FBDB7 (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPayload_ToString_m48226A05948A74273E6D48E7B3677296E6203B6A (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA52A4F5B26F040746C00B162E8598A36B5A5D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC42CB9C37CD561EE8F8548513169D9AA8B704D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = ChatPayload_get_UserId_mC045B4BA16B40C5DED8287807CD99CD2ABC70C02_inline(__this, NULL);
		String_t* L_1;
		L_1 = ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralBC42CB9C37CD561EE8F8548513169D9AA8B704D6, L_0, _stringLiteral8EA52A4F5B26F040746C00B162E8598A36B5A5D5, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPayload__ctor_m6F294705683AE406BBACB707ADA6078B093741D3 (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultiThreadingToggle_get_IsMultiThreadingOn_mAEE347D5A7A9C4368974D762165D7ED6B3D63EDF (MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isMultiThreadingOn;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiThreadingToggle_set_IsMultiThreadingOn_m3BF217AD2CA980F89F0984C765198DAC60540D44 (MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____isMultiThreadingOn = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiThreadingToggle__ctor_m4F7B3612E8A4073F4B3ACCA95D981B650D13B108 (MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6* __this, const RuntimeMethod* method) 
{
	{
		__this->____isMultiThreadingOn = (bool)1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m54310032DFEC065C7A1F6300CE591C4D5F76AE18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tA96C48F987B3B17CE05BD224413595B5474EEE95____139E3A072BBF7C73C3E75F7E974987298FD41B0835B10A4A211F21C1384FC2D3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tA96C48F987B3B17CE05BD224413595B5474EEE95____F3ABA3FCB74C428009BD28C8DE897CFC3504B45416A67F28E0C26B0EC9E4F018_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)293));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tA96C48F987B3B17CE05BD224413595B5474EEE95____139E3A072BBF7C73C3E75F7E974987298FD41B0835B10A4A211F21C1384FC2D3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)108));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tA96C48F987B3B17CE05BD224413595B5474EEE95____F3ABA3FCB74C428009BD28C8DE897CFC3504B45416A67F28E0C26B0EC9E4F018_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 5;
		(&V_0)->___TotalTypes = 5;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m1C19A7DCFF20C656721357C6D9620288EC185DBA (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t578E94ADC15F50364EBEBCB358454B9E44C7A592* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshal_pinvoke(const MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72& unmarshaled, MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshal_pinvoke_back(const MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshaled_pinvoke& marshaled, MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72& unmarshaled)
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
IL2CPP_EXTERN_C void MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshal_pinvoke_cleanup(MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshal_com(const MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72& unmarshaled, MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshal_com_back(const MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshaled_com& marshaled, MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72& unmarshaled)
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
IL2CPP_EXTERN_C void MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshal_com_cleanup(MonoScriptData_t3CFD8A1CF4DB38BA6EF898CC909AE14242871F72_marshaled_com& marshaled)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PayloadCommand_get_Id_mFCCFB041301ABE93623D6016E8213A26E7EA2F36_inline (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____id;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* PayloadCommand_get_Data_m760CBFF63DF80F159697401E63A0D4804301AC17_inline (PayloadCommand_t2BA338700FE6DAFC9130CD85E103E1031A9F0C45* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_0 = __this->____data;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MultiThreadingToggle_get_IsMultiThreadingOn_mAEE347D5A7A9C4368974D762165D7ED6B3D63EDF_inline (MultiThreadingToggle_t2378315BC0A5D96367DF9EB33ECB4AEDDBCF24B6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isMultiThreadingOn;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatPayload_get_UserId_mC045B4BA16B40C5DED8287807CD99CD2ABC70C02_inline (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatPayload_get_Text_m2F3811781B651A4861028E05010C2C49CEF09CE1_inline (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_Text;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatPayload_set_UserId_m67677B0F9C1345F3E7BC9101DE4995E8762AEE29_inline (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CUserIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatPayload_set_Text_m972F1D66B27899958180868F9D260626437FBDB7_inline (ChatPayload_tF103FA167F165E068A7085A5F69B179DF5E37A6F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField), (void*)L_0);
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_2_get_Default_m9636C4027E065E6AC47E0CD16EF993C8CFE98B05_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject* L_0 = ((Singleton_2_t927611E93329A1E53B36D564D10928746AE795AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CDefaultU3Ek__BackingField;
		return L_0;
	}
}
