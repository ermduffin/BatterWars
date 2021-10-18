#ifndef INCLUDED_ProjectileType
#define INCLUDED_ProjectileType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ProjectileType)


class ProjectileType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ProjectileType_obj OBJ_;

	public:
		ProjectileType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("ProjectileType",63,e1,c6,bb); }
		::String __ToString() const { return HX_("ProjectileType.",6b,55,3e,92) + _hx_tag; }

		static ::ProjectileType BATTER;
		static inline ::ProjectileType BATTER_dyn() { return BATTER; }
		static ::ProjectileType BATTERBOMB;
		static inline ::ProjectileType BATTERBOMB_dyn() { return BATTERBOMB; }
		static ::ProjectileType PANCAKE;
		static inline ::ProjectileType PANCAKE_dyn() { return PANCAKE; }
};


#endif /* INCLUDED_ProjectileType */ 
