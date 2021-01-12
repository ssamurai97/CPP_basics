#include<iostream>
#include<string>
#include"./variadic/print.hpp"
template<typename... T >

auto foldSum(T... args){
	return (... + args);
}


int main(){

	int ia[] ={1,22,33,45,56,66,99};

	std::string s="hello varidic";
	print(s, 77, 232.9);
	auto fold = foldSum(1,22,33,44,6);
	auto iax = foldSum(ia[3]);
	std::cout<< fold <<" "<<"ia "<< iax <<'\n';


}
