//
// Created by kuchlong2 on 4/27/20.
//

#include<thread>
#include<vector>
#include<string>
#include<iostream>
#include <string_view>
#include <future>
#include "extra.h"

void print_repeat(const std::string& s, int n){
    if(n > 0){
        std::cout<< s <<'\n';
        print_repeat(s, n - 1);
    }
}

void dividNumber(std::promise<double>&&prms, double num, double den);

double dividByNumber(double n, double  m);
int main(){

    std::string st("cool!!");
    std::thread t{print_repeat, "blah", 3};
    t.join();

    auto n {54.0};
    auto m {3.0};

     std::future<double> frs = std::async(dividByNumber, n, m);


    try
    {
        double result = frs.get();
        std::cout << "Result = " << result << std::endl;
    }
    catch (std::runtime_error e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout<<"after join "<< st <<'\n';


    ends_with_and_starts_with();

}

void dividNumber(std::promise<double>&& prms, double num, double den){

    std::this_thread::sleep_for(std::chrono::microseconds(500));
    try {
        if(den == 0)
            throw std::runtime_error("Exception from thread: division by zero");
         else
             prms.set_value(num/den);
    } catch (...) {
        prms.set_exception(std::current_exception());

    }


}


double dividByNumber(double n, double  m){
    if(m == 0){
        throw std::runtime_error("Error can divid by zero");
    }

    return n / m;
}