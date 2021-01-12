#ifndef TIMESTAMP_HPP
#define TIMESTAMP_HPP
#include<iostream>
#include<ctime>
#include<string>

class TimeStamp{

    public:
    void         set(long s = 0);
    time_t       get();
    const std::string get_as_string();
    const std::string get_year();
    const std::string get_month();
    const std::string get_day();
    const std::string get_hour();
    const std::string get_minutes();
    const std::string get_second();
    private:
    const std::string  extract(int ,int);
    time_t stamp;
    char   string[30];
};


//helper functin

void dump(TimeStamp& ts);
#endif