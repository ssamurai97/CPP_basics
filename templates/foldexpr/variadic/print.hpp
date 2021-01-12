#include<iostream>

void print(){
}


template<class T, class...Types>

void print(T firstArgs, Types...args){
	std::cout<< firstArgs <<'\n';
	print(args...);

}
