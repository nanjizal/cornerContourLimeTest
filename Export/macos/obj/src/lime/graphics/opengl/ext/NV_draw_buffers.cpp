// Generated by Haxe 4.3.0-rc.1+5f599ba
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_draw_buffers
#include <lime/graphics/opengl/ext/NV_draw_buffers.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1e712ceb2a038135_4_new,"lime.graphics.opengl.ext.NV_draw_buffers","new",0xc657799f,"lime.graphics.opengl.ext.NV_draw_buffers.new","lime/graphics/opengl/ext/NV_draw_buffers.hx",4,0x692217d3)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_draw_buffers_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1e712ceb2a038135_4_new)
HXLINE(  38)		this->COLOR_ATTACHMENT15_NV = 36079;
HXLINE(  37)		this->COLOR_ATTACHMENT14_NV = 36078;
HXLINE(  36)		this->COLOR_ATTACHMENT13_NV = 36077;
HXLINE(  35)		this->COLOR_ATTACHMENT12_NV = 36076;
HXLINE(  34)		this->COLOR_ATTACHMENT11_NV = 36075;
HXLINE(  33)		this->COLOR_ATTACHMENT10_NV = 36074;
HXLINE(  32)		this->COLOR_ATTACHMENT9_NV = 36073;
HXLINE(  31)		this->COLOR_ATTACHMENT8_NV = 36072;
HXLINE(  30)		this->COLOR_ATTACHMENT7_NV = 36071;
HXLINE(  29)		this->COLOR_ATTACHMENT6_NV = 36070;
HXLINE(  28)		this->COLOR_ATTACHMENT5_NV = 36069;
HXLINE(  27)		this->COLOR_ATTACHMENT4_NV = 36068;
HXLINE(  26)		this->COLOR_ATTACHMENT3_NV = 36067;
HXLINE(  25)		this->COLOR_ATTACHMENT2_NV = 36066;
HXLINE(  24)		this->COLOR_ATTACHMENT1_NV = 36065;
HXLINE(  23)		this->COLOR_ATTACHMENT0_NV = 36064;
HXLINE(  22)		this->DRAW_BUFFER15_NV = 34868;
HXLINE(  21)		this->DRAW_BUFFER14_NV = 34867;
HXLINE(  20)		this->DRAW_BUFFER13_NV = 34866;
HXLINE(  19)		this->DRAW_BUFFER12_NV = 34865;
HXLINE(  18)		this->DRAW_BUFFER11_NV = 34864;
HXLINE(  17)		this->DRAW_BUFFER10_NV = 34863;
HXLINE(  16)		this->DRAW_BUFFER9_NV = 34862;
HXLINE(  15)		this->DRAW_BUFFER8_NV = 34861;
HXLINE(  14)		this->DRAW_BUFFER7_NV = 34860;
HXLINE(  13)		this->DRAW_BUFFER6_NV = 34859;
HXLINE(  12)		this->DRAW_BUFFER5_NV = 34858;
HXLINE(  11)		this->DRAW_BUFFER4_NV = 34857;
HXLINE(  10)		this->DRAW_BUFFER3_NV = 34856;
HXLINE(   9)		this->DRAW_BUFFER2_NV = 34855;
HXLINE(   8)		this->DRAW_BUFFER1_NV = 34854;
HXLINE(   7)		this->DRAW_BUFFER0_NV = 34853;
HXLINE(   6)		this->MAX_DRAW_BUFFERS_NV = 34852;
            	}

Dynamic NV_draw_buffers_obj::__CreateEmpty() { return new NV_draw_buffers_obj; }

void *NV_draw_buffers_obj::_hx_vtable = 0;

Dynamic NV_draw_buffers_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NV_draw_buffers_obj > _hx_result = new NV_draw_buffers_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_draw_buffers_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x752e9bfd;
}


NV_draw_buffers_obj::NV_draw_buffers_obj()
{
}

