
/*
 * basic sort algorithm on std::vector
 * ----------------------------------
 *  author: kuchlong
 *  date  : 01-12-2021
 */

#include<iostream>
#include<vector>
#include<vector>
#include<fstream>
#include<algorithm>
#include<string>


int main(){

   // Read lines from text file into std::vector
	
   std::vector<std::string> lines{};	

   std::ifstream input_file{"name.txt"};
   std::string line{};

   while(getline(input_file, line)){
	   lines.push_back(line);
   }

    
   //sort the lines in the std::vector

   std::sort(std::begin(lines), std::end(lines), [](const auto& a, const auto& b){
		   return a > b;});

   // print the sorted lines

   for(const auto& x : lines){

	std::cout<< x <<'\n';
   }
}

