// Generated by Haxe 4.3.0-rc.1+5f599ba
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object
#include <lime/graphics/opengl/ext/OES_vertex_array_object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ff26fc69b0514c16_7_new,"lime.graphics.opengl.ext.OES_vertex_array_object","new",0x554cbf6e,"lime.graphics.opengl.ext.OES_vertex_array_object.new","lime/graphics/opengl/ext/OES_vertex_array_object.hx",7,0xe371b2e4)
HX_LOCAL_STACK_FRAME(_hx_pos_ff26fc69b0514c16_13_createVertexArrayOES,"lime.graphics.opengl.ext.OES_vertex_array_object","createVertexArrayOES",0xc2081f56,"lime.graphics.opengl.ext.OES_vertex_array_object.createVertexArrayOES","lime/graphics/opengl/ext/OES_vertex_array_object.hx",13,0xe371b2e4)
HX_LOCAL_STACK_FRAME(_hx_pos_ff26fc69b0514c16_16_deleteVertexArrayOES,"lime.graphics.opengl.ext.OES_vertex_array_object","deleteVertexArrayOES",0x734d8cc5,"lime.graphics.opengl.ext.OES_vertex_array_object.deleteVertexArrayOES","lime/graphics/opengl/ext/OES_vertex_array_object.hx",16,0xe371b2e4)
HX_LOCAL_STACK_FRAME(_hx_pos_ff26fc69b0514c16_20_isVertexArrayOES,"lime.graphics.opengl.ext.OES_vertex_array_object","isVertexArrayOES",0x250197c4,"lime.graphics.opengl.ext.OES_vertex_array_object.isVertexArrayOES","lime/graphics/opengl/ext/OES_vertex_array_object.hx",20,0xe371b2e4)
HX_LOCAL_STACK_FRAME(_hx_pos_ff26fc69b0514c16_23_bindVertexArrayOES,"lime.graphics.opengl.ext.OES_vertex_array_object","bindVertexArrayOES",0x852c8d57,"lime.graphics.opengl.ext.OES_vertex_array_object.bindVertexArrayOES","lime/graphics/opengl/ext/OES_vertex_array_object.hx",23,0xe371b2e4)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_vertex_array_object_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ff26fc69b0514c16_7_new)
HXDLIN(   7)		this->VERTEX_ARRAY_BINDING_OES = 34229;
            	}

Dynamic OES_vertex_array_object_obj::__CreateEmpty() { return new OES_vertex_array_object_obj; }

void *OES_vertex_array_object_obj::_hx_vtable = 0;

Dynamic OES_vertex_array_object_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_vertex_array_object_obj > _hx_result = new OES_vertex_array_object_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_vertex_array_object_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44b1832c;
}

 ::Dynamic OES_vertex_array_object_obj::createVertexArrayOES(){
            	HX_STACKFRAME(&_hx_pos_ff26fc69b0514c16_13_createVertexArrayOES)
HXDLIN(  13)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OES_vertex_array_object_obj,createVertexArrayOES,return )

void OES_vertex_array_object_obj::deleteVertexArrayOES( ::Dynamic arrayObject){
            	HX_STACKFRAME(&_hx_pos_ff26fc69b0514c16_16_deleteVertexArrayOES)
            	}


HX_DEFINE_DYNAMIC_FUNC1(OES_vertex_array_object_obj,deleteVertexArrayOES,(void))

bool OES_vertex_array_object_obj::isVertexArrayOES( ::Dynamic arrayObject){
            	HX_STACKFRAME(&_hx_pos_ff26fc69b0514c16_20_isVertexArrayOES)
HXDLIN(  20)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OES_vertex_array_object_obj,isVertexArrayOES,return )

void OES_vertex_array_object_obj::bindVertexArrayOES( ::Dynamic arrayObject){
            	HX_STACKFRAME(&_hx_pos_ff26fc69b0514c16_23_bindVertexArrayOES)
            	}


HX_DEFINE_DYNAMIC_FUNC1(OES_vertex_array_object_obj,bindVertexArrayOES,(void))


OES_vertex_array_object_obj::OES_vertex_array_object_obj()
{
}

::hx::Val OES_vertex_array_object_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"isVertexArrayOES") ) { return ::hx::Val( isVertexArrayOES_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bindVertexArrayOES") ) { return ::hx::Val( bindVertexArrayOES_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createVertexArrayOES") ) { return ::hx::Val( createVertexArrayOES_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteVertexArrayOES") ) { return ::hx::Val( deleteVertexArrayOES_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_BINDING_OES") ) { return ::hx::Val( VERTEX_ARRAY_BINDING_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_vertex_array_object_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_BINDING_OES") ) { VERTEX_ARRAY_BINDING_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_vertex_array_object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("VERTEX_ARRAY_BINDING_OES",42,c3,87,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_vertex_array_object_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_vertex_array_object_obj,VERTEX_ARRAY_BINDING_OES),HX_("VERTEX_ARRAY_BINDING_OES",42,c3,87,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_vertex_array_object_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_vertex_array_object_obj_sMemberFields[] = {
	HX_("VERTEX_ARRAY_BINDING_OES",42,c3,87,4b),
	HX_("createVertexArrayOES",24,de,86,e0),
	HX_("deleteVertexArrayOES",93,4b,cc,91),
	HX_("isVertexArrayOES",92,57,a9,be),
	HX_("bindVertexArrayOES",a5,5c,1e,a8),
	::String(null()) };

::hx::Class OES_vertex_array_object_obj::__mClass;

void OES_vertex_array_object_obj::__register()
{
	OES_vertex_array_object_obj _hx_dummy;
	OES_vertex_array_object_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_vertex_array_object",7c,30,89,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_vertex_array_object_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_vertex_array_object_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_vertex_array_object_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_vertex_array_object_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
