// Generated by Haxe 4.1.5
#ifndef INCLUDED_ChromaticAberrationShader
#define INCLUDED_ChromaticAberrationShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS0(ChromaticAberrationShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)



class HXCPP_CLASS_ATTRIBUTES ChromaticAberrationShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef ChromaticAberrationShader_obj OBJ_;
		ChromaticAberrationShader_obj();

	public:
		enum { _hx_ClassId = 0x0325320a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ChromaticAberrationShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ChromaticAberrationShader"); }
		static ::hx::ObjectPtr< ChromaticAberrationShader_obj > __new();
		static ::hx::ObjectPtr< ChromaticAberrationShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChromaticAberrationShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChromaticAberrationShader",ae,72,3d,ae); }

		 ::openfl::display::ShaderParameter_Float rOffset;
		 ::openfl::display::ShaderParameter_Float gOffset;
		 ::openfl::display::ShaderParameter_Float bOffset;
};


#endif /* INCLUDED_ChromaticAberrationShader */ 
