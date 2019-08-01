//first lambda with a corresponding Functor
//
#include<iostream>
#include<algorithm>
#include<vector>



int main(){
	struct {
		void operator()(int x) const{
			std::cout<< x << '\n';
		}
	}PrintFunctor;

	std::vector<int> v;

	v.push_back(4);
	v.push_back(8);
	v.push_back(43);

	std::for_each(begin(v), end(v), PrintFunctor);
	std::for_each(begin(v), end(v), [](int x ){
			std::cout<< x <<'\n';
			}

			);

}

// lambda expression 
// [] (int x ) {  std::cout<< x << '\n';
// ^     |    |       code
// |     |    |      
// |     |    optional: mutable, exception, trailing return,....
// |     |
// |	 optional: prammeter list
// |
// |
// |
// lambda introducer with capture list 
