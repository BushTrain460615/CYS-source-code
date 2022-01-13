// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Effect
#include <Effect.h>
#endif
#ifndef INCLUDED_GlitchEffect
#include <GlitchEffect.h>
#endif
#ifndef INCLUDED_GlitchShader
#include <GlitchShader.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_42032b645a177c4b_988_new,"GlitchEffect","new",0xe514f078,"GlitchEffect.new","Shaders.hx",988,0x469785f0)
static const Float _hx_array_data_a64d9486_1[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_42032b645a177c4b_1007_update,"GlitchEffect","update",0x879584f1,"GlitchEffect.update","Shaders.hx",1007,0x469785f0)
HX_LOCAL_STACK_FRAME(_hx_pos_42032b645a177c4b_1012_set_waveSpeed,"GlitchEffect","set_waveSpeed",0x04892709,"GlitchEffect.set_waveSpeed","Shaders.hx",1012,0x469785f0)
HX_LOCAL_STACK_FRAME(_hx_pos_42032b645a177c4b_1019_set_waveFrequency,"GlitchEffect","set_waveFrequency",0xe194fb1e,"GlitchEffect.set_waveFrequency","Shaders.hx",1019,0x469785f0)
HX_LOCAL_STACK_FRAME(_hx_pos_42032b645a177c4b_1026_set_waveAmplitude,"GlitchEffect","set_waveAmplitude",0x8fa58dc5,"GlitchEffect.set_waveAmplitude","Shaders.hx",1026,0x469785f0)

void GlitchEffect_obj::__construct(Float waveSpeed,Float waveFrequency,Float waveAmplitude){
            	HX_GC_STACKFRAME(&_hx_pos_42032b645a177c4b_988_new)
HXLINE( 994)		this->waveAmplitude = ((Float)0);
HXLINE( 993)		this->waveFrequency = ((Float)0);
HXLINE( 992)		this->waveSpeed = ((Float)0);
HXLINE( 990)		this->shader =  ::GlitchShader_obj::__alloc( HX_CTX );
HXLINE( 998)		this->shader->uTime->value = ::Array_obj< Float >::fromData( _hx_array_data_a64d9486_1,1);
HXLINE( 999)		this->set_waveSpeed(waveSpeed);
HXLINE(1000)		this->set_waveFrequency(waveFrequency);
HXLINE(1001)		this->set_waveAmplitude(waveAmplitude);
HXLINE(1002)		::PlayState_obj::instance->shaderUpdates->push(this->update_dyn());
            	}

Dynamic GlitchEffect_obj::__CreateEmpty() { return new GlitchEffect_obj; }

void *GlitchEffect_obj::_hx_vtable = 0;

Dynamic GlitchEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlitchEffect_obj > _hx_result = new GlitchEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GlitchEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x260e1d72) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x260e1d72;
	} else {
		return inClassId==(int)0x5ccf95d5;
	}
}

void GlitchEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_42032b645a177c4b_1007_update)
HXDLIN(1007)		::Array< Float > _hx_tmp = this->shader->uTime->value;
HXDLIN(1007)		int _hx_tmp1 = 0;
HXDLIN(1007)		_hx_tmp[_hx_tmp1] = (_hx_tmp->__get(_hx_tmp1) + elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchEffect_obj,update,(void))

Float GlitchEffect_obj::set_waveSpeed(Float v){
            	HX_STACKFRAME(&_hx_pos_42032b645a177c4b_1012_set_waveSpeed)
HXLINE(1013)		this->waveSpeed = v;
HXLINE(1014)		this->shader->uSpeed->value = ::Array_obj< Float >::__new(1)->init(0,this->waveSpeed);
HXLINE(1015)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchEffect_obj,set_waveSpeed,return )

Float GlitchEffect_obj::set_waveFrequency(Float v){
            	HX_STACKFRAME(&_hx_pos_42032b645a177c4b_1019_set_waveFrequency)
HXLINE(1020)		this->waveFrequency = v;
HXLINE(1021)		this->shader->uFrequency->value = ::Array_obj< Float >::__new(1)->init(0,this->waveFrequency);
HXLINE(1022)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchEffect_obj,set_waveFrequency,return )

