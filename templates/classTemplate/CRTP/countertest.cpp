#include"objectcounter.hpp"
#include<iostream>



template<typename CharT>

class Mystring : public ObectCounter<Mystring<CharT>>{

};


int main(){ 

	Mystring<char> s1, s2;

	Mystring<wchar_t> ws;

	std::cout<<"Num of mystring<char>:"
		<<Mystring<char>::live() <<'\n';
	std::cout<<"Num of Mystring<wchar_t>:"
		<<ws.live() <<'\n';

}
