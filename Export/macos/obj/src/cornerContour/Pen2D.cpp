// Generated by Haxe 4.3.0-rc.1+5f599ba
#include <hxcpp.h>

#ifndef INCLUDED_cornerContour_IPen
#include <cornerContour/IPen.h>
#endif
#ifndef INCLUDED_cornerContour_Pen2D
#include <cornerContour/Pen2D.h>
#endif
#ifndef INCLUDED_cornerContour_io__Array2DTriangles_Array2DTriangles_Impl_
#include <cornerContour/io/_Array2DTriangles/Array2DTriangles_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01c4c8537339a123_3_new,"cornerContour.Pen2D","new",0x35f0a414,"cornerContour.Pen2D.new","cornerContour/Pen2D.hx",3,0x43afe2dd)
HX_LOCAL_STACK_FRAME(_hx_pos_01c4c8537339a123_10_get_pos,"cornerContour.Pen2D","get_pos",0x8aece3df,"cornerContour.Pen2D.get_pos","cornerContour/Pen2D.hx",10,0x43afe2dd)
HX_LOCAL_STACK_FRAME(_hx_pos_01c4c8537339a123_13_set_pos,"cornerContour.Pen2D","set_pos",0x7dee74eb,"cornerContour.Pen2D.set_pos","cornerContour/Pen2D.hx",13,0x43afe2dd)
HX_LOCAL_STACK_FRAME(_hx_pos_01c4c8537339a123_21_triangle2DFill,"cornerContour.Pen2D","triangle2DFill",0x27f09d09,"cornerContour.Pen2D.triangle2DFill","cornerContour/Pen2D.hx",21,0x43afe2dd)
HX_LOCAL_STACK_FRAME(_hx_pos_01c4c8537339a123_29_applyFill,"cornerContour.Pen2D","applyFill",0xee1f61c5,"cornerContour.Pen2D.applyFill","cornerContour/Pen2D.hx",29,0x43afe2dd)
namespace cornerContour{

void Pen2D_obj::__construct(int col){
            	HX_STACKFRAME(&_hx_pos_01c4c8537339a123_3_new)
HXLINE(   4)		::Array< Float > this1 = ::Array_obj< Float >::__new();
HXDLIN(   4)		this1[0] = ((Float)0.);
HXDLIN(   4)		::Array< Float > this2 = this1;
HXDLIN(   4)		::Array< Float > this3 = this2;
HXDLIN(   4)		::Array< Float > this4 = this3;
HXDLIN(   4)		this->arr = this4;
HXLINE(   6)		this->currentColor = col;
            	}

Dynamic Pen2D_obj::__CreateEmpty() { return new Pen2D_obj; }

void *Pen2D_obj::_hx_vtable = 0;

Dynamic Pen2D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pen2D_obj > _hx_result = new Pen2D_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Pen2D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02f9104a;
}

static ::cornerContour::IPen_obj _hx_cornerContour_Pen2D__hx_cornerContour_IPen= {
	( Float (::hx::Object::*)())&::cornerContour::Pen2D_obj::get_pos,
	( Float (::hx::Object::*)(Float))&::cornerContour::Pen2D_obj::set_pos,
	( int (::hx::Object::*)(Float,Float,Float,Float,Float,Float, ::Dynamic))&::cornerContour::Pen2D_obj::triangle2DFill,
};

void *Pen2D_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x77874b15: return &_hx_cornerContour_Pen2D__hx_cornerContour_IPen;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float Pen2D_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_01c4c8537339a123_10_get_pos)
HXDLIN(  10)		return this->arr->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen2D_obj,get_pos,return )

Float Pen2D_obj::set_pos(Float val){
            	HX_STACKFRAME(&_hx_pos_01c4c8537339a123_13_set_pos)
HXLINE(  14)		this->arr[0] = val;
HXLINE(  15)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen2D_obj,set_pos,return )

int Pen2D_obj::triangle2DFill(Float ax,Float ay,Float bx,Float by,Float cx,Float cy, ::Dynamic color){
            	HX_STACKFRAME(&_hx_pos_01c4c8537339a123_21_triangle2DFill)
HXLINE(  22)		bool _hx_tmp;
HXDLIN(  22)		if (::hx::IsNotNull( color )) {
HXLINE(  22)			_hx_tmp = ::hx::IsEq( color,-1 );
            		}
            		else {
HXLINE(  22)			_hx_tmp = true;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  22)			color = this->currentColor;
            		}
