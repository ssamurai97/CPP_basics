// helloworld.cpp
export module helloworld;  // module declaration
//import <iostream>;
 #include<iostream>
 
export void hello() {      // export declaration
    std::cout << "Hello world!\n";
}
