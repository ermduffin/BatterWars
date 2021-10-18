#ifndef INCLUDED_CreditsState
#define INCLUDED_CreditsState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(CreditsState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES CreditsState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef CreditsState_obj OBJ_;
		CreditsState_obj();

	public:
		enum { _hx_ClassId = 0x24631877 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CreditsState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CreditsState"); }
		static ::hx::ObjectPtr< CreditsState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< CreditsState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CreditsState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CreditsState",b7,c5,81,3b); }

		 ::flixel::text::FlxText name;
		 ::flixel::text::FlxText creatorName;
		 ::flixel::text::FlxText composerName1;
		 ::flixel::text::FlxText composerName2;
		 ::flixel::text::FlxText composerName3;
		 ::flixel::text::FlxText soundDesignerName1;
		 ::flixel::text::FlxText soundDesignerName2;
		 ::flixel::text::FlxText soundDesignerName3;
		 ::flixel::text::FlxText soundDesignerName4;
		 ::flixel::ui::FlxButton menuButton;
		void create();

};


#endif /* INCLUDED_CreditsState */ 
