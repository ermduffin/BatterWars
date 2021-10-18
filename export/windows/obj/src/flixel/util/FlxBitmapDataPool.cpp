#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_41_get,"flixel.util.FlxBitmapDataPool","get",0x62a51335,"flixel.util.FlxBitmapDataPool.get","flixel/util/FlxBitmapDataPool.hx",41,0x992b0db1)
HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_93_put,"flixel.util.FlxBitmapDataPool","put",0x62abf56e,"flixel.util.FlxBitmapDataPool.put","flixel/util/FlxBitmapDataPool.hx",93,0x992b0db1)
HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_125_clear,"flixel.util.FlxBitmapDataPool","clear",0xdb7329ec,"flixel.util.FlxBitmapDataPool.clear","flixel/util/FlxBitmapDataPool.hx",125,0x992b0db1)
HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_139_set_maxLength,"flixel.util.FlxBitmapDataPool","set_maxLength",0xa2220bec,"flixel.util.FlxBitmapDataPool.set_maxLength","flixel/util/FlxBitmapDataPool.hx",139,0x992b0db1)
HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_21_boot,"flixel.util.FlxBitmapDataPool","boot",0xea853cb3,"flixel.util.FlxBitmapDataPool.boot","flixel/util/FlxBitmapDataPool.hx",21,0x992b0db1)
HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_26_boot,"flixel.util.FlxBitmapDataPool","boot",0xea853cb3,"flixel.util.FlxBitmapDataPool.boot","flixel/util/FlxBitmapDataPool.hx",26,0x992b0db1)
HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_28_boot,"flixel.util.FlxBitmapDataPool","boot",0xea853cb3,"flixel.util.FlxBitmapDataPool.boot","flixel/util/FlxBitmapDataPool.hx",28,0x992b0db1)
HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_29_boot,"flixel.util.FlxBitmapDataPool","boot",0xea853cb3,"flixel.util.FlxBitmapDataPool.boot","flixel/util/FlxBitmapDataPool.hx",29,0x992b0db1)
HX_LOCAL_STACK_FRAME(_hx_pos_f71e48b1d97abdba_31_boot,"flixel.util.FlxBitmapDataPool","boot",0xea853cb3,"flixel.util.FlxBitmapDataPool.boot","flixel/util/FlxBitmapDataPool.hx",31,0x992b0db1)
namespace flixel{
namespace util{

void FlxBitmapDataPool_obj::__construct() { }

Dynamic FlxBitmapDataPool_obj::__CreateEmpty() { return new FlxBitmapDataPool_obj; }

void *FlxBitmapDataPool_obj::_hx_vtable = 0;

Dynamic FlxBitmapDataPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBitmapDataPool_obj > _hx_result = new FlxBitmapDataPool_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBitmapDataPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09960165;
}

int FlxBitmapDataPool_obj::maxLength;

int FlxBitmapDataPool_obj::length;

 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode FlxBitmapDataPool_obj::_head;

 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode FlxBitmapDataPool_obj::_tail;

 ::openfl::geom::Rectangle FlxBitmapDataPool_obj::_rect;

