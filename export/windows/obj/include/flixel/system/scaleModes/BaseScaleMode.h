#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#define INCLUDED_flixel_system_scaleModes_BaseScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS3(flixel,_hx_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS2(flixel,util,FlxHorizontalAlign)
HX_DECLARE_CLASS2(flixel,util,FlxVerticalAlign)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace _hx_system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES BaseScaleMode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BaseScaleMode_obj OBJ_;
		BaseScaleMode_obj();

	public:
		enum { _hx_ClassId = 0x5671ae2b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.scaleModes.BaseScaleMode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.scaleModes.BaseScaleMode"); }
		static ::hx::ObjectPtr< BaseScaleMode_obj > __new();
		static ::hx::ObjectPtr< BaseScaleMode_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseScaleMode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseScaleMode",9c,18,1b,74); }

		 ::flixel::math::FlxPoint deviceSize;
		 ::flixel::math::FlxPoint gameSize;
		 ::flixel::math::FlxPoint scale;
		 ::flixel::math::FlxPoint offset;
		 ::flixel::util::FlxHorizontalAlign horizontalAlign;
		 ::flixel::util::FlxVerticalAlign verticalAlign;
		void onMeasure(int Width,int Height);
		::Dynamic onMeasure_dyn();

		virtual void updateGameSize(int Width,int Height);
		::Dynamic updateGameSize_dyn();

		void updateDeviceSize(int Width,int Height);
		::Dynamic updateDeviceSize_dyn();

		void updateScaleOffset();
		::Dynamic updateScaleOffset_dyn();

		void updateOffsetX();
		::Dynamic updateOffsetX_dyn();

		void updateOffsetY();
		::Dynamic updateOffsetY_dyn();

		void updateGamePosition();
		::Dynamic updateGamePosition_dyn();

		 ::flixel::util::FlxHorizontalAlign set_horizontalAlign( ::flixel::util::FlxHorizontalAlign value);
		::Dynamic set_horizontalAlign_dyn();

		 ::flixel::util::FlxVerticalAlign set_verticalAlign( ::flixel::util::FlxVerticalAlign value);
		::Dynamic set_verticalAlign_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_BaseScaleMode */ 
