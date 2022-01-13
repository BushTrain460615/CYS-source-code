// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_FlxVideo
#include <FlxVideo.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_FillScaleMode
#include <flixel/system/scaleModes/FillScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_StageSizeScaleMode
#include <flixel/system/scaleModes/StageSizeScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_495f89d9d0902be3_18_new,"MusicBeatState","new",0xdae47368,"MusicBeatState.new","MusicBeatState.hx",18,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_34_get_controls,"MusicBeatState","get_controls",0xacecf677,"MusicBeatState.get_controls","MusicBeatState.hx",34,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_36_create,"MusicBeatState","create",0x5e9058f4,"MusicBeatState.create","MusicBeatState.hx",36,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_61_onFocus,"MusicBeatState","onFocus",0xe919c541,"MusicBeatState.onFocus","MusicBeatState.hx",61,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_67_onFocusLost,"MusicBeatState","onFocusLost",0x797ccfc5,"MusicBeatState.onFocusLost","MusicBeatState.hx",67,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_74_update,"MusicBeatState","update",0x69867801,"MusicBeatState.update","MusicBeatState.hx",74,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_103_updateBeat,"MusicBeatState","updateBeat",0x79761a17,"MusicBeatState.updateBeat","MusicBeatState.hx",103,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_107_updateCurStep,"MusicBeatState","updateCurStep",0xd6ad7aeb,"MusicBeatState.updateCurStep","MusicBeatState.hx",107,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_155_fixAspectRatio,"MusicBeatState","fixAspectRatio",0xe0ec3636,"MusicBeatState.fixAspectRatio","MusicBeatState.hx",155,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_176_stepHit,"MusicBeatState","stepHit",0xcf94756f,"MusicBeatState.stepHit","MusicBeatState.hx",176,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_181_beatHit,"MusicBeatState","beatHit",0xc257b185,"MusicBeatState.beatHit","MusicBeatState.hx",181,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_122_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",122,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_129_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",129,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_135_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",135,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_148_resetState,"MusicBeatState","resetState",0xec54fbba,"MusicBeatState.resetState","MusicBeatState.hx",148,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_168_getState,"MusicBeatState","getState",0x1dfde593,"MusicBeatState.getState","MusicBeatState.hx",168,0xa1b2f108)

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_18_new)
HXLINE(  27)		this->scaleRatio = (( (Float)(::ClientPrefs_obj::getResolution()->__get(1)) ) / ( (Float)(720) ));
HXLINE(  24)		this->curBeat = 0;
HXLINE(  23)		this->curStep = 0;
HXLINE(  21)		this->lastStep = ((Float)0);
HXLINE(  20)		this->lastBeat = ((Float)0);
HXLINE(  18)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_34_get_controls)
HXDLIN(  34)		return ::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_36_create)
HXLINE(  37)		bool skip = ::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut;
HXLINE(  38)		this->super::create();
HXLINE(  39)		::MusicBeatState_obj::musInstance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  42)		this->modeRatio =  ::flixel::_hx_system::scaleModes::RatioScaleMode_obj::__alloc( HX_CTX ,null());
HXLINE(  43)		this->modeStage =  ::flixel::_hx_system::scaleModes::StageSizeScaleMode_obj::__alloc( HX_CTX );
HXLINE(  49)		if (!(skip)) {
HXLINE(  50)			this->openSubState( ::CustomFadeTransition_obj::__alloc( HX_CTX ,( (Float)(1) ),true));
            		}
HXLINE(  52)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = false;
            	}


void MusicBeatState_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_61_onFocus)
HXLINE(  62)		::FlxVideo_obj::onFocus();
HXLINE(  63)		this->super::onFocus();
            	}


void MusicBeatState_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_67_onFocusLost)
HXLINE(  68)		::FlxVideo_obj::onFocusLost();
HXLINE(  69)		this->super::onFocusLost();
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_74_update)
HXLINE(  76)		int oldStep = this->curStep;
HXLINE(  78)		this->updateCurStep();
HXLINE(  79)		this->updateBeat();
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if ((oldStep != this->curStep)) {
HXLINE(  81)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			this->stepHit();
            		}
