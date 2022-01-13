// Generated by Haxe 4.1.5
#ifndef INCLUDED_BloomEffect
#define INCLUDED_BloomEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Effect
#include <Effect.h>
#endif
HX_DECLARE_CLASS0(BloomEffect)
HX_DECLARE_CLASS0(BloomShader)
HX_DECLARE_CLASS0(Effect)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)



class HXCPP_CLASS_ATTRIBUTES BloomEffect_obj : public  ::Effect_obj
{
	public:
		typedef  ::Effect_obj super;
		typedef BloomEffect_obj OBJ_;
		BloomEffect_obj();

	public:
		enum { _hx_ClassId = 0x027df9d0 };

		void __construct(Float blurSize,Float intensity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="BloomEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"BloomEffect"); }
		static ::hx::ObjectPtr< BloomEffect_obj > __new(Float blurSize,Float intensity);
		static ::hx::ObjectPtr< BloomEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float blurSize,Float intensity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BloomEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BloomEffect",94,9a,29,e6); }

		 ::BloomShader shader;
};


#endif /* INCLUDED_BloomEffect */ 