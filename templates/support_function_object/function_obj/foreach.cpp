#include<iostream>
#include<vector>

#include"foreach.hpp"


void func(int i){
	std::cout<<"func()called for: "<< i <<'\n';

}


class FuncObj{
	public:
		void operator()(int i)const {
			std::cout<< "FuncObj::op() called for: "<< i <<'\n';
		}

};



auto main()->int
{
	std::vector primes  {2,3, 5, 7, 11, 13, 17,19};

	foreach(begin(primes), end(primes), func);

	foreach(begin(primes), end(primes), &func);

	foreach(begin(primes), end(primes), FuncObj());

	foreach(begin(primes), end(primes), [](int i){
			std::cout<<"lambda called for: "<<i <<'\n';
			});

}
