#include"functor_capture_variable.h"
#include<string>


int main(){
	std::vector v{1,2};

	const std::string introText("Elem: ");

	PrintFunctor visitor = std::for_each(begin(v), end(v),
			PrintFunctor(introText));
	std::cout<<"Num calls: "<< visitor.numCalls <<'\n';

}
