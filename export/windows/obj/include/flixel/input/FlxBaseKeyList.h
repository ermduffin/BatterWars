#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#define INCLUDED_flixel_input_FlxBaseKeyList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxBaseKeyList)
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES FlxBaseKeyList_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBaseKeyList_obj OBJ_;
		FlxBaseKeyList_obj();

	public:
		enum { _hx_ClassId = 0x7e9b8150 };

		void __construct(int status, ::flixel::input::FlxKeyManager keyManager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxBaseKeyList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.FlxBaseKeyList"); }
		static ::hx::ObjectPtr< FlxBaseKeyList_obj > __new(int status, ::flixel::input::FlxKeyManager keyManager);
		static ::hx::ObjectPtr< FlxBaseKeyList_obj > __alloc(::hx::Ctx *_hx_ctx,int status, ::flixel::input::FlxKeyManager keyManager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBaseKeyList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBaseKeyList",5a,1a,1b,52); }

		int status;
		 ::flixel::input::FlxKeyManager keyManager;
		bool check(int keyCode);
		::Dynamic check_dyn();

		bool get_ANY();
		::Dynamic get_ANY_dyn();

		bool get_NONE();
		::Dynamic get_NONE_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxBaseKeyList */ 
