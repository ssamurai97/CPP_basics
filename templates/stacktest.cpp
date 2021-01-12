#include"stack2.h"
#include<iostream>
#include<string>

int main()
{
	Stack<int> intStack;

	Stack <std::string> stringStack;

	intStack.push(7);

	std::cout<< intStack.top() <<'\n';


	stringStack.push("hello");

	std::cout<< stringStack.top() <<'\n';
    stringStack.pop();
}