HXLINE(  93)		bool _hx_tmp1;
HXDLIN(  93)		bool _hx_tmp2;
HXDLIN(  93)		bool _hx_tmp3;
HXDLIN(  93)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  93)		if (_this->keyManager->checkStatus(18,_this->status)) {
HXLINE(  93)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  93)			_hx_tmp3 = _this->keyManager->checkStatus(13,_this->status);
            		}
            		else {
HXLINE(  93)			_hx_tmp3 = false;
            		}
HXDLIN(  93)		if (_hx_tmp3) {
HXLINE(  93)			_hx_tmp2 = ::flixel::FlxG_obj::get_fullscreen();
            		}
            		else {
HXLINE(  93)			_hx_tmp2 = false;
            		}
HXDLIN(  93)		if (_hx_tmp2) {
HXLINE(  93)			_hx_tmp1 = (::ClientPrefs_obj::screenScaleMode == HX_("ADAPTIVE",76,fd,80,d6));
            		}
            		else {
HXLINE(  93)			_hx_tmp1 = false;
            		}
HXDLIN(  93)		if (_hx_tmp1) {
HXLINE(  94)			::flixel::FlxG_obj::set_fullscreen(false);
            		}
HXLINE(  98)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_103_updateBeat)
HXDLIN( 103)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_107_updateCurStep)
HXLINE( 108)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN( 113)			while((_g < _g1)){
HXLINE( 113)				_g = (_g + 1);
HXDLIN( 113)				int i = (_g - 1);
HXLINE( 115)				if (::hx::IsGreaterEq( ::Conductor_obj::songPosition,::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE( 116)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE( 119)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor((((::Conductor_obj::songPosition - ( (Float)(::ClientPrefs_obj::noteOffset) )) - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::fixAspectRatio(){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_155_fixAspectRatio)
HXDLIN( 155)		if ((::ClientPrefs_obj::screenScaleMode == HX_("LETTERBOX",c5,14,55,36))) {
HXLINE( 156)			::flixel::FlxG_obj::set_scaleMode( ::flixel::_hx_system::scaleModes::RatioScaleMode_obj::__alloc( HX_CTX ,false));
            		}
            		else {
HXLINE( 157)			if ((::ClientPrefs_obj::screenScaleMode == HX_("PAN",3d,ed,3c,00))) {
HXLINE( 158)				::flixel::FlxG_obj::set_scaleMode( ::flixel::_hx_system::scaleModes::RatioScaleMode_obj::__alloc( HX_CTX ,true));
            			}
            			else {
HXLINE( 159)				if ((::ClientPrefs_obj::screenScaleMode == HX_("STRETCH",e5,11,27,76))) {
HXLINE( 160)					::flixel::FlxG_obj::set_scaleMode( ::flixel::_hx_system::scaleModes::FillScaleMode_obj::__alloc( HX_CTX ));
            				}
            				else {
HXLINE( 161)					if ((::ClientPrefs_obj::screenScaleMode == HX_("ADAPTIVE",76,fd,80,d6))) {
HXLINE( 162)						::flixel::FlxG_obj::set_scaleMode(this->modeStage);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,fixAspectRatio,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_176_stepHit)
HXDLIN( 176)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 177)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_181_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))

 ::MusicBeatState MusicBeatState_obj::musInstance;

void MusicBeatState_obj::switchState( ::flixel::FlxState nextState){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_122_switchState)
HXLINE( 124)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE( 125)		 ::MusicBeatState leState = ( ( ::MusicBeatState)(curState) );
HXLINE( 126)		if (!(::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn)) {
HXLINE( 127)			leState->openSubState( ::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.7),false));
HXLINE( 128)			if (::hx::IsEq( nextState,::flixel::FlxG_obj::game->_state )) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_129_switchState)
HXLINE( 130)					::MusicBeatState_obj::musInstance->fixAspectRatio();
HXLINE( 131)					{
HXLINE( 131)						 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 131)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 131)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 129)				::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_0());
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::flixel::FlxState,nextState) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_135_switchState)
HXLINE( 136)					::MusicBeatState_obj::musInstance->fixAspectRatio();
HXLINE( 137)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 137)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 135)				::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_1(nextState));
            			}
HXLINE( 141)			return;
            		}
HXLINE( 143)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = false;
HXLINE( 144)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 144)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,switchState,(void))

void MusicBeatState_obj::resetState(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_148_resetState)
HXDLIN( 148)		::MusicBeatState_obj::switchState(::flixel::FlxG_obj::game->_state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,resetState,(void))

 ::MusicBeatState MusicBeatState_obj::getState(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_168_getState)
