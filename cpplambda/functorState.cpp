// functor  with a state 
#include<iostream>
#include<vector>
#include<algorithm>


struct PrintFunctor{
	PrintFunctor():numCalls(0){}

	void operator()(int x)const{
		std::cout<< x <<'\n';
		++numCalls;
	}

	mutable int numCalls;

};


int main(){
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);

	PrintFunctor visitor = std::for_each(begin(v), end(v), PrintFunctor());
	std::cout<<"num calls: "<< visitor.numCalls <<'\n';

}
