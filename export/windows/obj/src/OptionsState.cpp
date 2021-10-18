#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_03f5e745aacd5817_12_new,"OptionsState","new",0x73d32065,"OptionsState.new","OptionsState.hx",12,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_30_create,"OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",30,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_43_create,"OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",43,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_42_create,"OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",42,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_18_create,"OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",18,0x342db2ab)

void OptionsState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_12_new)
HXDLIN(  12)		super::__construct(MaxSize);
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2aabc417) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2aabc417;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void OptionsState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::OptionsState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_30_create)
HXLINE(  31)			::flixel::FlxG_obj::set_fullscreen(_gthis->fullscreenBox->checked);
HXLINE(  32)			if (::flixel::FlxG_obj::get_fullscreen()) {
HXLINE(  33)				::flixel::FlxG_obj::resizeWindow(600,450);
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_43_create)
HXLINE(  43)				 ::flixel::FlxState nextState =  ::MenuState_obj::__alloc( HX_CTX ,null());
HXDLIN(  43)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  43)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_42_create)
HXLINE(  42)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_1()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_18_create)
HXDLIN(  18)		 ::OptionsState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  19)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  20)		this->name =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Options",3e,5b,4f,ad),50,true);
HXLINE(  21)		this->name->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  22)		this->add(this->name);
HXLINE(  24)		this->fullscreenName =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Fullscreen",5b,3e,65,f0),20,true);
HXLINE(  25)		this->fullscreenName->screenCenter(null());
HXLINE(  26)		 ::flixel::text::FlxText fh = this->fullscreenName;
HXDLIN(  26)		fh->set_x((fh->x - ( (Float)(80) )));
HXLINE(  27)		 ::flixel::text::FlxText fh1 = this->fullscreenName;
HXDLIN(  27)		fh1->set_y((fh1->y - ( (Float)(20) )));
HXLINE(  28)		this->add(this->fullscreenName);
HXLINE(  30)		this->fullscreenBox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,0,0,null(),null(),HX_("Fullscreen",5b,3e,65,f0),100,null(), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  35)		this->fullscreenBox->set_checked(true);
HXLINE(  36)		this->fullscreenBox->screenCenter(null());
HXLINE(  37)		 ::flixel::addons::ui::FlxUICheckBox fh2 = this->fullscreenBox;
HXDLIN(  37)		fh2->set_x((fh2->x + 100));
HXLINE(  38)		 ::flixel::addons::ui::FlxUICheckBox fh3 = this->fullscreenBox;
HXDLIN(  38)		fh3->set_y((fh3->y - ( (Float)(20) )));
HXLINE(  39)		this->add(this->fullscreenBox);
HXLINE(  41)		this->menuButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Menu",bf,71,32,33), ::Dynamic(new _hx_Closure_2()));
HXLINE(  46)		this->menuButton->screenCenter(null());
HXLINE(  47)		 ::flixel::ui::FlxButton fh4 = this->menuButton;
HXDLIN(  47)		fh4->set_y((fh4->y + 50));
HXLINE(  48)		this->add(this->menuButton);
HXLINE(  50)		this->super::create();
            	}



::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(fullscreenName,"fullscreenName");
	HX_MARK_MEMBER_NAME(fullscreenBox,"fullscreenBox");
	HX_MARK_MEMBER_NAME(menuButton,"menuButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(fullscreenName,"fullscreenName");
	HX_VISIT_MEMBER_NAME(fullscreenBox,"fullscreenBox");
	HX_VISIT_MEMBER_NAME(menuButton,"menuButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fullscreenBox") ) { return ::hx::Val( fullscreenBox ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fullscreenName") ) { return ::hx::Val( fullscreenName ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuButton") ) { menuButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fullscreenBox") ) { fullscreenBox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fullscreenName") ) { fullscreenName=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("fullscreenName",26,12,d6,4d));
	outFields->push(HX_("fullscreenBox",90,12,5e,8c));
	outFields->push(HX_("menuButton",f1,9c,64,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,fullscreenName),HX_("fullscreenName",26,12,d6,4d)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(OptionsState_obj,fullscreenBox),HX_("fullscreenBox",90,12,5e,8c)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(OptionsState_obj,menuButton),HX_("menuButton",f1,9c,64,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptionsState_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("fullscreenName",26,12,d6,4d),
	HX_("fullscreenBox",90,12,5e,8c),
	HX_("menuButton",f1,9c,64,bc),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class OptionsState_obj::__mClass;

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsState",f3,09,80,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

