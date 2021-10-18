#include <hxcpp.h>

#ifndef INCLUDED_MonsterType
#include <MonsterType.h>
#endif

::MonsterType MonsterType_obj::CHIPPY;

::MonsterType MonsterType_obj::GLOBBY;

bool MonsterType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CHIPPY",d5,7e,40,6f)) { outValue = MonsterType_obj::CHIPPY; return true; }
	if (inName==HX_("GLOBBY",4f,de,34,5a)) { outValue = MonsterType_obj::GLOBBY; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(MonsterType_obj)

int MonsterType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CHIPPY",d5,7e,40,6f)) return 0;
	if (inName==HX_("GLOBBY",4f,de,34,5a)) return 1;
	return super::__FindIndex(inName);
}

int MonsterType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CHIPPY",d5,7e,40,6f)) return 0;
	if (inName==HX_("GLOBBY",4f,de,34,5a)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val MonsterType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CHIPPY",d5,7e,40,6f)) return CHIPPY;
	if (inName==HX_("GLOBBY",4f,de,34,5a)) return GLOBBY;
	return super::__Field(inName,inCallProp);
}

static ::String MonsterType_obj_sStaticFields[] = {
	HX_("CHIPPY",d5,7e,40,6f),
	HX_("GLOBBY",4f,de,34,5a),
	::String(null())
};

::hx::Class MonsterType_obj::__mClass;

Dynamic __Create_MonsterType_obj() { return new MonsterType_obj; }

void MonsterType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("MonsterType",d4,1f,ea,8d), ::hx::TCanCast< MonsterType_obj >,MonsterType_obj_sStaticFields,0,
	&__Create_MonsterType_obj, &__Create,
	&super::__SGetClass(), &CreateMonsterType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &MonsterType_obj::__GetStatic;
}

void MonsterType_obj::__boot()
{
CHIPPY = ::hx::CreateConstEnum< MonsterType_obj >(HX_("CHIPPY",d5,7e,40,6f),0);
GLOBBY = ::hx::CreateConstEnum< MonsterType_obj >(HX_("GLOBBY",4f,de,34,5a),1);
}


