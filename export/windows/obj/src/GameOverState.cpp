#include <hxcpp.h>

#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_11_new,"GameOverState","new",0x0e4d841d,"GameOverState.new","GameOverState.hx",11,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_25_create,"GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",25,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_24_create,"GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",24,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_33_create,"GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",33,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_42_create,"GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",42,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_17_create,"GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",17,0xd0ff2df3)

void GameOverState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_11_new)
HXDLIN(  11)		super::__construct(MaxSize);
            	}

Dynamic GameOverState_obj::__CreateEmpty() { return new GameOverState_obj; }

void *GameOverState_obj::_hx_vtable = 0;

Dynamic GameOverState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameOverState_obj > _hx_result = new GameOverState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GameOverState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x63e746eb) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x63e746eb;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void GameOverState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_25_create)
HXLINE(  25)				 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  25)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  25)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_24_create)
HXLINE(  24)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_0()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_33_create)
HXLINE(  34)				::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/OrigamiRepetikaKindGentleBeautifulPerson.ogg",3d,6d,da,c7),((Float)0.5),true,null());
HXLINE(  35)				{
HXLINE(  35)					 ::flixel::FlxState nextState =  ::MenuState_obj::__alloc( HX_CTX ,null());
HXDLIN(  35)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  35)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_33_create)
HXLINE(  33)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_42_create)
HXLINE(  42)			::openfl::_hx_system::System_obj::exit(0);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_17_create)
HXLINE(  18)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  19)		this->name =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("...You Died",33,27,e8,e8),50,true);
HXLINE(  20)		this->name->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  21)		this->add(this->name);
HXLINE(  23)		this->startButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Play Again",34,52,b6,e5), ::Dynamic(new _hx_Closure_1()));
HXLINE(  28)		this->startButton->screenCenter(null());
HXLINE(  29)		 ::flixel::ui::FlxButton fh = this->startButton;
HXDLIN(  29)		fh->set_y((fh->y - ( (Float)(30) )));
HXLINE(  30)		this->add(this->startButton);
HXLINE(  32)		this->menuButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Menu",bf,71,32,33), ::Dynamic(new _hx_Closure_3()));
HXLINE(  38)		this->menuButton->screenCenter(null());
HXLINE(  39)		this->add(this->menuButton);
HXLINE(  41)		this->quitButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Quit",ef,6b,e3,35), ::Dynamic(new _hx_Closure_4()));
HXLINE(  44)		this->quitButton->screenCenter(null());
HXLINE(  45)		 ::flixel::ui::FlxButton fh1 = this->quitButton;
HXDLIN(  45)		fh1->set_y((fh1->y + 30));
HXLINE(  46)		this->add(this->quitButton);
HXLINE(  48)		::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/GigakoopsTheClosingofChaos.ogg",aa,00,32,b7),((Float)0.5),true,null());
HXLINE(  50)		this->super::create();
            	}



::hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< GameOverState_obj > __this = new GameOverState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	GameOverState_obj *__this = (GameOverState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameOverState_obj), true, "GameOverState"));
	*(void **)__this = GameOverState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

GameOverState_obj::GameOverState_obj()
{
}

void GameOverState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverState);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(startButton,"startButton");
	HX_MARK_MEMBER_NAME(menuButton,"menuButton");
	HX_MARK_MEMBER_NAME(quitButton,"quitButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(startButton,"startButton");
	HX_VISIT_MEMBER_NAME(menuButton,"menuButton");
	HX_VISIT_MEMBER_NAME(quitButton,"quitButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameOverState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuButton") ) { return ::hx::Val( menuButton ); }
		if (HX_FIELD_EQ(inName,"quitButton") ) { return ::hx::Val( quitButton ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startButton") ) { return ::hx::Val( startButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameOverState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuButton") ) { menuButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quitButton") ) { quitButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startButton") ) { startButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("startButton",f4,bf,c6,51));
	outFields->push(HX_("menuButton",f1,9c,64,bc));
	outFields->push(HX_("quitButton",21,5b,13,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameOverState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GameOverState_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(GameOverState_obj,startButton),HX_("startButton",f4,bf,c6,51)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(GameOverState_obj,menuButton),HX_("menuButton",f1,9c,64,bc)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(GameOverState_obj,quitButton),HX_("quitButton",21,5b,13,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameOverState_obj_sStaticStorageInfo = 0;
#endif

static ::String GameOverState_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("startButton",f4,bf,c6,51),
	HX_("menuButton",f1,9c,64,bc),
	HX_("quitButton",21,5b,13,a5),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class GameOverState_obj::__mClass;

void GameOverState_obj::__register()
{
	GameOverState_obj _hx_dummy;
	GameOverState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameOverState",ab,31,a0,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameOverState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameOverState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

