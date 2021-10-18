#include <hxcpp.h>

#ifndef INCLUDED_CreditsState
#include <CreditsState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1f119275e66a7b90_11_new,"MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",11,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_27_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",27,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_26_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",26,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_36_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",36,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_35_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",35,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_45_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",45,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_44_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",44,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_53_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",53,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_18_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",18,0xdfbcb22c)

void MenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_11_new)
HXDLIN(  11)		super::__construct(MaxSize);
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

void *MenuState_obj::_hx_vtable = 0;

Dynamic MenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x32c1072e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32c1072e;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MenuState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_27_create)
HXLINE(  27)				 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  27)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  27)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_26_create)
HXLINE(  26)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_0()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_36_create)
HXLINE(  36)				 ::flixel::FlxState nextState =  ::CreditsState_obj::__alloc( HX_CTX ,null());
HXDLIN(  36)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  36)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_35_create)
HXLINE(  35)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_45_create)
HXLINE(  45)				 ::flixel::FlxState nextState =  ::OptionsState_obj::__alloc( HX_CTX ,null());
HXDLIN(  45)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  45)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_44_create)
HXLINE(  44)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_4()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_53_create)
HXLINE(  53)			::openfl::_hx_system::System_obj::exit(0);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_18_create)
HXLINE(  19)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  20)		::flixel::FlxG_obj::cameras->set_bgColor(-7025946);
HXLINE(  21)		this->name =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Batter Wars",bf,77,13,39),50,true);
HXLINE(  22)		this->name->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  23)		this->add(this->name);
HXLINE(  25)		this->startButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Start",42,e4,38,17), ::Dynamic(new _hx_Closure_1()));
HXLINE(  30)		this->startButton->screenCenter(null());
HXLINE(  31)		 ::flixel::ui::FlxButton fh = this->startButton;
HXDLIN(  31)		fh->set_y((fh->y - ( (Float)(45) )));
HXLINE(  32)		this->add(this->startButton);
HXLINE(  34)		this->creditsButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Credits",fa,35,af,e0), ::Dynamic(new _hx_Closure_3()));
HXLINE(  39)		this->creditsButton->screenCenter(null());
HXLINE(  40)		 ::flixel::ui::FlxButton fh1 = this->creditsButton;
HXDLIN(  40)		fh1->set_y((fh1->y - ( (Float)(15) )));
HXLINE(  41)		this->add(this->creditsButton);
HXLINE(  43)		this->optionsButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Options",3e,5b,4f,ad), ::Dynamic(new _hx_Closure_5()));
HXLINE(  48)		this->optionsButton->screenCenter(null());
HXLINE(  49)		 ::flixel::ui::FlxButton fh2 = this->optionsButton;
HXDLIN(  49)		fh2->set_y((fh2->y + 15));
HXLINE(  50)		this->add(this->optionsButton);
HXLINE(  52)		this->quitButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Quit",ef,6b,e3,35), ::Dynamic(new _hx_Closure_6()));
HXLINE(  55)		this->quitButton->screenCenter(null());
HXLINE(  56)		 ::flixel::ui::FlxButton fh3 = this->quitButton;
HXDLIN(  56)		fh3->set_y((fh3->y + 45));
HXLINE(  57)		this->add(this->quitButton);
HXLINE(  59)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  60)			::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/OrigamiRepetikaKindGentleBeautifulPerson.ogg",3d,6d,da,c7),((Float)0.5),true,null());
            		}
HXLINE(  62)		this->super::create();
            	}



::hx::ObjectPtr< MenuState_obj > MenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MenuState_obj > __this = new MenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MenuState_obj > MenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MenuState_obj *__this = (MenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuState_obj), true, "MenuState"));
	*(void **)__this = MenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(startButton,"startButton");
	HX_MARK_MEMBER_NAME(optionsButton,"optionsButton");
	HX_MARK_MEMBER_NAME(creditsButton,"creditsButton");
	HX_MARK_MEMBER_NAME(quitButton,"quitButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(startButton,"startButton");
	HX_VISIT_MEMBER_NAME(optionsButton,"optionsButton");
	HX_VISIT_MEMBER_NAME(creditsButton,"creditsButton");
	HX_VISIT_MEMBER_NAME(quitButton,"quitButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quitButton") ) { return ::hx::Val( quitButton ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startButton") ) { return ::hx::Val( startButton ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionsButton") ) { return ::hx::Val( optionsButton ); }
		if (HX_FIELD_EQ(inName,"creditsButton") ) { return ::hx::Val( creditsButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quitButton") ) { quitButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startButton") ) { startButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionsButton") ) { optionsButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"creditsButton") ) { creditsButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("startButton",f4,bf,c6,51));
	outFields->push(HX_("optionsButton",f0,e3,7c,0c));
	outFields->push(HX_("creditsButton",ac,73,ff,61));
	outFields->push(HX_("quitButton",21,5b,13,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MenuState_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MenuState_obj,startButton),HX_("startButton",f4,bf,c6,51)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MenuState_obj,optionsButton),HX_("optionsButton",f0,e3,7c,0c)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MenuState_obj,creditsButton),HX_("creditsButton",ac,73,ff,61)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MenuState_obj,quitButton),HX_("quitButton",21,5b,13,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("startButton",f4,bf,c6,51),
	HX_("optionsButton",f0,e3,7c,0c),
	HX_("creditsButton",ac,73,ff,61),
	HX_("quitButton",21,5b,13,a5),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	MenuState_obj _hx_dummy;
	MenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuState",d2,bf,b6,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

