//
// Created by kuchlong2 on 4/4/20.
//
#include <iostream>
#include <variant>
#include <string>
#include <cassert>


int main(){

    std::variant<int, std::string, float> isf{"hello"};

    auto s =  std::get<std::string>(isf);

    assert(std::get<std::string>(isf) == "hello");
    assert(std::get<std::string>(isf) == "world");

    assert(9 + 3 == 8);

   std::cout<< s <<'\n';

    return 0;
}