// Generated by Haxe 4.3.0-rc.1+5f599ba
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_justPath_EllipseArc
#include <justPath/EllipseArc.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c93b4ec657c558bf_24_new,"justPath.EllipseArc","new",0xca7ecd03,"justPath.EllipseArc.new","justPath/EllipseArc.hx",24,0x3416572c)
HX_LOCAL_STACK_FRAME(_hx_pos_c93b4ec657c558bf_27_alphaPoint,"justPath.EllipseArc","alphaPoint",0x29c035cf,"justPath.EllipseArc.alphaPoint","justPath/EllipseArc.hx",27,0x3416572c)
HX_LOCAL_STACK_FRAME(_hx_pos_c93b4ec657c558bf_30_omegaPoint,"justPath.EllipseArc","omegaPoint",0xe203ceec,"justPath.EllipseArc.omegaPoint","justPath/EllipseArc.hx",30,0x3416572c)
HX_LOCAL_STACK_FRAME(_hx_pos_c93b4ec657c558bf_33_lineRender,"justPath.EllipseArc","lineRender",0x1c5c9427,"justPath.EllipseArc.lineRender","justPath/EllipseArc.hx",33,0x3416572c)
HX_LOCAL_STACK_FRAME(_hx_pos_c93b4ec657c558bf_51_calculatePoint,"justPath.EllipseArc","calculatePoint",0x281e8d47,"justPath.EllipseArc.calculatePoint","justPath/EllipseArc.hx",51,0x3416572c)
namespace justPath{

void EllipseArc_obj::__construct( ::Dynamic arc_){
            	HX_STACKFRAME(&_hx_pos_c93b4ec657c558bf_24_new)
HXDLIN(  24)		this->arc = arc_;
            	}

Dynamic EllipseArc_obj::__CreateEmpty() { return new EllipseArc_obj; }

void *EllipseArc_obj::_hx_vtable = 0;

Dynamic EllipseArc_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EllipseArc_obj > _hx_result = new EllipseArc_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EllipseArc_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x062e2e19;
}

