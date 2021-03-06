// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_AchievementObject
#include <AchievementObject.h>
#endif
#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_335_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",335,0xf249f7fa)
HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_333_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",333,0xf249f7fa)
HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_266_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",266,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_344_destroy,"AchievementObject","destroy",0x95b6bcfa,"AchievementObject.destroy","Achievements.hx",344,0xf249f7fa)

void AchievementObject_obj::__construct(::String name, ::flixel::FlxCamera camera){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::AchievementObject,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::AchievementObject,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_335_new)
HXLINE( 336)				_gthis->alphaTween = null();
HXLINE( 337)				_gthis->remove(_gthis,null()).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 338)				if (::hx::IsNotNull( _gthis->onFinish )) {
HXLINE( 338)					_gthis->onFinish();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_333_new)
HXLINE( 333)			_gthis->alphaTween = ::flixel::tweens::FlxTween_obj::tween(_gthis, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)2.5))
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_266_new)
HXLINE( 267)		this->onFinish = null();
HXLINE( 269)		 ::AchievementObject _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 271)		super::__construct(this->x,this->y,null());
HXLINE( 272)		::ClientPrefs_obj::saveSettings();
HXLINE( 274)		int id = ::Achievements_obj::getAchievementIndex(name);
HXLINE( 275)		::String achieveName = ( (::String)(::Achievements_obj::achievementsStuff->__get(id)->__GetItem(0)) );
HXLINE( 276)		::String text = ( (::String)(::Achievements_obj::achievementsStuff->__get(id)->__GetItem(1)) );
HXLINE( 278)		if (::Achievements_obj::loadedAchievements->exists(name)) {
HXLINE( 279)			id = 0;
HXLINE( 280)			achieveName = ( (::String)(::Achievements_obj::loadedAchievements->get(name)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 281)			text = ( (::String)(::Achievements_obj::loadedAchievements->get(name)->__Field(HX_("description",fc,08,1d,5f),::hx::paccDynamic)) );
            		}
HXLINE( 284)		 ::flixel::FlxSprite achievementBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,60,50,null())->makeGraphic(420,120,-16777216,null(),null());
HXLINE( 285)		achievementBG->scrollFactor->set(null(),null());
HXLINE( 287)		::String library = null();
HXDLIN( 287)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("achievementgrid",b5,fa,02,8a),library);
HXDLIN( 287)		 ::Dynamic imagePath = returnAsset;
HXLINE( 288)		 ::Dynamic modsImage = null();
HXLINE( 289)		bool isModIcon = false;
HXLINE( 291)		if (::Achievements_obj::loadedAchievements->exists(name)) {
HXLINE( 292)			isModIcon = true;
HXLINE( 293)			::String library = null();
HXDLIN( 293)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(( (::String)(::Achievements_obj::loadedAchievements->get(name)->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) ),library);
HXDLIN( 293)			modsImage = returnAsset;
            		}
HXLINE( 296)		int index = ::Achievements_obj::getAchievementIndex(name);
HXLINE( 297)		if (isModIcon) {
HXLINE( 297)			index = 0;
            		}
HXLINE( 299)		::haxe::Log_obj::trace(imagePath,::hx::SourceInfo(HX_("source/Achievements.hx",86,db,47,8f),299,HX_("AchievementObject",6e,f0,f4,1f),HX_("new",60,d0,53,00)));
HXLINE( 300)		::haxe::Log_obj::trace(modsImage,::hx::SourceInfo(HX_("source/Achievements.hx",86,db,47,8f),300,HX_("AchievementObject",6e,f0,f4,1f),HX_("new",60,d0,53,00)));
HXLINE( 302)		 ::Dynamic achievementIcon;
HXDLIN( 302)		if (isModIcon) {
HXLINE( 302)			achievementIcon = modsImage;
            		}
            		else {
HXLINE( 302)			achievementIcon = imagePath;
            		}
