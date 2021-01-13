#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include"myutil.hpp"


int main(){

 std::vector v {1,23, 5,67,54};

  erase(v,5);

  std::for_each(std::begin(v), std::end(v), [](int i){ std::cout<<" "<< i;});

  std::cout<<'\n';

 return 0;
}


