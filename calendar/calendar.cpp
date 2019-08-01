#include"calendar.h"

using namespace std;


void open_file(ofstream& out){
	out.open("calendar.dat");

	if(!out){
		cerr<<"Unable to open calendar.dat "<<'\n';
		exit(EXIT_FAILURE);
	}

}

// print_calendar prints the calendar specified
// by parameter out.
void print_calendar(int year, ofstream& out){
	int day_code{}, month{}, day{}, days_in_month{};

	bool leap_code;
	out<< year;
	// get leap_year and returns the day on which january
	// 1 of year begins. the return value is coded
	// as: 0 is sunday, 1 is Monday, and so on.
	day_code = get_day_code(year);

	// get leap_year returns true, if year is a 
	// leap year; and false, otherwise.
	leap_code = leap_year(year);

	//month  is code as 1 for jan, 2 for feb.
	//and so on.
	

	for(month = 1; month <= 12; month++){
		//print name and set days_in_month
		switch(month){
			case 1:
				out<<"\n\nJanuary";
				days_in_month = 31;
				break;
			case 2:
				out<<"\n\nFebruary";
				if(leap_code)
					days_in_month = 29;
				else
					days_in_month = 28;
				break;
			case 3:
				out<< "\n\nMarch";
				days_in_month = 31;
				break;
			case 4:
				out<<"\n\nApril";
				days_in_month = 30;
				break;
			case 5:
				out<<"\n\nMay";
				days_in_month = 31;
				break;
			case 6:
				out<<"\n\nJune";
				days_in_month = 30;
				break;
			case 7:
				out<<"\n\nJuly";
				days_in_month = 31;
				break;
			case 8:
				out<<"\n\nAugust";
				days_in_month = 31;
				break;
			case 9:
				out<<"\n\nSeptember";
				days_in_month = 30;
				break;
			case 10:
				out<<"\n\nOctober";
				days_in_month = 31;
				break;
			case 11:
				out<<"\n\nNovember";
				days_in_month = 30;
				break;
			case 12:
				out<<"\n\nDecember";
				days_in_month = 31;
				break;
		}

		out<< "\n\nSun  Mon  Tue  Wed  Thur  Fri  Sat\n";

		//advance to correct position for first day
		//

		for(day = 1; day <= day_code * 5; day++)
			out<<" ";
		//print the dates for one month
		for (day = 1; day < days_in_month; day++){
			//setfield width is 3 beacuse days names
			//are 3 charactors

			out<<setw(3) << day;

			if((day + day_code) % 7 > 0) 
				out<<" ";
			else
				out<<'\n';
		}
		//set day_code for next month to begin
		day_code = (day_code + days_in_month ) % 7 ;

	}

}

	// get_day_code returns the day on which january 
	// 1 or the specified year begins. the return 
	// value is code as: 0 is Sunday, 1 is Monday, 
	// and so on....
	
	int get_day_code(int year){
		return (year + (year -1 ) / 4 - (year - 1 ) / 100
				+ (year - 1 ) / 400 ) % 7;
	}

	// get leap_year returns true if the specified 
	// year is a leap year; and false, otherwise.
	
	bool leap_year(int year){
		return( (year % 4 == 0 && year % 100 != 0)
			|| year % 400 == 0);
	}





