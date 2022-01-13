// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IFlxUIButton_obj_sMemberFields[] = {
	HX_("set_toggled",73,49,6b,5c),
	HX_("set_toggle_label",c6,d5,fc,37),
	HX_("get_justMousedOver",a8,e1,12,50),
	HX_("get_mouseIsOver",fa,41,89,1d),
	HX_("get_mouseIsOut",a8,46,15,55),
	HX_("get_justMousedOut",ba,b6,ed,9f),
	HX_("set_status",6f,f5,00,fa),
	HX_("up_color",3f,d5,b5,9b),
	HX_("over_color",f8,00,4a,f7),
	HX_("down_color",86,26,b3,4e),
	HX_("up_toggle_color",dc,6e,0c,dd),
	HX_("over_toggle_color",43,1c,98,aa),
	HX_("down_toggle_color",75,e4,c8,06),
	HX_("up_visible",4e,8b,83,08),
	HX_("over_visible",47,d7,44,92),
	HX_("down_visible",55,fc,6c,72),
	HX_("up_toggle_visible",2b,86,e9,3f),
	HX_("over_toggle_visible",52,9b,c8,49),
	HX_("down_toggle_visible",04,54,e1,a9),
	HX_("resize_ratio",40,c5,84,8f),
	HX_("resize_point",85,44,f0,71),
	HX_("has_toggle",19,91,1d,bb),
	HX_("toggled",50,e2,03,cc),
	HX_("toggle_label",c9,fb,1b,dd),
	HX_("autoResizeLabel",31,30,ad,1c),
	HX_("autoCenterLabel",b0,b4,79,af),
	HX_("loadGraphicSlice9",69,16,70,91),
	HX_("loadGraphicsMultiple",41,7c,04,85),
	HX_("loadGraphicsUpOverDown",c2,ad,54,5b),
	HX_("forceStateHandler",44,68,8f,7c),
	HX_("status",32,e7,fb,05),
	::String(null()) };

::hx::Class IFlxUIButton_obj::__mClass;

void IFlxUIButton_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.interfaces.IFlxUIButton",52,5d,e9,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxUIButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x2772d80c >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
