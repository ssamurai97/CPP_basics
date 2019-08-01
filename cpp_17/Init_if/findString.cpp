#include<iostream>
#include<string>

int main()
{
	const std::string myString = "My Hello world wow";

	const auto pos = myString.find("Hello");

	if(pos !=std::string::npos)
		std::cout<<pos <<"Hello\n";
	const auto pos2 = myString.find("world");
	if(pos2 !=std::string::npos)
		std::cout<<pos2 <<" world\n";
}

