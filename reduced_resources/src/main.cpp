/*
 * basic move semantic
 *
 */


//#include<fmt/format.h>
#include <vector>
#include <iostream>

template <typename T, typename T1>
T create (T1&& t1){
    return  T(std::forward<T1>(t1));
}
int main(){
 std::cout<<'\n';


  auto five {5};

  auto my_five = create<int>(five);

  std::cout<<"my_five: "<< my_five <<'\n';

  std::string str{"Lvalue"};

  auto str2 = create<std::string>(str);
  std::cout<<"str2: "<< str2 <<'\n';

  //Rvalues

  auto my_five2 = create<int>(5);

  std::cout<<"my_five2: "<< my_five2 <<'\n';

  auto str3 = create<std::string>(std::string("Rvalue"));

  std::cout<<"str3: "<< str3 <<'\n';


  auto str4 = create<std::string>(std::move(str3));

  std::cout<<"str4: "<< str4 <<'\n';
  

}
