/*
 *inserting elements to a container
 *
 *Author: kuchlong
 *Date: 01-12-21
 */


#include<iostream>
#include<algorithm>
#include<string>


//idiomatic synatic for printing userdefine type
//
std::ostream& operator <<(std::ostream& os, const std::vector<int>& v){
                        os <<"[ ";
			 for(auto x : v){
                          os << x <<' ';
			 }

			 os<< ']';
         return os;
}
int main(){
  std::vector<int> v{11, 22,33, 44, 55, 66};

  std::cout<<" Initial vector: "<< v <<'\n';

  std::cout<<" Inserting a sing element (88): \n";

  v.insert(std::begin(v)+1, 88);

  std::cout<<"   "<< v <<'\n';

  std::cout<<" Inserting 3 copies of 100: \n";

  v.insert(std::begin(v) + 2, 3, 100);

  std::cout<<"   "<< v <<"\n\n";

  std::vector<int> source{-11, -99, -32};

  std::cout<<" Inserting values from source range: \n";

  v.insert(std::begin(v) + 1, std::begin(source), std::end(source));

  std::cout<<"   "<< v <<"\n\n";

  std::cout<<" Inserting values from initializer list: \n";

  v.insert(std::begin(v) + 4, {111, 222, 333, 444});

  std::cout<<"   "<< v <<"\n\n";

  return 0;

}	
