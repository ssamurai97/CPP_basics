#include<map>
#include<iostream>
#include<fstream>
#include<string>

void read_population(const std::string filename );



auto main() -> int
{

read_population("populate.txt");


return 0;
}


void read_population(const std::string filename){

	std::ifstream is(filename);

	//file open?
	if(!is){
		std::cerr << "cant not open input file "<< filename <<'\n';
		exit(1);
	}


	for(std::string s; getline(is, s);){
		std::cout<<"population is " << s <<'\n';
	}

}
