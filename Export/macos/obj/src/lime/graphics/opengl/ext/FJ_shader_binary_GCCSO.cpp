// Generated by Haxe 4.3.0-rc.1+5f599ba
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO
#include <lime/graphics/opengl/ext/FJ_shader_binary_GCCSO.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2eff1332e1dfb34e_6_new,"lime.graphics.opengl.ext.FJ_shader_binary_GCCSO","new",0x76465ff8,"lime.graphics.opengl.ext.FJ_shader_binary_GCCSO.new","lime/graphics/opengl/ext/FJ_shader_binary_GCCSO.hx",6,0x8cd5d596)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void FJ_shader_binary_GCCSO_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2eff1332e1dfb34e_6_new)
HXDLIN(   6)		this->GCCSO_SHADER_BINARY_FJ = 37472;
            	}

Dynamic FJ_shader_binary_GCCSO_obj::__CreateEmpty() { return new FJ_shader_binary_GCCSO_obj; }

void *FJ_shader_binary_GCCSO_obj::_hx_vtable = 0;

Dynamic FJ_shader_binary_GCCSO_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FJ_shader_binary_GCCSO_obj > _hx_result = new FJ_shader_binary_GCCSO_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FJ_shader_binary_GCCSO_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c89d756;
}


FJ_shader_binary_GCCSO_obj::FJ_shader_binary_GCCSO_obj()
{
}

::hx::Val FJ_shader_binary_GCCSO_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"GCCSO_SHADER_BINARY_FJ") ) { return ::hx::Val( GCCSO_SHADER_BINARY_FJ ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FJ_shader_binary_GCCSO_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"GCCSO_SHADER_BINARY_FJ") ) { GCCSO_SHADER_BINARY_FJ=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FJ_shader_binary_GCCSO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("GCCSO_SHADER_BINARY_FJ",24,09,cc,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FJ_shader_binary_GCCSO_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FJ_shader_binary_GCCSO_obj,GCCSO_SHADER_BINARY_FJ),HX_("GCCSO_SHADER_BINARY_FJ",24,09,cc,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FJ_shader_binary_GCCSO_obj_sStaticStorageInfo = 0;
#endif

static ::String FJ_shader_binary_GCCSO_obj_sMemberFields[] = {
	HX_("GCCSO_SHADER_BINARY_FJ",24,09,cc,3e),
	::String(null()) };

::hx::Class FJ_shader_binary_GCCSO_obj::__mClass;

void FJ_shader_binary_GCCSO_obj::__register()
{
	FJ_shader_binary_GCCSO_obj _hx_dummy;
	FJ_shader_binary_GCCSO_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.FJ_shader_binary_GCCSO",06,44,31,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FJ_shader_binary_GCCSO_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FJ_shader_binary_GCCSO_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FJ_shader_binary_GCCSO_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FJ_shader_binary_GCCSO_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