void EllipseArc_obj::alphaPoint(){
            	HX_STACKFRAME(&_hx_pos_c93b4ec657c558bf_27_alphaPoint)
HXDLIN(  27)		Float theta = ( (Float)(this->arc->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) );
HXDLIN(  27)		Float px = ( (Float)((this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("rx",c6,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::cos(theta)))) );
HXDLIN(  27)		Float py = ( (Float)((this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("ry",c7,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::sin(theta)))) );
HXDLIN(  27)		px = (px - ( (Float)(this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  27)		py = (py - ( (Float)(this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  27)		Float dx = px;
HXDLIN(  27)		Float dy = py;
HXDLIN(  27)		px = ((dx * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )) - (dy * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )));
HXDLIN(  27)		py = ((dx * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )) + (dy * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )));
HXDLIN(  27)		this->x = ( (Float)((px + this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic))) );
HXDLIN(  27)		this->y = ( (Float)((py + this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(EllipseArc_obj,alphaPoint,(void))

void EllipseArc_obj::omegaPoint(){
            	HX_STACKFRAME(&_hx_pos_c93b4ec657c558bf_30_omegaPoint)
HXDLIN(  30)		Float theta = ( (Float)(this->arc->__Field(HX_("omega",61,a3,d3,31),::hx::paccDynamic)) );
HXDLIN(  30)		Float px = ( (Float)((this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("rx",c6,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::cos(theta)))) );
HXDLIN(  30)		Float py = ( (Float)((this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("ry",c7,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::sin(theta)))) );
HXDLIN(  30)		px = (px - ( (Float)(this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  30)		py = (py - ( (Float)(this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  30)		Float dx = px;
HXDLIN(  30)		Float dy = py;
HXDLIN(  30)		px = ((dx * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )) - (dy * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )));
HXDLIN(  30)		py = ((dx * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )) + (dy * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )));
HXDLIN(  30)		this->x = ( (Float)((px + this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic))) );
HXDLIN(  30)		this->y = ( (Float)((py + this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(EllipseArc_obj,omegaPoint,(void))

void EllipseArc_obj::lineRender( ::Dynamic moveTo, ::Dynamic lineTo,Float dA, ::Dynamic __o_renderFirst){
            		 ::Dynamic renderFirst = __o_renderFirst;
            		if (::hx::IsNull(__o_renderFirst)) renderFirst = true;
            	HX_STACKFRAME(&_hx_pos_c93b4ec657c558bf_33_lineRender)
HXLINE(  34)		int sign;
HXDLIN(  34)		if (::hx::IsGreater( this->arc->__Field(HX_("delta",f8,e7,26,d7),::hx::paccDynamic),0 )) {
HXLINE(  34)			sign = 1;
            		}
            		else {
HXLINE(  34)			sign = -1;
            		}
HXLINE(  35)		int totalSteps = ::Math_obj::ceil((::Math_obj::abs(( (Float)(this->arc->__Field(HX_("delta",f8,e7,26,d7),::hx::paccDynamic)) )) / dA));
HXLINE(  36)		Float theta = ( (Float)(this->arc->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) );
HXLINE(  37)		Float step = (( (Float)(this->arc->__Field(HX_("delta",f8,e7,26,d7),::hx::paccDynamic)) ) / ( (Float)(totalSteps) ));
HXLINE(  38)		if (( (bool)(renderFirst) )) {
HXLINE(  39)			{
HXLINE(  39)				Float px = ( (Float)((this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("rx",c6,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::cos(theta)))) );
HXDLIN(  39)				Float py = ( (Float)((this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("ry",c7,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::sin(theta)))) );
HXDLIN(  39)				px = (px - ( (Float)(this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  39)				py = (py - ( (Float)(this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  39)				Float dx = px;
HXDLIN(  39)				Float dy = py;
HXDLIN(  39)				px = ((dx * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )) - (dy * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )));
HXDLIN(  39)				py = ((dx * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )) + (dy * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )));
HXDLIN(  39)				this->x = ( (Float)((px + this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic))) );
HXDLIN(  39)				this->y = ( (Float)((py + this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic))) );
            			}
HXLINE(  40)			moveTo(this->x,this->y);
            		}
HXLINE(  42)		{
HXLINE(  42)			int _g = 1;
HXDLIN(  42)			int _g1 = totalSteps;
HXDLIN(  42)			while((_g < _g1)){
HXLINE(  42)				_g = (_g + 1);
HXDLIN(  42)				int i = (_g - 1);
HXLINE(  43)				theta = (theta + step);
HXLINE(  44)				{
HXLINE(  44)					Float px = ( (Float)((this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("rx",c6,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::cos(theta)))) );
HXDLIN(  44)					Float py = ( (Float)((this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("ry",c7,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::sin(theta)))) );
HXDLIN(  44)					px = (px - ( (Float)(this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  44)					py = (py - ( (Float)(this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  44)					Float dx = px;
HXDLIN(  44)					Float dy = py;
HXDLIN(  44)					px = ((dx * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )) - (dy * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )));
HXDLIN(  44)					py = ((dx * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )) + (dy * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )));
HXDLIN(  44)					this->x = ( (Float)((px + this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic))) );
HXDLIN(  44)					this->y = ( (Float)((py + this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic))) );
            				}
HXLINE(  45)				lineTo(this->x,this->y);
            			}
            		}
HXLINE(  47)		{
HXLINE(  47)			Float theta1 = ( (Float)(this->arc->__Field(HX_("omega",61,a3,d3,31),::hx::paccDynamic)) );
HXDLIN(  47)			Float px = ( (Float)((this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("rx",c6,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::cos(theta1)))) );
HXDLIN(  47)			Float py = ( (Float)((this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("ry",c7,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::sin(theta1)))) );
HXDLIN(  47)			px = (px - ( (Float)(this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  47)			py = (py - ( (Float)(this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic)) ));
HXDLIN(  47)			Float dx = px;
HXDLIN(  47)			Float dy = py;
HXDLIN(  47)			px = ((dx * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )) - (dy * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )));
HXDLIN(  47)			py = ((dx * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )) + (dy * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )));
HXDLIN(  47)			this->x = ( (Float)((px + this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic))) );
HXDLIN(  47)			this->y = ( (Float)((py + this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic))) );
            		}