HXLINE(  23)		{
HXLINE(  23)			::Array< Float > this1 = this->arr;
HXDLIN(  23)			::cornerContour::io::_Array2DTriangles::Array2DTriangles_Impl__obj::triangle(this1,ax,ay,bx,by,cx,cy);
HXDLIN(  23)			if (::hx::IsNull( color )) {
HXLINE(  23)				::cornerContour::io::_Array2DTriangles::Array2DTriangles_Impl__obj::set_colorInt(this1,16711680);
            			}
            			else {
HXLINE(  23)				::cornerContour::io::_Array2DTriangles::Array2DTriangles_Impl__obj::set_colorInt(this1,( (int)(color) ));
            			}
            		}
HXLINE(  24)		{
HXLINE(  24)			Float pos_ = (this->arr->__get(0) + 1);
HXDLIN(  24)			this->arr[0] = pos_;
            		}
HXLINE(  25)		return 1;
            	}


HX_DEFINE_DYNAMIC_FUNC7(Pen2D_obj,triangle2DFill,return )

int Pen2D_obj::applyFill( ::Dynamic fill2D){
            	HX_STACKFRAME(&_hx_pos_01c4c8537339a123_29_applyFill)
HXDLIN(  29)		return ::cornerContour::io::_Array2DTriangles::Array2DTriangles_Impl__obj::applyFill(this->arr,fill2D);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen2D_obj,applyFill,return )


::hx::ObjectPtr< Pen2D_obj > Pen2D_obj::__new(int col) {
	::hx::ObjectPtr< Pen2D_obj > __this = new Pen2D_obj();
	__this->__construct(col);
	return __this;
}

::hx::ObjectPtr< Pen2D_obj > Pen2D_obj::__alloc(::hx::Ctx *_hx_ctx,int col) {
	Pen2D_obj *__this = (Pen2D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pen2D_obj), true, "cornerContour.Pen2D"));
	*(void **)__this = Pen2D_obj::_hx_vtable;
	__this->__construct(col);
	return __this;
}

Pen2D_obj::Pen2D_obj()
{
}

void Pen2D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pen2D);
	HX_MARK_MEMBER_NAME(arr,"arr");
	HX_MARK_MEMBER_NAME(currentColor,"currentColor");
	HX_MARK_END_CLASS();
}

void Pen2D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(arr,"arr");
	HX_VISIT_MEMBER_NAME(currentColor,"currentColor");
}

::hx::Val Pen2D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arr") ) { return ::hx::Val( arr ); }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pos() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return ::hx::Val( get_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return ::hx::Val( set_pos_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"applyFill") ) { return ::hx::Val( applyFill_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentColor") ) { return ::hx::Val( currentColor ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"triangle2DFill") ) { return ::hx::Val( triangle2DFill_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Pen2D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arr") ) { arr=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pos(inValue.Cast< Float >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentColor") ) { currentColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pen2D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("arr",61,fe,49,00));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("currentColor",6a,56,68,91));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Pen2D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Pen2D_obj,arr),HX_("arr",61,fe,49,00)},
	{::hx::fsInt,(int)offsetof(Pen2D_obj,currentColor),HX_("currentColor",6a,56,68,91)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Pen2D_obj_sStaticStorageInfo = 0;
#endif

static ::String Pen2D_obj_sMemberFields[] = {
	HX_("arr",61,fe,49,00),
	HX_("get_pos",2b,26,ca,26),
	HX_("set_pos",37,b7,cb,19),
	HX_("triangle2DFill",3d,7c,19,6e),
	HX_("applyFill",11,cf,8a,2d),
	HX_("currentColor",6a,56,68,91),
	::String(null()) };

::hx::Class Pen2D_obj::__mClass;

void Pen2D_obj::__register()
{
	Pen2D_obj _hx_dummy;
	Pen2D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cornerContour.Pen2D",22,4a,a8,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Pen2D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Pen2D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pen2D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pen2D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cornerContour
