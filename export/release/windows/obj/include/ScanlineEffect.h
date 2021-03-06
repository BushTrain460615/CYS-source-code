// Generated by Haxe 4.1.5
#ifndef INCLUDED_ScanlineEffect
#define INCLUDED_ScanlineEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Effect
#include <Effect.h>
#endif
HX_DECLARE_CLASS0(Effect)
HX_DECLARE_CLASS0(Scanline)
HX_DECLARE_CLASS0(ScanlineEffect)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)



class HXCPP_CLASS_ATTRIBUTES ScanlineEffect_obj : public  ::Effect_obj
{
	public:
		typedef  ::Effect_obj super;
		typedef ScanlineEffect_obj OBJ_;
		ScanlineEffect_obj();

	public:
		enum { _hx_ClassId = 0x77f40842 };

		void __construct(bool lockAlpha);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ScanlineEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ScanlineEffect"); }
		static ::hx::ObjectPtr< ScanlineEffect_obj > __new(bool lockAlpha);
		static ::hx::ObjectPtr< ScanlineEffect_obj > __alloc(::hx::Ctx *_hx_ctx,bool lockAlpha);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScanlineEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScanlineEffect",82,85,08,96); }

		 ::Scanline shader;
};


#endif /* INCLUDED_ScanlineEffect */ 
