#include <hxcpp.h>

#ifndef INCLUDED_ProjectileType
#include <ProjectileType.h>
#endif

::ProjectileType ProjectileType_obj::BATTER;

::ProjectileType ProjectileType_obj::BATTERBOMB;

::ProjectileType ProjectileType_obj::PANCAKE;

bool ProjectileType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BATTER",2c,6b,5f,08)) { outValue = ProjectileType_obj::BATTER; return true; }
	if (inName==HX_("BATTERBOMB",8e,bb,6e,85)) { outValue = ProjectileType_obj::BATTERBOMB; return true; }
	if (inName==HX_("PANCAKE",75,af,a3,11)) { outValue = ProjectileType_obj::PANCAKE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ProjectileType_obj)

int ProjectileType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BATTER",2c,6b,5f,08)) return 1;
	if (inName==HX_("BATTERBOMB",8e,bb,6e,85)) return 2;
	if (inName==HX_("PANCAKE",75,af,a3,11)) return 0;
	return super::__FindIndex(inName);
}

int ProjectileType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BATTER",2c,6b,5f,08)) return 0;
	if (inName==HX_("BATTERBOMB",8e,bb,6e,85)) return 0;
	if (inName==HX_("PANCAKE",75,af,a3,11)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ProjectileType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BATTER",2c,6b,5f,08)) return BATTER;
	if (inName==HX_("BATTERBOMB",8e,bb,6e,85)) return BATTERBOMB;
	if (inName==HX_("PANCAKE",75,af,a3,11)) return PANCAKE;
	return super::__Field(inName,inCallProp);
}

static ::String ProjectileType_obj_sStaticFields[] = {
	HX_("PANCAKE",75,af,a3,11),
	HX_("BATTER",2c,6b,5f,08),
	HX_("BATTERBOMB",8e,bb,6e,85),
	::String(null())
};

::hx::Class ProjectileType_obj::__mClass;

Dynamic __Create_ProjectileType_obj() { return new ProjectileType_obj; }

void ProjectileType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("ProjectileType",63,e1,c6,bb), ::hx::TCanCast< ProjectileType_obj >,ProjectileType_obj_sStaticFields,0,
	&__Create_ProjectileType_obj, &__Create,
	&super::__SGetClass(), &CreateProjectileType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ProjectileType_obj::__GetStatic;
}

void ProjectileType_obj::__boot()
{
BATTER = ::hx::CreateConstEnum< ProjectileType_obj >(HX_("BATTER",2c,6b,5f,08),1);
BATTERBOMB = ::hx::CreateConstEnum< ProjectileType_obj >(HX_("BATTERBOMB",8e,bb,6e,85),2);
PANCAKE = ::hx::CreateConstEnum< ProjectileType_obj >(HX_("PANCAKE",75,af,a3,11),0);
}


