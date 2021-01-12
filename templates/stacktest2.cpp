#include"stack.h"
#include<iostream>
#include<string>


int main()
{
	Stack<int> intStack;

	Stack<std::string> stringStack;

	intStack.push(7);
	
	std::cout<<"intStack  is "<<intStack.top()<<'\n';
	stringStack.push("Hello");
	std::cout<<stringStack.top()<<'\n';


	stringStack.pop();

   return 0;
}
