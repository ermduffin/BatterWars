#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_WinState
#include <WinState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d218b6a33df93d7a_11_new,"WinState","new",0x8ba493e7,"WinState.new","WinState.hx",11,0x86f0a569)
HX_LOCAL_STACK_FRAME(_hx_pos_d218b6a33df93d7a_25_create,"WinState","create",0x209651d5,"WinState.create","WinState.hx",25,0x86f0a569)
HX_LOCAL_STACK_FRAME(_hx_pos_d218b6a33df93d7a_24_create,"WinState","create",0x209651d5,"WinState.create","WinState.hx",24,0x86f0a569)
HX_LOCAL_STACK_FRAME(_hx_pos_d218b6a33df93d7a_34_create,"WinState","create",0x209651d5,"WinState.create","WinState.hx",34,0x86f0a569)
HX_LOCAL_STACK_FRAME(_hx_pos_d218b6a33df93d7a_33_create,"WinState","create",0x209651d5,"WinState.create","WinState.hx",33,0x86f0a569)
HX_LOCAL_STACK_FRAME(_hx_pos_d218b6a33df93d7a_41_create,"WinState","create",0x209651d5,"WinState.create","WinState.hx",41,0x86f0a569)
HX_LOCAL_STACK_FRAME(_hx_pos_d218b6a33df93d7a_17_create,"WinState","create",0x209651d5,"WinState.create","WinState.hx",17,0x86f0a569)

void WinState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_d218b6a33df93d7a_11_new)
HXDLIN(  11)		super::__construct(MaxSize);
            	}

Dynamic WinState_obj::__CreateEmpty() { return new WinState_obj; }

void *WinState_obj::_hx_vtable = 0;

Dynamic WinState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WinState_obj > _hx_result = new WinState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WinState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x435fec99) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x435fec99;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void WinState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_d218b6a33df93d7a_25_create)
HXLINE(  25)				 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  25)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  25)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_d218b6a33df93d7a_24_create)
HXLINE(  24)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_0()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_d218b6a33df93d7a_34_create)
HXLINE(  34)				 ::flixel::FlxState nextState =  ::MenuState_obj::__alloc( HX_CTX ,null());
HXDLIN(  34)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  34)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_d218b6a33df93d7a_33_create)
HXLINE(  33)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_2()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_d218b6a33df93d7a_41_create)
HXLINE(  41)			::openfl::_hx_system::System_obj::exit(0);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_d218b6a33df93d7a_17_create)
HXLINE(  18)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  19)		this->name =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("You Win!",a6,8e,bd,58),50,true);
HXLINE(  20)		this->name->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  21)		this->add(this->name);
HXLINE(  23)		this->startButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Play Again",34,52,b6,e5), ::Dynamic(new _hx_Closure_1()));
HXLINE(  28)		this->startButton->screenCenter(null());
HXLINE(  29)		 ::flixel::ui::FlxButton fh = this->startButton;
HXDLIN(  29)		fh->set_y((fh->y - ( (Float)(30) )));
HXLINE(  30)		this->add(this->startButton);
HXLINE(  32)		this->menuButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Menu",bf,71,32,33), ::Dynamic(new _hx_Closure_3()));
HXLINE(  37)		this->menuButton->screenCenter(null());
HXLINE(  38)		this->add(this->menuButton);
HXLINE(  40)		this->quitButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Quit",ef,6b,e3,35), ::Dynamic(new _hx_Closure_4()));
HXLINE(  43)		this->quitButton->screenCenter(null());
HXLINE(  44)		 ::flixel::ui::FlxButton fh1 = this->quitButton;
HXDLIN(  44)		fh1->set_y((fh1->y + 30));
HXLINE(  45)		this->add(this->quitButton);
HXLINE(  47)		::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/OrigamiRepetikaKindGentleBeautifulPerson.ogg",3d,6d,da,c7),((Float)0.5),true,null());
HXLINE(  49)		this->super::create();
            	}



::hx::ObjectPtr< WinState_obj > WinState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< WinState_obj > __this = new WinState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< WinState_obj > WinState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	WinState_obj *__this = (WinState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WinState_obj), true, "WinState"));
	*(void **)__this = WinState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

WinState_obj::WinState_obj()
{
}

void WinState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WinState);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(startButton,"startButton");
	HX_MARK_MEMBER_NAME(menuButton,"menuButton");
	HX_MARK_MEMBER_NAME(quitButton,"quitButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WinState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(startButton,"startButton");
	HX_VISIT_MEMBER_NAME(menuButton,"menuButton");
	HX_VISIT_MEMBER_NAME(quitButton,"quitButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WinState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val WinState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void WinState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("startButton",f4,bf,c6,51));
	outFields->push(HX_("menuButton",f1,9c,64,bc));
	outFields->push(HX_("quitButton",21,5b,13,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WinState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WinState_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(WinState_obj,startButton),HX_("startButton",f4,bf,c6,51)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(WinState_obj,menuButton),HX_("menuButton",f1,9c,64,bc)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(WinState_obj,quitButton),HX_("quitButton",21,5b,13,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WinState_obj_sStaticStorageInfo = 0;
#endif

static ::String WinState_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("startButton",f4,bf,c6,51),
	HX_("menuButton",f1,9c,64,bc),
	HX_("quitButton",21,5b,13,a5),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class WinState_obj::__mClass;

void WinState_obj::__register()
{
	WinState_obj _hx_dummy;
	WinState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WinState",75,14,ed,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WinState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WinState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WinState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WinState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