HXLINE(  48)		lineTo(this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC4(EllipseArc_obj,lineRender,(void))

void EllipseArc_obj::calculatePoint(Float theta){
            	HX_STACKFRAME(&_hx_pos_c93b4ec657c558bf_51_calculatePoint)
HXLINE(  52)		Float px = ( (Float)((this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("rx",c6,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::cos(theta)))) );
HXLINE(  53)		Float py = ( (Float)((this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic) + (( (Float)(this->arc->__Field(HX_("ry",c7,63,00,00),::hx::paccDynamic)) ) * ::Math_obj::sin(theta)))) );
HXLINE(  54)		px = (px - ( (Float)(this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic)) ));
HXLINE(  55)		py = (py - ( (Float)(this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic)) ));
HXLINE(  56)		Float dx = px;
HXLINE(  57)		Float dy = py;
HXLINE(  58)		px = ((dx * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )) - (dy * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )));
HXLINE(  59)		py = ((dx * ( (Float)(this->arc->__Field(HX_("phiSin",27,7c,4b,ef),::hx::paccDynamic)) )) + (dy * ( (Float)(this->arc->__Field(HX_("phiCos",56,5d,3f,ef),::hx::paccDynamic)) )));
HXLINE(  60)		this->x = ( (Float)((px + this->arc->__Field(HX_("cx",b5,56,00,00),::hx::paccDynamic))) );
HXLINE(  61)		this->y = ( (Float)((py + this->arc->__Field(HX_("cy",b6,56,00,00),::hx::paccDynamic))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(EllipseArc_obj,calculatePoint,(void))


::hx::ObjectPtr< EllipseArc_obj > EllipseArc_obj::__new( ::Dynamic arc_) {
	::hx::ObjectPtr< EllipseArc_obj > __this = new EllipseArc_obj();
	__this->__construct(arc_);
	return __this;
}

::hx::ObjectPtr< EllipseArc_obj > EllipseArc_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic arc_) {
	EllipseArc_obj *__this = (EllipseArc_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EllipseArc_obj), true, "justPath.EllipseArc"));
	*(void **)__this = EllipseArc_obj::_hx_vtable;
	__this->__construct(arc_);
	return __this;
}

EllipseArc_obj::EllipseArc_obj()
{
}

void EllipseArc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EllipseArc);
	HX_MARK_MEMBER_NAME(arc,"arc");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void EllipseArc_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(arc,"arc");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

::hx::Val EllipseArc_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"arc") ) { return ::hx::Val( arc ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaPoint") ) { return ::hx::Val( alphaPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"omegaPoint") ) { return ::hx::Val( omegaPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineRender") ) { return ::hx::Val( lineRender_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"calculatePoint") ) { return ::hx::Val( calculatePoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EllipseArc_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"arc") ) { arc=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EllipseArc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("arc",52,fe,49,00));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EllipseArc_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(EllipseArc_obj,arc),HX_("arc",52,fe,49,00)},
	{::hx::fsFloat,(int)offsetof(EllipseArc_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(EllipseArc_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EllipseArc_obj_sStaticStorageInfo = 0;
#endif

static ::String EllipseArc_obj_sMemberFields[] = {
	HX_("arc",52,fe,49,00),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("alphaPoint",12,08,35,e7),
	HX_("omegaPoint",2f,a1,78,9f),
	HX_("lineRender",6a,66,d1,d9),
	HX_("calculatePoint",0a,3d,3d,69),
	::String(null()) };

::hx::Class EllipseArc_obj::__mClass;

void EllipseArc_obj::__register()
{
	EllipseArc_obj _hx_dummy;
	EllipseArc_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("justPath.EllipseArc",91,8f,35,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EllipseArc_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EllipseArc_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EllipseArc_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EllipseArc_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace justPath
