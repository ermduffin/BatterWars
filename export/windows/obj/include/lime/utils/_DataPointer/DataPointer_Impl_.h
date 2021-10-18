#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#define INCLUDED_lime_utils__DataPointer_DataPointer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)
HX_DECLARE_CLASS3(lime,utils,_DataPointer,DataPointer_Impl_)

namespace lime{
namespace utils{
namespace _DataPointer{


class HXCPP_CLASS_ATTRIBUTES DataPointer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DataPointer_Impl__obj OBJ_;
		DataPointer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7552d517 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils._DataPointer.DataPointer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.utils._DataPointer.DataPointer_Impl_"); }

		inline static ::hx::ObjectPtr< DataPointer_Impl__obj > __new() {
			::hx::ObjectPtr< DataPointer_Impl__obj > __this = new DataPointer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DataPointer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			DataPointer_Impl__obj *__this = (DataPointer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataPointer_Impl__obj), false, "lime.utils._DataPointer.DataPointer_Impl_"));
			*(void **)__this = DataPointer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataPointer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataPointer_Impl_",73,50,78,48); }

		static Float _new(Float data);
		static ::Dynamic _new_dyn();

		static Float fromInt(int value);
		static ::Dynamic fromInt_dyn();

		static Float fromBytesPointer( ::lime::utils::BytePointerData pointer);
		static ::Dynamic fromBytesPointer_dyn();

		static Float fromArrayBufferView( ::lime::utils::ArrayBufferView arrayBufferView);
		static ::Dynamic fromArrayBufferView_dyn();

		static Float fromArrayBuffer( ::haxe::io::Bytes buffer);
		static ::Dynamic fromArrayBuffer_dyn();

		static Float fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static Float fromBytesData(::Array< unsigned char > bytesData);
		static ::Dynamic fromBytesData_dyn();

		static Float fromLimeBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromLimeBytes_dyn();

		static Float fromCFFIPointer( ::Dynamic pointer);
		static ::Dynamic fromCFFIPointer_dyn();

		static Float fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static Float _hx___withOffset(Float data,int offset);
		static ::Dynamic _hx___withOffset_dyn();

		static bool equals(Float a,int b);
		static ::Dynamic equals_dyn();

		static bool equalsPointer(Float a,Float b);
		static ::Dynamic equalsPointer_dyn();

		static bool greaterThan(Float a,int b);
		static ::Dynamic greaterThan_dyn();

		static bool greaterThanPointer(Float a, ::Dynamic b);
		static ::Dynamic greaterThanPointer_dyn();

		static bool greaterThanOrEqual(Float a,int b);
		static ::Dynamic greaterThanOrEqual_dyn();

		static bool greaterThanOrEqualPointer(Float a, ::Dynamic b);
		static ::Dynamic greaterThanOrEqualPointer_dyn();

		static bool lessThan(Float a,int b);
		static ::Dynamic lessThan_dyn();

		static bool lessThanPointer(Float a, ::Dynamic b);
		static ::Dynamic lessThanPointer_dyn();

		static bool lessThanOrEqual(Float a,int b);
		static ::Dynamic lessThanOrEqual_dyn();

		static bool lessThanOrEqualPointer(Float a, ::Dynamic b);
		static ::Dynamic lessThanOrEqualPointer_dyn();

		static bool notEquals(Float a,int b);
		static ::Dynamic notEquals_dyn();

		static bool notEqualsPointer(Float a,Float b);
		static ::Dynamic notEqualsPointer_dyn();

		static Float plus(Float a,int b);
		static ::Dynamic plus_dyn();

		static Float plusPointer(Float a,Float b);
		static ::Dynamic plusPointer_dyn();

		static Float minus(Float a,int b);
		static ::Dynamic minus_dyn();

		static Float minusPointer(Float a,Float b);
		static ::Dynamic minusPointer_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _DataPointer

#endif /* INCLUDED_lime_utils__DataPointer_DataPointer_Impl_ */ 
