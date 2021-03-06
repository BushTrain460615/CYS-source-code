// Generated by Haxe 4.1.5
#ifndef INCLUDED_GreyscaleShader
#define INCLUDED_GreyscaleShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS0(GreyscaleShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)



class HXCPP_CLASS_ATTRIBUTES GreyscaleShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef GreyscaleShader_obj OBJ_;
		GreyscaleShader_obj();

	public:
		enum { _hx_ClassId = 0x70b02d70 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GreyscaleShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GreyscaleShader"); }
		static ::hx::ObjectPtr< GreyscaleShader_obj > __new();
		static ::hx::ObjectPtr< GreyscaleShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GreyscaleShader_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GreyscaleShader",30,48,89,a4); }

};


#endif /* INCLUDED_GreyscaleShader */ 
