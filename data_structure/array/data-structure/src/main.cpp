
#include<cassert>
#include"intarray.hpp"

auto main()->int{
using std::cout;

  IntArray a {10};

 for(auto i {0}; i < a.size(); i++){
     a[i] = i;
 }


IntArray b = a;

 cout<<a <<'\n';
 cout<< b <<'\n';
 
  

}