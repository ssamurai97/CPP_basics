/*
 *
 * spaceship operator
 * standard 20
 * 
 */


#include<compare>
#include<iostream>
#include<string>

struct Person{
  std::string d_name;
  
  explicit Person(std::string name): d_name{std::move(name)}{}

  auto operator<=>(const Person& rhs)const{
            return d_name <=> rhs.d_name;
  }

};


template<typename T>

constexpr bool is_less_than(const T& lhs, const T& rhs){
            
	return lhs < rhs;
}

int main(){

   std::cout<<std::boolalpha <<'\n';
   Person kuchlong {"kuchlong"};

   Person deng{"Deng"};
   
    std::cout<<" Deng is less kuchlong "<< is_less_than(deng, kuchlong) <<std::endl;
    std::cout<<"kuchlong is greater than Deng "<< ( kuchlong > deng) << '\n';
}
