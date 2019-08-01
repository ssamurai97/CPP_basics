//this program print a calender for a year
//the user enter the year, after which 
//the year and calender are printed to the 
//file calender.dat
#include"calendar.h"


int main(){

	std::ofstream outfile;

	open_file(outfile);

	int year{};

	std::cout<<"Enter a year: ";

	std::cin>>year;

	print_calendar(year, outfile);

	return 0;
}



