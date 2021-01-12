//this program is pi and e 
//


#include<iostream>
#include<cmath>

int main()
{
	double pi, e;

	std::cout<<"please enter pi: ";

	std::cin>>pi;

	std::cout<<" please enter e: ";
	std::cin>>e;

	std::cout<<" E to pi: = "<<std::pow(e, pi)<<"\n"
	std::cout<<" PI to E: = "<<std::pow(pi, e)<<"\n";
	

	return 0;
}


