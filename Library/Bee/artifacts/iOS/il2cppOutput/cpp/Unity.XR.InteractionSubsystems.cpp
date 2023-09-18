#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
struct SubsystemProvider_1_t871F36BEFD6747A5291F7ACA27C2CB9E7ECF2FC9;
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
struct SubsystemWithProvider_3_tEB256D2EB63F18A34D10A49A1DA3CFE405FA4B8B;
struct String_t;
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRGestureSubsystem_t53EE85C68E4FB7B77B0B60F900E39E8A99362A42;
struct XRGestureSubsystemDescriptor_t4F067C4CA0EA0A9396308FF7F8FBE2FB279DF9DB;
struct Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8;

IL2CPP_EXTERN_C RuntimeClass* ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureState_tDD9DFC2BF00899D9BEF8822209B1CC916F718A7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral72762D92721098FADE7768C799E282A57A12DFD1;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m2E1F0980DD56BEB7360828E1F857E6C0DB6A34CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m48C29EB33D7D90492B9ADBC5ABEFE7FAAB1941A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mEAB4278D7572741A19A67019E03846DC7E0E6375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m19223C1161D93E29631A5AC9E97C9E3519F433F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_mCE44C73621545940744BA0B9E8F372A16386842D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m4F3E25BE6DFC91324E77B0612A4062BE021A4899_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tF33F6B3A00804C2607D1662A86D588816DCD6177 
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	String_t* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CproviderTypeU3Ek__BackingField;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField;
};
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	bool ___m_Running;
};
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	bool ___U3CrunningU3Ek__BackingField;
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField;
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
struct NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct SubsystemDescriptorWithProvider_2_tD5D3B0C44B43A1C286C53385C20081BF1B4C9EC6  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};
struct SubsystemProvider_1_t871F36BEFD6747A5291F7ACA27C2CB9E7ECF2FC9  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField;
	RuntimeObject* ___U3CproviderU3Ek__BackingField;
};
struct SubsystemWithProvider_3_tEB256D2EB63F18A34D10A49A1DA3CFE405FA4B8B  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	XRGestureSubsystemDescriptor_t4F067C4CA0EA0A9396308FF7F8FBE2FB279DF9DB* ___U3CsubsystemDescriptorU3Ek__BackingField;
	Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* ___U3CproviderU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47 
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ___m_Id;
	int32_t ___m_State;
};
struct XRGestureSubsystem_t53EE85C68E4FB7B77B0B60F900E39E8A99362A42  : public SubsystemWithProvider_3_tEB256D2EB63F18A34D10A49A1DA3CFE405FA4B8B
{
};
struct XRGestureSubsystemDescriptor_t4F067C4CA0EA0A9396308FF7F8FBE2FB279DF9DB  : public SubsystemDescriptorWithProvider_2_tD5D3B0C44B43A1C286C53385C20081BF1B4C9EC6
{
};
struct Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8  : public SubsystemProvider_1_t871F36BEFD6747A5291F7ACA27C2CB9E7ECF2FC9
{
	NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 ___m_ActivateGestureEvents;
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
struct GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_StaticFields
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ___s_InvalidId;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mEAB4278D7572741A19A67019E03846DC7E0E6375_gshared_inline (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m2E1F0980DD56BEB7360828E1F857E6C0DB6A34CE_gshared (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m48C29EB33D7D90492B9ADBC5ABEFE7FAAB1941A7_gshared (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t GestureId_get_subId1_m89F2A377F73675673A9E599BAB051051115EE9DB_inline (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureId_set_subId1_m83CBBB497A10F5B889BFB63598D8DC74521C1F65_inline (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureId__ctor_m0C778BF11BD442EE678B8585929BD2989F204477 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680 (uint64_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GestureId_ToString_m95EE2DB48A7F03054EAAECCE0BC1C0101CD262A7 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureId_GetHashCode_mDB03D83CF6901D2AA723C47F35A52FE7D82C9947 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureId_Equals_m8F40D0F5E7385F136AE219D4B23DF5E8933AF5B9 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureId_Equals_m1F12C65B7B36BC675E45E73193A9C3C5D0F6E780 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ActivateGestureEvent_get_id_mDFA215F0AC9DB1C7664CAEC1B541AF9B8F153E79_inline (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ActivateGestureEvent_get_state_mC42DBAB199BD9B57A9C626062FCC2B6449ABAE59_inline (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ActivateGestureEvent_ToString_mB0704678A7B0A0540231DC9844493601B74A915C (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivateGestureEvent_Equals_mD33019E347FE69AEBA744FDA16DC5D2F35A96B0D (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivateGestureEvent_Equals_m96BEFABE568E2B5A9644FE0096D33BF5EBA0B810 (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActivateGestureEvent_GetHashCode_m0A2C34B23A0F756E2C8239BCCBC7BF8D616F43BA (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) ;
inline Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* SubsystemWithProvider_3_get_provider_m4F3E25BE6DFC91324E77B0612A4062BE021A4899_inline (SubsystemWithProvider_3_tEB256D2EB63F18A34D10A49A1DA3CFE405FA4B8B* __this, const RuntimeMethod* method)
{
	return ((  Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* (*) (SubsystemWithProvider_3_tEB256D2EB63F18A34D10A49A1DA3CFE405FA4B8B*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 Provider_get_activateGestureEvents_mAACAFE9281BC05006F9B1DB34DEF2EDD33E25F1D_inline (Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* __this, const RuntimeMethod* method) ;
inline void SubsystemWithProvider_3__ctor_mCE44C73621545940744BA0B9E8F372A16386842D (SubsystemWithProvider_3_tEB256D2EB63F18A34D10A49A1DA3CFE405FA4B8B* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tEB256D2EB63F18A34D10A49A1DA3CFE405FA4B8B*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_mEAB4278D7572741A19A67019E03846DC7E0E6375_inline (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mEAB4278D7572741A19A67019E03846DC7E0E6375_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m2E1F0980DD56BEB7360828E1F857E6C0DB6A34CE (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724*, const RuntimeMethod*))NativeArray_1_Dispose_m2E1F0980DD56BEB7360828E1F857E6C0DB6A34CE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m48C29EB33D7D90492B9ADBC5ABEFE7FAAB1941A7 (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m48C29EB33D7D90492B9ADBC5ABEFE7FAAB1941A7_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void SubsystemProvider_1__ctor_m19223C1161D93E29631A5AC9E97C9E3519F433F5 (SubsystemProvider_1_t871F36BEFD6747A5291F7ACA27C2CB9E7ECF2FC9* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t871F36BEFD6747A5291F7ACA27C2CB9E7ECF2FC9*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 GestureId_get_invalidId_mBEE7A849849E26FB8D67B733AFFB933B0FD90140 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_0 = ((GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_StaticFields*)il2cpp_codegen_static_fields_for(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var))->___s_InvalidId;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t GestureId_get_subId1_m89F2A377F73675673A9E599BAB051051115EE9DB (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_SubId1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t GestureId_get_subId1_m89F2A377F73675673A9E599BAB051051115EE9DB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = GestureId_get_subId1_m89F2A377F73675673A9E599BAB051051115EE9DB_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureId_set_subId1_m83CBBB497A10F5B889BFB63598D8DC74521C1F65 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		__this->___m_SubId1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void GestureId_set_subId1_m83CBBB497A10F5B889BFB63598D8DC74521C1F65_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*>(__this + _offset);
	GestureId_set_subId1_m83CBBB497A10F5B889BFB63598D8DC74521C1F65_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureId__ctor_m0C778BF11BD442EE678B8585929BD2989F204477 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_subId1;
		__this->___m_SubId1 = L_0;
		uint64_t L_1 = ___1_subId2;
		__this->___m_SubId2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void GestureId__ctor_m0C778BF11BD442EE678B8585929BD2989F204477_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method)
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*>(__this + _offset);
	GestureId__ctor_m0C778BF11BD442EE678B8585929BD2989F204477(_thisAdjusted, ___0_subId1, ___1_subId2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GestureId_ToString_m95EE2DB48A7F03054EAAECCE0BC1C0101CD262A7 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___m_SubId1);
		String_t* L_1;
		L_1 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->___m_SubId2);
		String_t* L_3;
		L_3 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* GestureId_ToString_m95EE2DB48A7F03054EAAECCE0BC1C0101CD262A7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = GestureId_ToString_m95EE2DB48A7F03054EAAECCE0BC1C0101CD262A7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureId_GetHashCode_mDB03D83CF6901D2AA723C47F35A52FE7D82C9947 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___m_SubId1);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->___m_SubId2);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3));
	}
}
IL2CPP_EXTERN_C  int32_t GestureId_GetHashCode_mDB03D83CF6901D2AA723C47F35A52FE7D82C9947_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GestureId_GetHashCode_mDB03D83CF6901D2AA723C47F35A52FE7D82C9947(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureId_Equals_m1F12C65B7B36BC675E45E73193A9C3C5D0F6E780 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GestureId_Equals_m8F40D0F5E7385F136AE219D4B23DF5E8933AF5B9(__this, ((*(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*)((GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*)(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*)UnBox(L_1, GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GestureId_Equals_m1F12C65B7B36BC675E45E73193A9C3C5D0F6E780_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = GestureId_Equals_m1F12C65B7B36BC675E45E73193A9C3C5D0F6E780(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureId_Equals_m8F40D0F5E7385F136AE219D4B23DF5E8933AF5B9 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ___0_other, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_SubId1;
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_1 = ___0_other;
		uint64_t L_2 = L_1.___m_SubId1;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->___m_SubId2;
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_4 = ___0_other;
		uint64_t L_5 = L_4.___m_SubId2;
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GestureId_Equals_m8F40D0F5E7385F136AE219D4B23DF5E8933AF5B9_AdjustorThunk (RuntimeObject* __this, GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ___0_other, const RuntimeMethod* method)
{
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = GestureId_Equals_m8F40D0F5E7385F136AE219D4B23DF5E8933AF5B9(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureId_op_Equality_m2B590DE2430444681F1F691CCAF24CF3EDAC4627 (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ___0_id1, GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ___1_id2, const RuntimeMethod* method) 
{
	{
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_0 = ___0_id1;
		uint64_t L_1 = L_0.___m_SubId1;
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_2 = ___1_id2;
		uint64_t L_3 = L_2.___m_SubId1;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_4 = ___0_id1;
		uint64_t L_5 = L_4.___m_SubId2;
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_6 = ___1_id2;
		uint64_t L_7 = L_6.___m_SubId2;
		return (bool)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureId__cctor_m3782003D51797AD37FAE800A089979A3032BF8A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		GestureId__ctor_m0C778BF11BD442EE678B8585929BD2989F204477((&L_0), ((int64_t)0), ((int64_t)0), NULL);
		((GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_StaticFields*)il2cpp_codegen_static_fields_for(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var))->___s_InvalidId = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ActivateGestureEvent_get_id_mDFA215F0AC9DB1C7664CAEC1B541AF9B8F153E79 (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) 
{
	{
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_0 = __this->___m_Id;
		return L_0;
	}
}
IL2CPP_EXTERN_C  GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ActivateGestureEvent_get_id_mDFA215F0AC9DB1C7664CAEC1B541AF9B8F153E79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*>(__this + _offset);
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 _returnValue;
	_returnValue = ActivateGestureEvent_get_id_mDFA215F0AC9DB1C7664CAEC1B541AF9B8F153E79_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActivateGestureEvent_get_state_mC42DBAB199BD9B57A9C626062FCC2B6449ABAE59 (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_State;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ActivateGestureEvent_get_state_mC42DBAB199BD9B57A9C626062FCC2B6449ABAE59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ActivateGestureEvent_get_state_mC42DBAB199BD9B57A9C626062FCC2B6449ABAE59_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ActivateGestureEvent_ToString_mB0704678A7B0A0540231DC9844493601B74A915C (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureState_tDD9DFC2BF00899D9BEF8822209B1CC916F718A7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72762D92721098FADE7768C799E282A57A12DFD1);
		s_Il2CppMethodInitialized = true;
	}
	{
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_0;
		L_0 = ActivateGestureEvent_get_id_mDFA215F0AC9DB1C7664CAEC1B541AF9B8F153E79_inline(__this, NULL);
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_1 = L_0;
		RuntimeObject* L_2 = Box(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = ActivateGestureEvent_get_state_mC42DBAB199BD9B57A9C626062FCC2B6449ABAE59_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(GestureState_tDD9DFC2BF00899D9BEF8822209B1CC916F718A7D_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral72762D92721098FADE7768C799E282A57A12DFD1, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* ActivateGestureEvent_ToString_mB0704678A7B0A0540231DC9844493601B74A915C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ActivateGestureEvent_ToString_mB0704678A7B0A0540231DC9844493601B74A915C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivateGestureEvent_Equals_m96BEFABE568E2B5A9644FE0096D33BF5EBA0B810 (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
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
		RuntimeObject* L_1 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = ActivateGestureEvent_Equals_mD33019E347FE69AEBA744FDA16DC5D2F35A96B0D(__this, ((*(ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*)((ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*)(ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*)UnBox(L_2, ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ActivateGestureEvent_Equals_m96BEFABE568E2B5A9644FE0096D33BF5EBA0B810_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*>(__this + _offset);
	bool _returnValue;
	_returnValue = ActivateGestureEvent_Equals_m96BEFABE568E2B5A9644FE0096D33BF5EBA0B810(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivateGestureEvent_Equals_mD33019E347FE69AEBA744FDA16DC5D2F35A96B0D (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_0 = __this->___m_Id;
		V_0 = L_0;
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_1;
		L_1 = ActivateGestureEvent_get_id_mDFA215F0AC9DB1C7664CAEC1B541AF9B8F153E79_inline((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GestureId_Equals_m8F40D0F5E7385F136AE219D4B23DF5E8933AF5B9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = ActivateGestureEvent_get_state_mC42DBAB199BD9B57A9C626062FCC2B6449ABAE59_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ActivateGestureEvent_Equals_mD33019E347FE69AEBA744FDA16DC5D2F35A96B0D_AdjustorThunk (RuntimeObject* __this, ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47 ___0_other, const RuntimeMethod* method)
{
	ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*>(__this + _offset);
	bool _returnValue;
	_returnValue = ActivateGestureEvent_Equals_mD33019E347FE69AEBA744FDA16DC5D2F35A96B0D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActivateGestureEvent_GetHashCode_m0A2C34B23A0F756E2C8239BCCBC7BF8D616F43BA (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_0 = __this->___m_Id;
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GestureId_GetHashCode_mDB03D83CF6901D2AA723C47F35A52FE7D82C9947((&V_0), NULL);
		int32_t L_2 = __this->___m_State;
		V_1 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3));
	}
}
IL2CPP_EXTERN_C  int32_t ActivateGestureEvent_GetHashCode_m0A2C34B23A0F756E2C8239BCCBC7BF8D616F43BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ActivateGestureEvent_GetHashCode_m0A2C34B23A0F756E2C8239BCCBC7BF8D616F43BA(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 XRGestureSubsystem_get_activateGestureEvents_m448FBE7F00729269AC0583FC9FFC051219296FA3 (XRGestureSubsystem_t53EE85C68E4FB7B77B0B60F900E39E8A99362A42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F3E25BE6DFC91324E77B0612A4062BE021A4899_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F3E25BE6DFC91324E77B0612A4062BE021A4899_inline(__this, SubsystemWithProvider_3_get_provider_m4F3E25BE6DFC91324E77B0612A4062BE021A4899_RuntimeMethod_var);
		NullCheck(L_0);
		NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 L_1;
		L_1 = Provider_get_activateGestureEvents_mAACAFE9281BC05006F9B1DB34DEF2EDD33E25F1D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGestureSubsystem__ctor_mFB3D786D0CD33A93273A10640DBA1C2DB0ADBE35 (XRGestureSubsystem_t53EE85C68E4FB7B77B0B60F900E39E8A99362A42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_mCE44C73621545940744BA0B9E8F372A16386842D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemWithProvider_3__ctor_mCE44C73621545940744BA0B9E8F372A16386842D(__this, SubsystemWithProvider_3__ctor_mCE44C73621545940744BA0B9E8F372A16386842D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGestureSubsystem_Update_mA7EC2857D6A489B6E306B5B95C89B99866565521 (XRGestureSubsystem_t53EE85C68E4FB7B77B0B60F900E39E8A99362A42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F3E25BE6DFC91324E77B0612A4062BE021A4899_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F3E25BE6DFC91324E77B0612A4062BE021A4899_inline(__this, SubsystemWithProvider_3_get_provider_m4F3E25BE6DFC91324E77B0612A4062BE021A4899_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(8, L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m683458C4B17C0D76BD16FEBA60AF570C15691F25 (Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m2E1F0980DD56BEB7360828E1F857E6C0DB6A34CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mEAB4278D7572741A19A67019E03846DC7E0E6375_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* L_0 = (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724*)(&__this->___m_ActivateGestureEvents);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mEAB4278D7572741A19A67019E03846DC7E0E6375_inline(L_0, NativeArray_1_get_IsCreated_mEAB4278D7572741A19A67019E03846DC7E0E6375_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* L_2 = (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724*)(&__this->___m_ActivateGestureEvents);
		NativeArray_1_Dispose_m2E1F0980DD56BEB7360828E1F857E6C0DB6A34CE(L_2, NativeArray_1_Dispose_m2E1F0980DD56BEB7360828E1F857E6C0DB6A34CE_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Finalize_m70C3CC41031D2FBE69CE682C46FCEA81C4F1245B (Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			VirtualActionInvoker0::Invoke(7, __this);
			goto IL_000f;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 Provider_get_activateGestureEvents_mAACAFE9281BC05006F9B1DB34DEF2EDD33E25F1D (Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* __this, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 L_0 = __this->___m_ActivateGestureEvents;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m9E407F6EE10196B8E33C9EBCEA14B820CF318FA3 (Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m48C29EB33D7D90492B9ADBC5ABEFE7FAAB1941A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m19223C1161D93E29631A5AC9E97C9E3519F433F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 L_0;
		memset((&L_0), 0, sizeof(L_0));
		NativeArray_1__ctor_m48C29EB33D7D90492B9ADBC5ABEFE7FAAB1941A7((&L_0), 0, 4, 1, NativeArray_1__ctor_m48C29EB33D7D90492B9ADBC5ABEFE7FAAB1941A7_RuntimeMethod_var);
		__this->___m_ActivateGestureEvents = L_0;
		SubsystemProvider_1__ctor_m19223C1161D93E29631A5AC9E97C9E3519F433F5(__this, SubsystemProvider_1__ctor_m19223C1161D93E29631A5AC9E97C9E3519F433F5_RuntimeMethod_var);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t GestureId_get_subId1_m89F2A377F73675673A9E599BAB051051115EE9DB_inline (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_SubId1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureId_set_subId1_m83CBBB497A10F5B889BFB63598D8DC74521C1F65_inline (GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		__this->___m_SubId1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 ActivateGestureEvent_get_id_mDFA215F0AC9DB1C7664CAEC1B541AF9B8F153E79_inline (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) 
{
	{
		GestureId_t31E81A23E21D54EAFBD3906B1F90AEEB6207ABB4 L_0 = __this->___m_Id;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ActivateGestureEvent_get_state_mC42DBAB199BD9B57A9C626062FCC2B6449ABAE59_inline (ActivateGestureEvent_t5F1209F4E63C5FE805BBD5953B48244D0E534D47* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_State;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 Provider_get_activateGestureEvents_mAACAFE9281BC05006F9B1DB34DEF2EDD33E25F1D_inline (Provider_tEDDE2B91F1B15EBAA83D1EFE11C1A923BF1C8BC8* __this, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724 L_0 = __this->___m_ActivateGestureEvents;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CproviderU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mEAB4278D7572741A19A67019E03846DC7E0E6375_gshared_inline (NativeArray_1_t8FBE56448CA1B9166638319020F45048BCF48724* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
