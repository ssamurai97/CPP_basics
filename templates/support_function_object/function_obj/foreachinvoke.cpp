#include<iostream>
#include<vector>
#include<string>
#include"foreach_ivoke.hpp"


class Myclass {
	public:
		void memfunc(int i)const {
			std::cout<< "Myclass::memfunc() called for: "<< i <<'\n';
		}


};




int main(){

	//using c++17 type deduction
	std::vector primes {2, 3, 5, 7, 11, 13, 17,19};

	foreach(begin(primes), end(primes), [](std::string const& prefix, int i)
			{
			  std::cout<< prefix << i <<'\n';},"-value ");


	Myclass obj;

	foreach(begin(primes), end(primes), &Myclass::memfunc,obj);

}