HXLINE( 169)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE( 170)		 ::MusicBeatState leState = ( ( ::MusicBeatState)(curState) );
HXLINE( 171)		return leState;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,getState,return )


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

void MusicBeatState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MusicBeatState);
	HX_MARK_MEMBER_NAME(lastBeat,"lastBeat");
	HX_MARK_MEMBER_NAME(lastStep,"lastStep");
	HX_MARK_MEMBER_NAME(curStep,"curStep");
	HX_MARK_MEMBER_NAME(curBeat,"curBeat");
	HX_MARK_MEMBER_NAME(scaleRatio,"scaleRatio");
	HX_MARK_MEMBER_NAME(modeRatio,"modeRatio");
	HX_MARK_MEMBER_NAME(modeStage,"modeStage");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MusicBeatState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastBeat,"lastBeat");
	HX_VISIT_MEMBER_NAME(lastStep,"lastStep");
	HX_VISIT_MEMBER_NAME(curStep,"curStep");
	HX_VISIT_MEMBER_NAME(curBeat,"curBeat");
	HX_VISIT_MEMBER_NAME(scaleRatio,"scaleRatio");
	HX_VISIT_MEMBER_NAME(modeRatio,"modeRatio");
	HX_VISIT_MEMBER_NAME(modeStage,"modeStage");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"modeRatio") ) { return ::hx::Val( modeRatio ); }
		if (HX_FIELD_EQ(inName,"modeStage") ) { return ::hx::Val( modeStage ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRatio") ) { return ::hx::Val( scaleRatio ); }
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fixAspectRatio") ) { return ::hx::Val( fixAspectRatio_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MusicBeatState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getState") ) { outValue = getState_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetState") ) { outValue = resetState_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"musInstance") ) { outValue = ( musInstance ); return true; }
		if (HX_FIELD_EQ(inName,"switchState") ) { outValue = switchState_dyn(); return true; }
	}
	return false;
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"modeRatio") ) { modeRatio=inValue.Cast<  ::flixel::_hx_system::scaleModes::RatioScaleMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modeStage") ) { modeStage=inValue.Cast<  ::flixel::_hx_system::scaleModes::StageSizeScaleMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRatio") ) { scaleRatio=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MusicBeatState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"musInstance") ) { musInstance=ioValue.Cast<  ::MusicBeatState >(); return true; }
	}
	return false;
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("scaleRatio",21,e2,57,05));
	outFields->push(HX_("modeRatio",a8,aa,68,b5));
	outFields->push(HX_("modeStage",5b,e0,4f,55));
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,scaleRatio),HX_("scaleRatio",21,e2,57,05)},
	{::hx::fsObject /*  ::flixel::_hx_system::scaleModes::RatioScaleMode */ ,(int)offsetof(MusicBeatState_obj,modeRatio),HX_("modeRatio",a8,aa,68,b5)},
	{::hx::fsObject /*  ::flixel::_hx_system::scaleModes::StageSizeScaleMode */ ,(int)offsetof(MusicBeatState_obj,modeStage),HX_("modeStage",5b,e0,4f,55)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MusicBeatState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::MusicBeatState */ ,(void *) &MusicBeatState_obj::musInstance,HX_("musInstance",c0,7a,c1,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("scaleRatio",21,e2,57,05),
	HX_("modeRatio",a8,aa,68,b5),
	HX_("modeStage",5b,e0,4f,55),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("create",fc,66,0f,7c),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("update",09,86,05,87),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("fixAspectRatio",3e,8c,b4,e0),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

static void MusicBeatState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MusicBeatState_obj::musInstance,"musInstance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MusicBeatState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MusicBeatState_obj::musInstance,"musInstance");
};

#endif

::hx::Class MusicBeatState_obj::__mClass;

static ::String MusicBeatState_obj_sStaticFields[] = {
	HX_("musInstance",c0,7a,c1,b6),
	HX_("switchState",7d,07,8b,77),
	HX_("resetState",c2,ad,a7,6c),
	HX_("getState",9b,85,e2,e3),
	::String(null())
};

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicBeatState",76,df,84,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MusicBeatState_obj::__GetStatic;
	__mClass->mSetStaticField = &MusicBeatState_obj::__SetStatic;
	__mClass->mMarkFunc = MusicBeatState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MusicBeatState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

