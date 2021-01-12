#include<vector>
#include<iostream>
#include<string>
#include<iterator>





void print_vec(const char* name, std::vector<int> v){

	std::cout<< name;

	for(const auto& e : v)std::cout<< e ;
	std::cout<<'\n';

}




int main(){



	std::vector v {1,2,3,4,5,6,7,8,-9};

	print_vec("print elem: ", v);

	const auto fr{4};
	const auto& four = std::find(cbegin(v), cend(v), fr);

	std::cout<< fr <<'\n';

  


}





	

