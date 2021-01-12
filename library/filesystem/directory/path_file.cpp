#include<iostream>
#include<filesystem>
#include<fstream>


namespace fs =std::filesystem;

void print_file(fs::path p){

	std::ofstream fs{p};
	if(!fs)std::cerr <<"bad file name"<< p <<'\n';
	fs<<"domo file san!";
}



int main(){

 print_file("sample.txt");

}