::hx::Val NV_draw_buffers_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER0_NV") ) { return ::hx::Val( DRAW_BUFFER0_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER1_NV") ) { return ::hx::Val( DRAW_BUFFER1_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER2_NV") ) { return ::hx::Val( DRAW_BUFFER2_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER3_NV") ) { return ::hx::Val( DRAW_BUFFER3_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER4_NV") ) { return ::hx::Val( DRAW_BUFFER4_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER5_NV") ) { return ::hx::Val( DRAW_BUFFER5_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER6_NV") ) { return ::hx::Val( DRAW_BUFFER6_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER7_NV") ) { return ::hx::Val( DRAW_BUFFER7_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER8_NV") ) { return ::hx::Val( DRAW_BUFFER8_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER9_NV") ) { return ::hx::Val( DRAW_BUFFER9_NV ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER10_NV") ) { return ::hx::Val( DRAW_BUFFER10_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER11_NV") ) { return ::hx::Val( DRAW_BUFFER11_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER12_NV") ) { return ::hx::Val( DRAW_BUFFER12_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER13_NV") ) { return ::hx::Val( DRAW_BUFFER13_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER14_NV") ) { return ::hx::Val( DRAW_BUFFER14_NV ); }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER15_NV") ) { return ::hx::Val( DRAW_BUFFER15_NV ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MAX_DRAW_BUFFERS_NV") ) { return ::hx::Val( MAX_DRAW_BUFFERS_NV ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0_NV") ) { return ::hx::Val( COLOR_ATTACHMENT0_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1_NV") ) { return ::hx::Val( COLOR_ATTACHMENT1_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2_NV") ) { return ::hx::Val( COLOR_ATTACHMENT2_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3_NV") ) { return ::hx::Val( COLOR_ATTACHMENT3_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4_NV") ) { return ::hx::Val( COLOR_ATTACHMENT4_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5_NV") ) { return ::hx::Val( COLOR_ATTACHMENT5_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6_NV") ) { return ::hx::Val( COLOR_ATTACHMENT6_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7_NV") ) { return ::hx::Val( COLOR_ATTACHMENT7_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8_NV") ) { return ::hx::Val( COLOR_ATTACHMENT8_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9_NV") ) { return ::hx::Val( COLOR_ATTACHMENT9_NV ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10_NV") ) { return ::hx::Val( COLOR_ATTACHMENT10_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11_NV") ) { return ::hx::Val( COLOR_ATTACHMENT11_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12_NV") ) { return ::hx::Val( COLOR_ATTACHMENT12_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13_NV") ) { return ::hx::Val( COLOR_ATTACHMENT13_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14_NV") ) { return ::hx::Val( COLOR_ATTACHMENT14_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15_NV") ) { return ::hx::Val( COLOR_ATTACHMENT15_NV ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NV_draw_buffers_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER0_NV") ) { DRAW_BUFFER0_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER1_NV") ) { DRAW_BUFFER1_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER2_NV") ) { DRAW_BUFFER2_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER3_NV") ) { DRAW_BUFFER3_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER4_NV") ) { DRAW_BUFFER4_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER5_NV") ) { DRAW_BUFFER5_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER6_NV") ) { DRAW_BUFFER6_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER7_NV") ) { DRAW_BUFFER7_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER8_NV") ) { DRAW_BUFFER8_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER9_NV") ) { DRAW_BUFFER9_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER10_NV") ) { DRAW_BUFFER10_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER11_NV") ) { DRAW_BUFFER11_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER12_NV") ) { DRAW_BUFFER12_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER13_NV") ) { DRAW_BUFFER13_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER14_NV") ) { DRAW_BUFFER14_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER15_NV") ) { DRAW_BUFFER15_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MAX_DRAW_BUFFERS_NV") ) { MAX_DRAW_BUFFERS_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0_NV") ) { COLOR_ATTACHMENT0_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1_NV") ) { COLOR_ATTACHMENT1_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2_NV") ) { COLOR_ATTACHMENT2_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3_NV") ) { COLOR_ATTACHMENT3_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4_NV") ) { COLOR_ATTACHMENT4_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5_NV") ) { COLOR_ATTACHMENT5_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6_NV") ) { COLOR_ATTACHMENT6_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7_NV") ) { COLOR_ATTACHMENT7_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8_NV") ) { COLOR_ATTACHMENT8_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9_NV") ) { COLOR_ATTACHMENT9_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10_NV") ) { COLOR_ATTACHMENT10_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11_NV") ) { COLOR_ATTACHMENT11_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12_NV") ) { COLOR_ATTACHMENT12_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13_NV") ) { COLOR_ATTACHMENT13_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14_NV") ) { COLOR_ATTACHMENT14_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15_NV") ) { COLOR_ATTACHMENT15_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_draw_buffers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MAX_DRAW_BUFFERS_NV",94,39,76,92));
	outFields->push(HX_("DRAW_BUFFER0_NV",d2,90,55,5c));
	outFields->push(HX_("DRAW_BUFFER1_NV",71,c7,fe,5c));
	outFields->push(HX_("DRAW_BUFFER2_NV",10,fe,a7,5d));
	outFields->push(HX_("DRAW_BUFFER3_NV",af,34,51,5e));
	outFields->push(HX_("DRAW_BUFFER4_NV",4e,6b,fa,5e));
	outFields->push(HX_("DRAW_BUFFER5_NV",ed,a1,a3,5f));
	outFields->push(HX_("DRAW_BUFFER6_NV",8c,d8,4c,60));
	outFields->push(HX_("DRAW_BUFFER7_NV",2b,0f,f6,60));
	outFields->push(HX_("DRAW_BUFFER8_NV",ca,45,9f,61));
	outFields->push(HX_("DRAW_BUFFER9_NV",69,7c,48,62));
	outFields->push(HX_("DRAW_BUFFER10_NV",ed,93,eb,e2));
	outFields->push(HX_("DRAW_BUFFER11_NV",8c,ca,94,e3));
	outFields->push(HX_("DRAW_BUFFER12_NV",2b,01,3e,e4));
	outFields->push(HX_("DRAW_BUFFER13_NV",ca,37,e7,e4));
	outFields->push(HX_("DRAW_BUFFER14_NV",69,6e,90,e5));
	outFields->push(HX_("DRAW_BUFFER15_NV",08,a5,39,e6));
	outFields->push(HX_("COLOR_ATTACHMENT0_NV",56,c4,e4,ab));
	outFields->push(HX_("COLOR_ATTACHMENT1_NV",f5,fa,8d,ac));
	outFields->push(HX_("COLOR_ATTACHMENT2_NV",94,31,37,ad));
	outFields->push(HX_("COLOR_ATTACHMENT3_NV",33,68,e0,ad));
	outFields->push(HX_("COLOR_ATTACHMENT4_NV",d2,9e,89,ae));
	outFields->push(HX_("COLOR_ATTACHMENT5_NV",71,d5,32,af));
	outFields->push(HX_("COLOR_ATTACHMENT6_NV",10,0c,dc,af));
	outFields->push(HX_("COLOR_ATTACHMENT7_NV",af,42,85,b0));
	outFields->push(HX_("COLOR_ATTACHMENT8_NV",4e,79,2e,b1));
	outFields->push(HX_("COLOR_ATTACHMENT9_NV",ed,af,d7,b1));
	outFields->push(HX_("COLOR_ATTACHMENT10_NV",e9,73,a9,30));
	outFields->push(HX_("COLOR_ATTACHMENT11_NV",88,aa,52,31));
	outFields->push(HX_("COLOR_ATTACHMENT12_NV",27,e1,fb,31));
	outFields->push(HX_("COLOR_ATTACHMENT13_NV",c6,17,a5,32));
	outFields->push(HX_("COLOR_ATTACHMENT14_NV",65,4e,4e,33));
	outFields->push(HX_("COLOR_ATTACHMENT15_NV",04,85,f7,33));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NV_draw_buffers_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,MAX_DRAW_BUFFERS_NV),HX_("MAX_DRAW_BUFFERS_NV",94,39,76,92)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER0_NV),HX_("DRAW_BUFFER0_NV",d2,90,55,5c)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER1_NV),HX_("DRAW_BUFFER1_NV",71,c7,fe,5c)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER2_NV),HX_("DRAW_BUFFER2_NV",10,fe,a7,5d)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER3_NV),HX_("DRAW_BUFFER3_NV",af,34,51,5e)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER4_NV),HX_("DRAW_BUFFER4_NV",4e,6b,fa,5e)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER5_NV),HX_("DRAW_BUFFER5_NV",ed,a1,a3,5f)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER6_NV),HX_("DRAW_BUFFER6_NV",8c,d8,4c,60)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER7_NV),HX_("DRAW_BUFFER7_NV",2b,0f,f6,60)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER8_NV),HX_("DRAW_BUFFER8_NV",ca,45,9f,61)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER9_NV),HX_("DRAW_BUFFER9_NV",69,7c,48,62)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER10_NV),HX_("DRAW_BUFFER10_NV",ed,93,eb,e2)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER11_NV),HX_("DRAW_BUFFER11_NV",8c,ca,94,e3)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER12_NV),HX_("DRAW_BUFFER12_NV",2b,01,3e,e4)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER13_NV),HX_("DRAW_BUFFER13_NV",ca,37,e7,e4)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER14_NV),HX_("DRAW_BUFFER14_NV",69,6e,90,e5)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,DRAW_BUFFER15_NV),HX_("DRAW_BUFFER15_NV",08,a5,39,e6)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT0_NV),HX_("COLOR_ATTACHMENT0_NV",56,c4,e4,ab)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT1_NV),HX_("COLOR_ATTACHMENT1_NV",f5,fa,8d,ac)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT2_NV),HX_("COLOR_ATTACHMENT2_NV",94,31,37,ad)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT3_NV),HX_("COLOR_ATTACHMENT3_NV",33,68,e0,ad)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT4_NV),HX_("COLOR_ATTACHMENT4_NV",d2,9e,89,ae)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT5_NV),HX_("COLOR_ATTACHMENT5_NV",71,d5,32,af)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT6_NV),HX_("COLOR_ATTACHMENT6_NV",10,0c,dc,af)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT7_NV),HX_("COLOR_ATTACHMENT7_NV",af,42,85,b0)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT8_NV),HX_("COLOR_ATTACHMENT8_NV",4e,79,2e,b1)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT9_NV),HX_("COLOR_ATTACHMENT9_NV",ed,af,d7,b1)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT10_NV),HX_("COLOR_ATTACHMENT10_NV",e9,73,a9,30)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT11_NV),HX_("COLOR_ATTACHMENT11_NV",88,aa,52,31)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT12_NV),HX_("COLOR_ATTACHMENT12_NV",27,e1,fb,31)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT13_NV),HX_("COLOR_ATTACHMENT13_NV",c6,17,a5,32)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT14_NV),HX_("COLOR_ATTACHMENT14_NV",65,4e,4e,33)},
	{::hx::fsInt,(int)offsetof(NV_draw_buffers_obj,COLOR_ATTACHMENT15_NV),HX_("COLOR_ATTACHMENT15_NV",04,85,f7,33)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NV_draw_buffers_obj_sStaticStorageInfo = 0;
#endif

static ::String NV_draw_buffers_obj_sMemberFields[] = {
	HX_("MAX_DRAW_BUFFERS_NV",94,39,76,92),
	HX_("DRAW_BUFFER0_NV",d2,90,55,5c),
	HX_("DRAW_BUFFER1_NV",71,c7,fe,5c),
	HX_("DRAW_BUFFER2_NV",10,fe,a7,5d),
	HX_("DRAW_BUFFER3_NV",af,34,51,5e),
	HX_("DRAW_BUFFER4_NV",4e,6b,fa,5e),
	HX_("DRAW_BUFFER5_NV",ed,a1,a3,5f),
	HX_("DRAW_BUFFER6_NV",8c,d8,4c,60),
	HX_("DRAW_BUFFER7_NV",2b,0f,f6,60),
	HX_("DRAW_BUFFER8_NV",ca,45,9f,61),
	HX_("DRAW_BUFFER9_NV",69,7c,48,62),
	HX_("DRAW_BUFFER10_NV",ed,93,eb,e2),
	HX_("DRAW_BUFFER11_NV",8c,ca,94,e3),
	HX_("DRAW_BUFFER12_NV",2b,01,3e,e4),
	HX_("DRAW_BUFFER13_NV",ca,37,e7,e4),
	HX_("DRAW_BUFFER14_NV",69,6e,90,e5),
	HX_("DRAW_BUFFER15_NV",08,a5,39,e6),
	HX_("COLOR_ATTACHMENT0_NV",56,c4,e4,ab),
	HX_("COLOR_ATTACHMENT1_NV",f5,fa,8d,ac),
	HX_("COLOR_ATTACHMENT2_NV",94,31,37,ad),
	HX_("COLOR_ATTACHMENT3_NV",33,68,e0,ad),
	HX_("COLOR_ATTACHMENT4_NV",d2,9e,89,ae),
	HX_("COLOR_ATTACHMENT5_NV",71,d5,32,af),
	HX_("COLOR_ATTACHMENT6_NV",10,0c,dc,af),
	HX_("COLOR_ATTACHMENT7_NV",af,42,85,b0),
	HX_("COLOR_ATTACHMENT8_NV",4e,79,2e,b1),
	HX_("COLOR_ATTACHMENT9_NV",ed,af,d7,b1),
	HX_("COLOR_ATTACHMENT10_NV",e9,73,a9,30),
	HX_("COLOR_ATTACHMENT11_NV",88,aa,52,31),
	HX_("COLOR_ATTACHMENT12_NV",27,e1,fb,31),
	HX_("COLOR_ATTACHMENT13_NV",c6,17,a5,32),
	HX_("COLOR_ATTACHMENT14_NV",65,4e,4e,33),
	HX_("COLOR_ATTACHMENT15_NV",04,85,f7,33),
	::String(null()) };

::hx::Class NV_draw_buffers_obj::__mClass;

void NV_draw_buffers_obj::__register()
{
	NV_draw_buffers_obj _hx_dummy;
	NV_draw_buffers_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_draw_buffers",2d,be,5c,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NV_draw_buffers_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NV_draw_buffers_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_draw_buffers_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_draw_buffers_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
