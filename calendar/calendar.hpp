#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>


void open_file(std::ofstream& out);

void print_calendar(int year, std::ofstream& out);

int get_day_code(int year);

bool leap_year(int year);

