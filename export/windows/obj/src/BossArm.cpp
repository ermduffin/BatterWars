#include <hxcpp.h>

#ifndef INCLUDED_BossArm
#include <BossArm.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8b8068d5bee778a4_7_new,"BossArm","new",0x12c83501,"BossArm.new","BossArm.hx",7,0x52bd258f)

void BossArm_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_8b8068d5bee778a4_7_new)
HXLINE(   8)		super::__construct(x,y,null());
HXLINE(  10)		this->makeGraphic(80,80,0,null(),null());
HXLINE(  11)		this->set_immovable(true);
HXLINE(  12)		this->set_exists(false);
            	}

Dynamic BossArm_obj::__CreateEmpty() { return new BossArm_obj; }

void *BossArm_obj::_hx_vtable = 0;

Dynamic BossArm_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BossArm_obj > _hx_result = new BossArm_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BossArm_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5d8f45cf) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5d8f45cf;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< BossArm_obj > BossArm_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< BossArm_obj > __this = new BossArm_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< BossArm_obj > BossArm_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	BossArm_obj *__this = (BossArm_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BossArm_obj), true, "BossArm"));
	*(void **)__this = BossArm_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

BossArm_obj::BossArm_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BossArm_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BossArm_obj_sStaticStorageInfo = 0;
#endif

::hx::Class BossArm_obj::__mClass;

void BossArm_obj::__register()
{
	BossArm_obj _hx_dummy;
	BossArm_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BossArm",8f,a0,6f,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BossArm_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BossArm_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BossArm_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

