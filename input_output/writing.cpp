#include<iostream>
#include<fstream>
#include<string>


void write_file(const std::string );
auto main()->int
{

	write_file("testo.txt");


	return 0;
}


void write_file(const std::string filename){

	std::ofstream of{filename};

	if(!of){
		std::cerr<< "no file to open  "<< filename <<'\n';
		exit(1);
	}

	of<<"kore wa testo desu "<<" : "
		<<"writing to a file in c++ "<<'\n';
}
