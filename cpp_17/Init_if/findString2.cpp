// using c++17 new if statement
#include<iostream>
#include<string>

int main(){
	std::string word = "yokoso 世界へ ";

	if(const auto pos = word.find("yokoso"); pos != std::string::npos)
	   std::cout<<pos << " yokoso\n";

	if(const auto pos = word.find(" 世界へ"); pos!= std::string::npos)
	    std::cout<<pos << " 世界へ\n";

}	

