// Generated by Haxe 4.3.0-rc.1+5f599ba
#ifndef INCLUDED_justPath_StoreF6
#define INCLUDED_justPath_StoreF6

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_76c7ece0e329c4b8_3_new)
HX_DECLARE_CLASS1(justPath,StoreF6)

namespace justPath{


class HXCPP_CLASS_ATTRIBUTES StoreF6_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StoreF6_obj OBJ_;
		StoreF6_obj();

	public:
		enum { _hx_ClassId = 0x7f7753e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="justPath.StoreF6")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"justPath.StoreF6"); }

		inline static ::hx::ObjectPtr< StoreF6_obj > __new() {
			::hx::ObjectPtr< StoreF6_obj > __this = new StoreF6_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StoreF6_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StoreF6_obj *__this = (StoreF6_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StoreF6_obj), true, "justPath.StoreF6"));
			*(void **)__this = StoreF6_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_76c7ece0e329c4b8_3_new)
HXLINE( 128)		( ( ::justPath::StoreF6)(__this) )->count = 0;
HXLINE(   4)		( ( ::justPath::StoreF6)(__this) )->l = 0;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StoreF6_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StoreF6",31,f3,fc,11); }

		int l;
		 ::Dynamic s0;
		 ::Dynamic s1;
		 ::Dynamic s2;
		 ::Dynamic s3;
		 ::Dynamic s4;
		 ::Dynamic s5;
		 ::justPath::StoreF6 s6;
		void clear();
		::Dynamic clear_dyn();

		int length();
		::Dynamic length_dyn();

		void push( ::Dynamic v);
		::Dynamic push_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

		void unshift( ::Dynamic v);
		::Dynamic unshift_dyn();

		 ::Dynamic shift();
		::Dynamic shift_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		::String populatedToString();
		::Dynamic populatedToString_dyn();

		int count;
		bool hasNext();
		::Dynamic hasNext_dyn();

		void resetIterator();
		::Dynamic resetIterator_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

		 ::Dynamic first();
		::Dynamic first_dyn();

		 ::Dynamic last();
		::Dynamic last_dyn();

		 ::Dynamic penultimate();
		::Dynamic penultimate_dyn();

		void toArray();
		::Dynamic toArray_dyn();

};

} // end namespace justPath

#endif /* INCLUDED_justPath_StoreF6 */ 
