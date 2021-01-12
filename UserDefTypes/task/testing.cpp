#include<iostream>
#include<cstring>
#include<cstdint>


int main(){

 char source[]= "once upon time in africa";

   char dest[9];

   std::memcpy(dest, source, sizeof dest);
   for(const char &c : dest)
        std::cout<< c <<'\n';

    
    
}