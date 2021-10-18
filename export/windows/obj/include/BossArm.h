#ifndef INCLUDED_BossArm
#define INCLUDED_BossArm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(BossArm)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES BossArm_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef BossArm_obj OBJ_;
		BossArm_obj();

	public:
		enum { _hx_ClassId = 0x5d8f45cf };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="BossArm")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"BossArm"); }
		static ::hx::ObjectPtr< BossArm_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< BossArm_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BossArm_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BossArm",8f,a0,6f,9d); }

};


#endif /* INCLUDED_BossArm */ 
