//basic utility file 
//

#ifndef MYUTIL_HPP
#define MYUTIL_HPP


template<typename T>

void erase(std::vector<T>& v, T const value){
	v.erase(std::remove(std::begin(v), std::end(v), value), std::end(v));

}








#endif
