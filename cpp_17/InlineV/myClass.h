#ifndef INCLUDE_MYCLASS
#define INCLUDE_MYCLASS
// prevously, only methods/functions could be specified as inline, but now with c++17
// you could do the same with variable , inside a header file
struct myClass {
	inline static const int sValue {777};

};
#endif
