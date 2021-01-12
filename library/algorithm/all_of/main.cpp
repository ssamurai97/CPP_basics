#include<algorithm>
#include<iostream>
#include<vector>
#include<map>



auto main()->int{

     std::vector v {1,2,2,2, -2,3,65,7,-4, 9};

    //all of, any of, noe of the values odds? 
    auto allof = std::all_of(std::begin(v), std::end(v), 
    [](auto elem){ return elem % 2 != 0;});

    auto noneof = std::none_of(std::begin(v), std::end(v), 
    [](auto elem ){ return elem % 2 != 0;});

    auto anyof = std::any_of(std::begin(v), std::end(v),
    [](auto elem ){return elem % 2 != 0; });


    std::cout<<std::boolalpha<<' '
             <<allof <<' '<< noneof <<' ' 
             <<anyof<<'\n';
       


}