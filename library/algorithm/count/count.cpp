/*
* count algorithm
* from pluralsight beatifule algorithm by (Kate Gregory)
*/
#include<algorithm>
#include<iostream>
#include<vector>
#include<map>


auto main()->int{

     std::vector v {1,2,2,2, -2,3,65,7,-4, 9};
    int const target {2};

    auto twos = std::count(std::begin(v), std::end(v), target);

    //cout odds numbers
    int odd1{0};
    for(auto elem : v){
        if(elem % 2 != 0){
            odd1++;
        }
    }
    auto odds = std::count_if(std::begin(v), std::end(v), [](int i) { return i % 2!= 0;});
    
    std::map<int, int> monthLengths{ {1,31}, {2, 28}, {3, 31}, {4, 30}, {5,31}, {6,30}, {7,31},{8,31}, {9,30}, {10,31},{11,30},{12,31}};

    auto longmonths = std::count_if(std::begin(monthLengths), std::end(monthLengths), [](auto elem){return elem.second                                                                                       == 31; });

    

    std::cout<< "target 2 "<< twos << '\n';
    std::cout<< "odds numbers "<< odds <<'\n';
    std::cout<< "long months are: "<< longmonths << '\n';

}
