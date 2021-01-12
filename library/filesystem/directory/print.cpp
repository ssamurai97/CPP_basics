#include<iostream>
#include<filesystem>
#include<string>

namespace fs =std::filesystem;

void print_directory(fs::path p);

int main(){


	print_directory("/Users/kuchlong");


}



void print_directory(fs::path p){


try{

	if(fs::is_directory(p)){
		std::cout<< p <<":\n";
		for(const fs::directory_entry& x : fs::directory_iterator{p})
			std::cout<< " "<< x.path() <<'\n';
	}

}
catch(const fs::filesystem_error& e){
	std::cerr<<e.what() <<'\n';
}


}
