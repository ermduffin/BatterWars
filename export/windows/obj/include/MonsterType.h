#ifndef INCLUDED_MonsterType
#define INCLUDED_MonsterType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MonsterType)


class MonsterType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef MonsterType_obj OBJ_;

	public:
		MonsterType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("MonsterType",d4,1f,ea,8d); }
		::String __ToString() const { return HX_("MonsterType.",da,b9,f1,9e) + _hx_tag; }

		static ::MonsterType CHIPPY;
		static inline ::MonsterType CHIPPY_dyn() { return CHIPPY; }
		static ::MonsterType GLOBBY;
		static inline ::MonsterType GLOBBY_dyn() { return GLOBBY; }
};


#endif /* INCLUDED_MonsterType */ 
