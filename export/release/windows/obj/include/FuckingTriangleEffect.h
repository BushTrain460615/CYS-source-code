// Generated by Haxe 4.1.5
#ifndef INCLUDED_FuckingTriangleEffect
#define INCLUDED_FuckingTriangleEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Effect
#include <Effect.h>
#endif
HX_DECLARE_CLASS0(Effect)
HX_DECLARE_CLASS0(FuckingTriangle)
HX_DECLARE_CLASS0(FuckingTriangleEffect)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)



class HXCPP_CLASS_ATTRIBUTES FuckingTriangleEffect_obj : public  ::Effect_obj
{
	public:
		typedef  ::Effect_obj super;
		typedef FuckingTriangleEffect_obj OBJ_;
		FuckingTriangleEffect_obj();

	public:
		enum { _hx_ClassId = 0x21d9c184 };

		void __construct(Float rotx,Float roty);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FuckingTriangleEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FuckingTriangleEffect"); }
		static ::hx::ObjectPtr< FuckingTriangleEffect_obj > __new(Float rotx,Float roty);
		static ::hx::ObjectPtr< FuckingTriangleEffect_obj > __alloc(::hx::Ctx *_hx_ctx,Float rotx,Float roty);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FuckingTriangleEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FuckingTriangleEffect",44,6c,9b,9c); }

		 ::FuckingTriangle shader;
};


#endif /* INCLUDED_FuckingTriangleEffect */ 