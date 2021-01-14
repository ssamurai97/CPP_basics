/*
 * std::array container
 *
 *
 */

#include<array>
#include<iostream>
#include<algorithm>



int main(){
   
  constexpr  std::array a {11, 22, 44, 33, 55,77};

    std::cout<<" std::array's elements: \n";

    std::for_each(std::begin(a), std::end(a), [](const auto& i){ std::cout<< i <<' ';});

  return 0;
}
