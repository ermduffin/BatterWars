#include <hxcpp.h>

#ifndef INCLUDED_CreditsState
#include <CreditsState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1bf4423a091ce525_10_new,"CreditsState","new",0xfd580e29,"CreditsState.new","CreditsState.hx",10,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_75_create,"CreditsState","create",0x506b2cd3,"CreditsState.create","CreditsState.hx",75,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_74_create,"CreditsState","create",0x506b2cd3,"CreditsState.create","CreditsState.hx",74,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_27_create,"CreditsState","create",0x506b2cd3,"CreditsState.create","CreditsState.hx",27,0xdb40a967)

void CreditsState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_10_new)
HXDLIN(  10)		super::__construct(MaxSize);
            	}

Dynamic CreditsState_obj::__CreateEmpty() { return new CreditsState_obj; }

void *CreditsState_obj::_hx_vtable = 0;

Dynamic CreditsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsState_obj > _hx_result = new CreditsState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CreditsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x24631877) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x24631877;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void CreditsState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_75_create)
HXLINE(  75)				 ::flixel::FlxState nextState =  ::MenuState_obj::__alloc( HX_CTX ,null());
HXDLIN(  75)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  75)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_74_create)
HXLINE(  74)			::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.5),false, ::Dynamic(new _hx_Closure_0()),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_27_create)
HXLINE(  28)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  29)		this->name =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Credits",fa,35,af,e0),50,true);
HXLINE(  30)		this->name->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  31)		this->add(this->name);
HXLINE(  33)		this->creatorName =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Created by: Emilie Duffin",9a,2a,f5,f0),20,true);
HXLINE(  34)		this->creatorName->screenCenter(null());
HXLINE(  35)		 ::flixel::text::FlxText fh = this->creatorName;
HXDLIN(  35)		fh->set_y((fh->y - ( (Float)(120) )));
HXLINE(  36)		this->add(this->creatorName);
HXLINE(  38)		this->composerName1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Music by: Gigakoops",fa,e1,b3,c8),20,true);
HXLINE(  39)		this->composerName1->screenCenter(null());
HXLINE(  40)		 ::flixel::text::FlxText fh1 = this->composerName1;
HXDLIN(  40)		fh1->set_y((fh1->y - ( (Float)(80) )));
HXLINE(  41)		this->add(this->composerName1);
HXLINE(  43)		this->composerName2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("\tOrigami Repetica",c8,91,88,4f),20,true);
HXLINE(  44)		this->composerName2->screenCenter(null());
HXLINE(  45)		 ::flixel::text::FlxText fh2 = this->composerName2;
HXDLIN(  45)		fh2->set_y((fh2->y - ( (Float)(50) )));
HXLINE(  46)		this->add(this->composerName2);
HXLINE(  48)		this->composerName3 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("\tsawsquarenoise",1d,ca,38,0e),20,true);
HXLINE(  49)		this->composerName3->screenCenter(null());
HXLINE(  50)		 ::flixel::text::FlxText fh3 = this->composerName3;
HXDLIN(  50)		fh3->set_y((fh3->y - ( (Float)(20) )));
HXLINE(  51)		this->add(this->composerName3);
HXLINE(  53)		this->soundDesignerName1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Sound by: Morgan Purkis",b6,ae,35,1c),20,true);
HXLINE(  54)		this->soundDesignerName1->screenCenter(null());
HXLINE(  55)		 ::flixel::text::FlxText fh4 = this->soundDesignerName1;
HXDLIN(  55)		fh4->set_y((fh4->y + 20));
HXLINE(  56)		this->add(this->soundDesignerName1);
HXLINE(  58)		this->soundDesignerName2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("\tNatty23",de,38,72,8e),20,true);
HXLINE(  59)		this->soundDesignerName2->screenCenter(null());
HXLINE(  60)		 ::flixel::text::FlxText fh5 = this->soundDesignerName2;
HXDLIN(  60)		fh5->set_y((fh5->y + 50));
HXLINE(  61)		this->add(this->soundDesignerName2);
HXLINE(  63)		this->soundDesignerName3 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("\tseveraltimes",93,2f,ee,28),20,true);
HXLINE(  64)		this->soundDesignerName3->screenCenter(null());
HXLINE(  65)		 ::flixel::text::FlxText fh6 = this->soundDesignerName3;
HXDLIN(  65)		fh6->set_y((fh6->y + 80));
HXLINE(  66)		this->add(this->soundDesignerName3);
HXLINE(  68)		this->soundDesignerName4 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("\tsharesynth",86,3c,73,b5),20,true);
HXLINE(  69)		this->soundDesignerName4->screenCenter(null());
HXLINE(  70)		 ::flixel::text::FlxText fh7 = this->soundDesignerName4;
HXDLIN(  70)		fh7->set_y((fh7->y + 110));
HXLINE(  71)		this->add(this->soundDesignerName4);
HXLINE(  73)		this->menuButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Menu",bf,71,32,33), ::Dynamic(new _hx_Closure_1()));
HXLINE(  78)		this->menuButton->screenCenter(null());
HXLINE(  79)		 ::flixel::ui::FlxButton fh8 = this->menuButton;
HXDLIN(  79)		fh8->set_y((fh8->y + 160));
HXLINE(  80)		this->add(this->menuButton);
HXLINE(  82)		this->super::create();
            	}