HXDLIN( 302)		 ::flixel::FlxSprite achievementIcon1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(achievementBG->x + 10),(achievementBG->y + 10),null())->loadGraphic(achievementIcon,true,150,150,null(),null());
HXLINE( 303)		achievementIcon1->animation->add(HX_("icon",79,e7,b2,45),::Array_obj< int >::__new(1)->init(0,index),0,false,false,null());
HXLINE( 304)		achievementIcon1->animation->play(HX_("icon",79,e7,b2,45),null(),null(),null());
HXLINE( 305)		achievementIcon1->scrollFactor->set(null(),null());
HXLINE( 306)		achievementIcon1->setGraphicSize(::Std_obj::_hx_int((achievementIcon1->get_width() * ((Float)0.66666666666666663))),null());
HXLINE( 307)		achievementIcon1->updateHitbox();
HXLINE( 308)		achievementIcon1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 310)		Float achievementIcon2 = achievementIcon1->x;
HXDLIN( 310)		Float achievementName = ((achievementIcon2 + achievementIcon1->get_width()) + 20);
HXDLIN( 310)		 ::flixel::text::FlxText achievementName1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,achievementName,(achievementIcon1->y + 16),280,achieveName,16,null());
HXLINE( 311)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 311)		::String _hx_tmp;
HXDLIN( 311)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 311)			_hx_tmp = file;
            		}
            		else {
HXLINE( 311)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 311)		achievementName1->setFormat(_hx_tmp,16,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 312)		achievementName1->scrollFactor->set(null(),null());
HXLINE( 314)		 ::flixel::text::FlxText achievementText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,achievementName1->x,(achievementName1->y + 32),280,text,16,null());
HXLINE( 315)		::String file1 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 315)		::String _hx_tmp1;
HXDLIN( 315)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 315)			_hx_tmp1 = file1;
            		}
            		else {
HXLINE( 315)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 315)		achievementText->setFormat(_hx_tmp1,16,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 316)		achievementText->scrollFactor->set(null(),null());
HXLINE( 318)		this->add(achievementBG);
HXLINE( 319)		this->add(achievementName1);
HXLINE( 320)		this->add(achievementText);
HXLINE( 321)		this->add(achievementIcon1);
HXLINE( 323)		::Array< ::Dynamic> cam = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE( 324)		if (::hx::IsNotNull( camera )) {
HXLINE( 325)			cam = ::Array_obj< ::Dynamic>::__new(1)->init(0,camera);
            		}
HXLINE( 327)		this->set_alpha(( (Float)(0) ));
HXLINE( 328)		achievementBG->set_cameras(cam);
HXLINE( 329)		achievementName1->set_cameras(cam);
HXLINE( 330)		achievementText->set_cameras(cam);
HXLINE( 331)		achievementIcon1->set_cameras(cam);
HXLINE( 332)		this->alphaTween = ::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
            	}

Dynamic AchievementObject_obj::__CreateEmpty() { return new AchievementObject_obj; }

void *AchievementObject_obj::_hx_vtable = 0;

Dynamic AchievementObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AchievementObject_obj > _hx_result = new AchievementObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AchievementObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6f8fa5ae) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x6f8fa5ae;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AchievementObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_344_destroy)
HXLINE( 345)		if (::hx::IsNotNull( this->alphaTween )) {
HXLINE( 346)			this->alphaTween->cancel();
            		}
HXLINE( 348)		this->super::destroy();
            	}



::hx::ObjectPtr< AchievementObject_obj > AchievementObject_obj::__new(::String name, ::flixel::FlxCamera camera) {
	::hx::ObjectPtr< AchievementObject_obj > __this = new AchievementObject_obj();
	__this->__construct(name,camera);
	return __this;
}

::hx::ObjectPtr< AchievementObject_obj > AchievementObject_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::flixel::FlxCamera camera) {
	AchievementObject_obj *__this = (AchievementObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AchievementObject_obj), true, "AchievementObject"));
	*(void **)__this = AchievementObject_obj::_hx_vtable;
	__this->__construct(name,camera);
	return __this;
}

AchievementObject_obj::AchievementObject_obj()
{
}

void AchievementObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AchievementObject);
	HX_MARK_MEMBER_NAME(onFinish,"onFinish");
	HX_MARK_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AchievementObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onFinish,"onFinish");
	HX_VISIT_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AchievementObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { return ::hx::Val( onFinish ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaTween") ) { return ::hx::Val( alphaTween ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AchievementObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { onFinish=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaTween") ) { alphaTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AchievementObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaTween",2d,fe,15,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AchievementObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AchievementObject_obj,onFinish),HX_("onFinish",d2,36,2c,66)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(AchievementObject_obj,alphaTween),HX_("alphaTween",2d,fe,15,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AchievementObject_obj_sStaticStorageInfo = 0;
#endif

static ::String AchievementObject_obj_sMemberFields[] = {
	HX_("onFinish",d2,36,2c,66),
	HX_("alphaTween",2d,fe,15,3a),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class AchievementObject_obj::__mClass;

void AchievementObject_obj::__register()
{
	AchievementObject_obj _hx_dummy;
	AchievementObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AchievementObject",6e,f0,f4,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AchievementObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AchievementObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AchievementObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AchievementObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