Float GlitchEffect_obj::set_waveAmplitude(Float v){
            	HX_STACKFRAME(&_hx_pos_42032b645a177c4b_1026_set_waveAmplitude)
HXLINE(1027)		this->waveAmplitude = v;
HXLINE(1028)		this->shader->uWaveAmplitude->value = ::Array_obj< Float >::__new(1)->init(0,this->waveAmplitude);
HXLINE(1029)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchEffect_obj,set_waveAmplitude,return )


::hx::ObjectPtr< GlitchEffect_obj > GlitchEffect_obj::__new(Float waveSpeed,Float waveFrequency,Float waveAmplitude) {
	::hx::ObjectPtr< GlitchEffect_obj > __this = new GlitchEffect_obj();
	__this->__construct(waveSpeed,waveFrequency,waveAmplitude);
	return __this;
}

::hx::ObjectPtr< GlitchEffect_obj > GlitchEffect_obj::__alloc(::hx::Ctx *_hx_ctx,Float waveSpeed,Float waveFrequency,Float waveAmplitude) {
	GlitchEffect_obj *__this = (GlitchEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlitchEffect_obj), true, "GlitchEffect"));
	*(void **)__this = GlitchEffect_obj::_hx_vtable;
	__this->__construct(waveSpeed,waveFrequency,waveAmplitude);
	return __this;
}

GlitchEffect_obj::GlitchEffect_obj()
{
}

void GlitchEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlitchEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_MARK_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_MARK_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_MARK_END_CLASS();
}

void GlitchEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_VISIT_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_VISIT_MEMBER_NAME(waveAmplitude,"waveAmplitude");
}

::hx::Val GlitchEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { return ::hx::Val( waveSpeed ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { return ::hx::Val( waveFrequency ); }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { return ::hx::Val( waveAmplitude ); }
		if (HX_FIELD_EQ(inName,"set_waveSpeed") ) { return ::hx::Val( set_waveSpeed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_waveFrequency") ) { return ::hx::Val( set_waveFrequency_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_waveAmplitude") ) { return ::hx::Val( set_waveAmplitude_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GlitchEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::GlitchShader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveSpeed(inValue.Cast< Float >()) );waveSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveFrequency(inValue.Cast< Float >()) );waveFrequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveAmplitude(inValue.Cast< Float >()) );waveAmplitude=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlitchEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("waveSpeed",0e,43,dc,5b));
	outFields->push(HX_("waveFrequency",a3,fd,a6,f7));
	outFields->push(HX_("waveAmplitude",4a,90,b7,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GlitchEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::GlitchShader */ ,(int)offsetof(GlitchEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(GlitchEffect_obj,waveSpeed),HX_("waveSpeed",0e,43,dc,5b)},
	{::hx::fsFloat,(int)offsetof(GlitchEffect_obj,waveFrequency),HX_("waveFrequency",a3,fd,a6,f7)},
	{::hx::fsFloat,(int)offsetof(GlitchEffect_obj,waveAmplitude),HX_("waveAmplitude",4a,90,b7,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GlitchEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String GlitchEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("waveSpeed",0e,43,dc,5b),
	HX_("waveFrequency",a3,fd,a6,f7),
	HX_("waveAmplitude",4a,90,b7,a5),
	HX_("update",09,86,05,87),
	HX_("set_waveSpeed",f1,f8,45,62),
	HX_("set_waveFrequency",06,e1,84,21),
	HX_("set_waveAmplitude",ad,73,95,cf),
	::String(null()) };

::hx::Class GlitchEffect_obj::__mClass;

void GlitchEffect_obj::__register()
{
	GlitchEffect_obj _hx_dummy;
	GlitchEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GlitchEffect",86,94,4d,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GlitchEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GlitchEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlitchEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlitchEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