::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< CreditsState_obj > __this = new CreditsState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	CreditsState_obj *__this = (CreditsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsState_obj), true, "CreditsState"));
	*(void **)__this = CreditsState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

CreditsState_obj::CreditsState_obj()
{
}

void CreditsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsState);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(creatorName,"creatorName");
	HX_MARK_MEMBER_NAME(composerName1,"composerName1");
	HX_MARK_MEMBER_NAME(composerName2,"composerName2");
	HX_MARK_MEMBER_NAME(composerName3,"composerName3");
	HX_MARK_MEMBER_NAME(soundDesignerName1,"soundDesignerName1");
	HX_MARK_MEMBER_NAME(soundDesignerName2,"soundDesignerName2");
	HX_MARK_MEMBER_NAME(soundDesignerName3,"soundDesignerName3");
	HX_MARK_MEMBER_NAME(soundDesignerName4,"soundDesignerName4");
	HX_MARK_MEMBER_NAME(menuButton,"menuButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(creatorName,"creatorName");
	HX_VISIT_MEMBER_NAME(composerName1,"composerName1");
	HX_VISIT_MEMBER_NAME(composerName2,"composerName2");
	HX_VISIT_MEMBER_NAME(composerName3,"composerName3");
	HX_VISIT_MEMBER_NAME(soundDesignerName1,"soundDesignerName1");
	HX_VISIT_MEMBER_NAME(soundDesignerName2,"soundDesignerName2");
	HX_VISIT_MEMBER_NAME(soundDesignerName3,"soundDesignerName3");
	HX_VISIT_MEMBER_NAME(soundDesignerName4,"soundDesignerName4");
	HX_VISIT_MEMBER_NAME(menuButton,"menuButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 11:
		if (HX_FIELD_EQ(inName,"creatorName") ) { return ::hx::Val( creatorName ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"composerName1") ) { return ::hx::Val( composerName1 ); }
		if (HX_FIELD_EQ(inName,"composerName2") ) { return ::hx::Val( composerName2 ); }
		if (HX_FIELD_EQ(inName,"composerName3") ) { return ::hx::Val( composerName3 ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"soundDesignerName1") ) { return ::hx::Val( soundDesignerName1 ); }
		if (HX_FIELD_EQ(inName,"soundDesignerName2") ) { return ::hx::Val( soundDesignerName2 ); }
		if (HX_FIELD_EQ(inName,"soundDesignerName3") ) { return ::hx::Val( soundDesignerName3 ); }
		if (HX_FIELD_EQ(inName,"soundDesignerName4") ) { return ::hx::Val( soundDesignerName4 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CreditsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuButton") ) { menuButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"creatorName") ) { creatorName=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"composerName1") ) { composerName1=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"composerName2") ) { composerName2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"composerName3") ) { composerName3=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"soundDesignerName1") ) { soundDesignerName1=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundDesignerName2") ) { soundDesignerName2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundDesignerName3") ) { soundDesignerName3=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundDesignerName4") ) { soundDesignerName4=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreditsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("creatorName",17,23,66,6d));
	outFields->push(HX_("composerName1",46,f4,67,c9));
	outFields->push(HX_("composerName2",47,f4,67,c9));
	outFields->push(HX_("composerName3",48,f4,67,c9));
	outFields->push(HX_("soundDesignerName1",0c,91,b6,f6));
	outFields->push(HX_("soundDesignerName2",0d,91,b6,f6));
	outFields->push(HX_("soundDesignerName3",0e,91,b6,f6));
	outFields->push(HX_("soundDesignerName4",0f,91,b6,f6));
	outFields->push(HX_("menuButton",f1,9c,64,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,creatorName),HX_("creatorName",17,23,66,6d)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,composerName1),HX_("composerName1",46,f4,67,c9)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,composerName2),HX_("composerName2",47,f4,67,c9)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,composerName3),HX_("composerName3",48,f4,67,c9)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,soundDesignerName1),HX_("soundDesignerName1",0c,91,b6,f6)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,soundDesignerName2),HX_("soundDesignerName2",0d,91,b6,f6)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,soundDesignerName3),HX_("soundDesignerName3",0e,91,b6,f6)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,soundDesignerName4),HX_("soundDesignerName4",0f,91,b6,f6)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(CreditsState_obj,menuButton),HX_("menuButton",f1,9c,64,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CreditsState_obj_sStaticStorageInfo = 0;
#endif

static ::String CreditsState_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("creatorName",17,23,66,6d),
	HX_("composerName1",46,f4,67,c9),
	HX_("composerName2",47,f4,67,c9),
	HX_("composerName3",48,f4,67,c9),
	HX_("soundDesignerName1",0c,91,b6,f6),
	HX_("soundDesignerName2",0d,91,b6,f6),
	HX_("soundDesignerName3",0e,91,b6,f6),
	HX_("soundDesignerName4",0f,91,b6,f6),
	HX_("menuButton",f1,9c,64,bc),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class CreditsState_obj::__mClass;

void CreditsState_obj::__register()
{
	CreditsState_obj _hx_dummy;
	CreditsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CreditsState",b7,c5,81,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

