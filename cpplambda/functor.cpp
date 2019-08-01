#include<algorithm>
#include<iostream>
#include<vector>


struct PrinFunctor{
	void operator ()(int x)const{
		std::cout<< x << '\n';
	}
};

int main(){
	std::vector v {1,2,3,4};
	std::for_each(begin(v),end(v), PrinFunctor());
}
	