 ::openfl::display::BitmapData FlxBitmapDataPool_obj::get(int w,int h,::hx::Null< bool >  __o_transparent, ::Dynamic fillColor, ::Dynamic __o_exactSize){
            		bool transparent = __o_transparent.Default(true);
            		 ::Dynamic exactSize = __o_exactSize;
            		if (::hx::IsNull(__o_exactSize)) exactSize = false;
            	HX_GC_STACKFRAME(&_hx_pos_f71e48b1d97abdba_41_get)
HXLINE(  42)		 ::openfl::display::BitmapData res = null();
HXLINE(  45)		 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = ::flixel::util::FlxBitmapDataPool_obj::_head;
HXLINE(  46)		while(::hx::IsNotNull( node )){
HXLINE(  48)			 ::openfl::display::BitmapData bmd = node->bmd;
HXLINE(  49)			bool _hx_tmp;
HXDLIN(  49)			bool _hx_tmp1;
HXDLIN(  49)			bool _hx_tmp2;
HXDLIN(  49)			if ((bmd->transparent == transparent)) {
HXLINE(  49)				_hx_tmp2 = (bmd->width >= w);
            			}
            			else {
HXLINE(  49)				_hx_tmp2 = false;
            			}
HXDLIN(  49)			if (_hx_tmp2) {
HXLINE(  49)				_hx_tmp1 = (bmd->height >= h);
            			}
            			else {
HXLINE(  49)				_hx_tmp1 = false;
            			}
HXDLIN(  49)			if (_hx_tmp1) {
HXLINE(  50)				if (!(!(( (bool)(exactSize) )))) {
HXLINE(  50)					bool _hx_tmp1;
HXDLIN(  50)					if (( (bool)(exactSize) )) {
HXLINE(  50)						_hx_tmp1 = (bmd->width == w);
            					}
            					else {
HXLINE(  50)						_hx_tmp1 = false;
            					}
HXDLIN(  50)					if (_hx_tmp1) {
HXLINE(  49)						_hx_tmp = (bmd->height == h);
            					}
            					else {
HXLINE(  49)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(  49)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  49)				_hx_tmp = false;
            			}
HXDLIN(  49)			if (_hx_tmp) {
HXLINE(  52)				res = bmd;
HXLINE(  55)				if (::hx::IsNotNull( node->prev )) {
HXLINE(  56)					node->prev->next = node->next;
            				}
HXLINE(  57)				if (::hx::IsNotNull( node->next )) {
HXLINE(  58)					node->next->prev = node->prev;
            				}
HXLINE(  59)				if (::hx::IsInstanceEq( node,::flixel::util::FlxBitmapDataPool_obj::_head )) {
HXLINE(  60)					::flixel::util::FlxBitmapDataPool_obj::_head = node->next;
            				}
HXLINE(  61)				if (::hx::IsInstanceEq( node,::flixel::util::FlxBitmapDataPool_obj::_tail )) {
HXLINE(  62)					::flixel::util::FlxBitmapDataPool_obj::_tail = node->prev;
            				}
HXLINE(  63)				node = null();
HXLINE(  64)				::flixel::util::FlxBitmapDataPool_obj::length--;
HXLINE(  65)				goto _hx_goto_0;
            			}
HXLINE(  67)			node = node->next;
            		}
            		_hx_goto_0:;
HXLINE(  70)		if (::hx::IsNotNull( res )) {
HXLINE(  72)			if (::hx::IsNotNull( fillColor )) {
HXLINE(  74)				::flixel::util::FlxBitmapDataPool_obj::_rect->x = ( (Float)(0) );
HXLINE(  75)				::flixel::util::FlxBitmapDataPool_obj::_rect->y = ( (Float)(0) );
HXLINE(  76)				::flixel::util::FlxBitmapDataPool_obj::_rect->width = ( (Float)(w) );
HXLINE(  77)				::flixel::util::FlxBitmapDataPool_obj::_rect->height = ( (Float)(h) );
HXLINE(  78)				res->fillRect(::flixel::util::FlxBitmapDataPool_obj::_rect,( (int)(fillColor) ));
            			}
            		}
            		else {
HXLINE(  83)			int res1;
HXDLIN(  83)			if (::hx::IsNotNull( fillColor )) {
HXLINE(  83)				res1 = ( (int)(fillColor) );
            			}
            			else {
HXLINE(  83)				res1 = -1;
            			}
HXDLIN(  83)			res =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,transparent,res1);
            		}
HXLINE(  86)		return res;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataPool_obj,get,return )

void FlxBitmapDataPool_obj::put( ::openfl::display::BitmapData bmd){
            	HX_GC_STACKFRAME(&_hx_pos_f71e48b1d97abdba_93_put)
HXLINE(  94)		if ((::flixel::util::FlxBitmapDataPool_obj::length >= ::flixel::util::FlxBitmapDataPool_obj::maxLength)) {
HXLINE(  96)			 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode last = ::flixel::util::FlxBitmapDataPool_obj::_tail;
HXLINE(  97)			last->bmd->dispose();
HXLINE(  98)			if (::hx::IsNotNull( last->prev )) {
HXLINE( 100)				last->prev->next = null();
HXLINE( 101)				::flixel::util::FlxBitmapDataPool_obj::_tail = last->prev;
            			}
HXLINE( 103)			last = null();
HXLINE( 104)			::flixel::util::FlxBitmapDataPool_obj::length--;
            		}
HXLINE( 107)		 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node =  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode_obj::__alloc( HX_CTX ,bmd,null(),null());
HXLINE( 108)		node->next = ::flixel::util::FlxBitmapDataPool_obj::_head;
HXLINE( 109)		if (::hx::IsNull( ::flixel::util::FlxBitmapDataPool_obj::_head )) {
HXLINE( 111)			::flixel::util::FlxBitmapDataPool_obj::_head = (::flixel::util::FlxBitmapDataPool_obj::_tail = node);
            		}
            		else {
HXLINE( 115)			::flixel::util::FlxBitmapDataPool_obj::_head = node;
HXLINE( 116)			node->next->prev = node;
            		}
HXLINE( 118)		::flixel::util::FlxBitmapDataPool_obj::length++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataPool_obj,put,(void))

void FlxBitmapDataPool_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_f71e48b1d97abdba_125_clear)
HXLINE( 126)		 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = ::flixel::util::FlxBitmapDataPool_obj::_head;
HXLINE( 127)		while(::hx::IsNotNull( node )){
HXLINE( 129)			 ::openfl::display::BitmapData bmd = node->bmd;
HXLINE( 130)			bmd->dispose();
HXLINE( 131)			bmd = null();
HXLINE( 132)			node = node->next;
            		}
