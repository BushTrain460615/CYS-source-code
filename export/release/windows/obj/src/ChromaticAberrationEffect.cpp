// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_ChromaticAberrationEffect
#include <ChromaticAberrationEffect.h>
#endif
#ifndef INCLUDED_ChromaticAberrationShader
#include <ChromaticAberrationShader.h>
#endif
#ifndef INCLUDED_Effect
#include <Effect.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5c4701d6ac3e1f7c_82_new,"ChromaticAberrationEffect","new",0x8505c40c,"ChromaticAberrationEffect.new","Shaders.hx",82,0x469785f0)
static const Float _hx_array_data_f1c00e1a_1[] = {
	0.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_5c4701d6ac3e1f7c_90_setChrome,"ChromaticAberrationEffect","setChrome",0x91ed6b68,"ChromaticAberrationEffect.setChrome","Shaders.hx",90,0x469785f0)
static const Float _hx_array_data_f1c00e1a_3[] = {
	0.0,
};

void ChromaticAberrationEffect_obj::__construct(::hx::Null< Float >  __o_offset){
            		Float offset = __o_offset.Default(((Float)0.00));
            	HX_GC_STACKFRAME(&_hx_pos_5c4701d6ac3e1f7c_82_new)
HXLINE(  83)		this->shader =  ::ChromaticAberrationShader_obj::__alloc( HX_CTX );
HXLINE(  84)		this->shader->rOffset->value = ::Array_obj< Float >::__new(1)->init(0,offset);
HXLINE(  85)		this->shader->gOffset->value = ::Array_obj< Float >::fromData( _hx_array_data_f1c00e1a_1,1);
HXLINE(  86)		this->shader->bOffset->value = ::Array_obj< Float >::__new(1)->init(0,-(offset));
            	}

Dynamic ChromaticAberrationEffect_obj::__CreateEmpty() { return new ChromaticAberrationEffect_obj; }

void *ChromaticAberrationEffect_obj::_hx_vtable = 0;

Dynamic ChromaticAberrationEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChromaticAberrationEffect_obj > _hx_result = new ChromaticAberrationEffect_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ChromaticAberrationEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x46a7cd76) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x46a7cd76;
	} else {
		return inClassId==(int)0x5ccf95d5;
	}
}

void ChromaticAberrationEffect_obj::setChrome(Float chromeOffset){
            	HX_STACKFRAME(&_hx_pos_5c4701d6ac3e1f7c_90_setChrome)
HXLINE(  91)		this->shader->rOffset->value = ::Array_obj< Float >::__new(1)->init(0,chromeOffset);
HXLINE(  92)		this->shader->gOffset->value = ::Array_obj< Float >::fromData( _hx_array_data_f1c00e1a_3,1);
HXLINE(  93)		this->shader->bOffset->value = ::Array_obj< Float >::__new(1)->init(0,(chromeOffset * ( (Float)(-1) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ChromaticAberrationEffect_obj,setChrome,(void))


::hx::ObjectPtr< ChromaticAberrationEffect_obj > ChromaticAberrationEffect_obj::__new(::hx::Null< Float >  __o_offset) {
	::hx::ObjectPtr< ChromaticAberrationEffect_obj > __this = new ChromaticAberrationEffect_obj();
	__this->__construct(__o_offset);
	return __this;
}

::hx::ObjectPtr< ChromaticAberrationEffect_obj > ChromaticAberrationEffect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_offset) {
	ChromaticAberrationEffect_obj *__this = (ChromaticAberrationEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChromaticAberrationEffect_obj), true, "ChromaticAberrationEffect"));
	*(void **)__this = ChromaticAberrationEffect_obj::_hx_vtable;
	__this->__construct(__o_offset);
	return __this;
}

ChromaticAberrationEffect_obj::ChromaticAberrationEffect_obj()
{
}

void ChromaticAberrationEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChromaticAberrationEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void ChromaticAberrationEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val ChromaticAberrationEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setChrome") ) { return ::hx::Val( setChrome_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChromaticAberrationEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::ChromaticAberrationShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChromaticAberrationEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChromaticAberrationEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::ChromaticAberrationShader */ ,(int)offsetof(ChromaticAberrationEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChromaticAberrationEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ChromaticAberrationEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("setChrome",bc,6e,57,22),
	::String(null()) };

::hx::Class ChromaticAberrationEffect_obj::__mClass;

void ChromaticAberrationEffect_obj::__register()
{
	ChromaticAberrationEffect_obj _hx_dummy;
	ChromaticAberrationEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ChromaticAberrationEffect",1a,0e,c0,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChromaticAberrationEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChromaticAberrationEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChromaticAberrationEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChromaticAberrationEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
