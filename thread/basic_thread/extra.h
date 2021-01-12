//
// Created by kuchlong2 on 6/22/20.
//

#ifndef BASIC_EXTRA_H
#define BASIC_EXTRA_H
#include <string_view>
void ends_with_and_starts_with(){
    using namespace std::literals;

    std::cout<< std::boolalpha

            // bool starts_with(basic_string_view x) const noexcept;
            << std::string_view("https://cppreference.com").starts_with("http"sv) << ' ' // true
            << std::string_view("https://cppreference.com").starts_with("ftp"sv) << ' '  // false

            // bool starts_with(CharT x) const noexcept;
            << std::string_view("C++20").starts_with('C') << ' ' // true
            << std::string_view("C++20").starts_with('J') << ' ' // false

            // bool starts_with(const CharT* x) const;
            << std::string_view("string_view").starts_with("string") << ' ' // true
            << std::string_view("string_view").starts_with("String") << ' ' // false
            << '\n';
}



#endif //BASIC_EXTRA_H