HXLINE( 134)		::flixel::util::FlxBitmapDataPool_obj::length = 0;
HXLINE( 135)		::flixel::util::FlxBitmapDataPool_obj::_head = (::flixel::util::FlxBitmapDataPool_obj::_tail = null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxBitmapDataPool_obj,clear,(void))

int FlxBitmapDataPool_obj::set_maxLength(int value){
            	HX_STACKFRAME(&_hx_pos_f71e48b1d97abdba_139_set_maxLength)
HXLINE( 140)		if ((::flixel::util::FlxBitmapDataPool_obj::maxLength != value)) {
HXLINE( 142)			 ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode node = ::flixel::util::FlxBitmapDataPool_obj::_tail;
HXLINE( 143)			while(true){
HXLINE( 143)				bool _hx_tmp;
HXDLIN( 143)				if (::hx::IsNotNull( node )) {
HXLINE( 143)					_hx_tmp = (::flixel::util::FlxBitmapDataPool_obj::length > value);
            				}
            				else {
HXLINE( 143)					_hx_tmp = false;
            				}
HXDLIN( 143)				if (!(_hx_tmp)) {
HXLINE( 143)					goto _hx_goto_5;
            				}
HXLINE( 145)				 ::openfl::display::BitmapData bmd = node->bmd;
HXLINE( 146)				bmd->dispose();
HXLINE( 147)				bmd = null();
HXLINE( 148)				node = node->prev;
HXLINE( 149)				::flixel::util::FlxBitmapDataPool_obj::length--;
            			}
            			_hx_goto_5:;
            		}
HXLINE( 152)		return (::flixel::util::FlxBitmapDataPool_obj::maxLength = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataPool_obj,set_maxLength,return )


FlxBitmapDataPool_obj::FlxBitmapDataPool_obj()
{
}

bool FlxBitmapDataPool_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"put") ) { outValue = put_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_head") ) { outValue = ( _head ); return true; }
		if (HX_FIELD_EQ(inName,"_tail") ) { outValue = ( _tail ); return true; }
		if (HX_FIELD_EQ(inName,"_rect") ) { outValue = ( _rect ); return true; }
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { outValue = ( length ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxLength") ) { outValue = ( maxLength ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { outValue = set_maxLength_dyn(); return true; }
	}
	return false;
}

bool FlxBitmapDataPool_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_head") ) { _head=ioValue.Cast<  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return true; }
		if (HX_FIELD_EQ(inName,"_tail") ) { _tail=ioValue.Cast<  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return true; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_maxLength(ioValue.Cast< int >()) ); else maxLength=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxBitmapDataPool_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxBitmapDataPool_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxBitmapDataPool_obj::maxLength,HX_("maxLength",aa,a6,92,ce)},
	{::hx::fsInt,(void *) &FlxBitmapDataPool_obj::length,HX_("length",e6,94,07,9f)},
	{::hx::fsObject /*  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode */ ,(void *) &FlxBitmapDataPool_obj::_head,HX_("_head",ff,44,1c,f8)},
	{::hx::fsObject /*  ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode */ ,(void *) &FlxBitmapDataPool_obj::_tail,HX_("_tail",6f,d2,07,00)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlxBitmapDataPool_obj::_rect,HX_("_rect",03,69,b8,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxBitmapDataPool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::length,"length");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_head,"_head");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_tail,"_tail");
	HX_MARK_MEMBER_NAME(FlxBitmapDataPool_obj::_rect,"_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBitmapDataPool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::length,"length");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_head,"_head");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_tail,"_tail");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPool_obj::_rect,"_rect");
};

#endif

::hx::Class FlxBitmapDataPool_obj::__mClass;

static ::String FlxBitmapDataPool_obj_sStaticFields[] = {
	HX_("maxLength",aa,a6,92,ce),
	HX_("length",e6,94,07,9f),
	HX_("_head",ff,44,1c,f8),
	HX_("_tail",6f,d2,07,00),
	HX_("_rect",03,69,b8,fe),
	HX_("get",96,80,4e,00),
	HX_("put",cf,62,55,00),
	HX_("clear",8d,71,5b,48),
	HX_("set_maxLength",8d,5c,fc,d4),
	::String(null())
};

void FlxBitmapDataPool_obj::__register()
{
	FlxBitmapDataPool_obj _hx_dummy;
	FlxBitmapDataPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxBitmapDataPool",8d,77,e7,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBitmapDataPool_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBitmapDataPool_obj::__SetStatic;
	__mClass->mMarkFunc = FlxBitmapDataPool_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBitmapDataPool_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxBitmapDataPool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBitmapDataPool_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBitmapDataPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBitmapDataPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBitmapDataPool_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f71e48b1d97abdba_21_boot)
HXDLIN(  21)		maxLength = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f71e48b1d97abdba_26_boot)
HXDLIN(  26)		length = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f71e48b1d97abdba_28_boot)
HXDLIN(  28)		_head = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_f71e48b1d97abdba_29_boot)
HXDLIN(  29)		_tail = null();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f71e48b1d97abdba_31_boot)
HXDLIN(  31)		_rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace util
