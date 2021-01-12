#include"Grade.h"
#include<iostream>
#include<iomanip>

using namespace std;


GradeBook::GradeBook(const string name, const int gradeArray[]){
	setCourseName( name);

	for (auto grade = 0; grade < students; grade++)
	grades[ grade ] = gradeArray[ grade];

}


void GradeBook::setCourseName(string name){
	courseName = name;

}

string GradeBook::getCourseName() const{
	return courseName;

}

void GradeBook::displayMessage() const{

	cout<< "Wecome to the grade book for \n" << getCourseName() << "!"
		<<'\n';
}


void GradeBook::processGrades(){

	//output grades array
	
	outputGrades();


	// call function getAverage to calculate the average grade
	
	cout<< "Lowest grade is " << getMinimum()<< "\nHighest grade is " 
		<<" "<< getMaximum() <<'\n';

	//call function outputBarChar to print grade distribution chart
	
	outputBarChart();

}

int GradeBook::getMinimum(){

	int lowgGrade {100};

	for(auto grade = 0; grade < students; grade++){
		if(grades[grade] < lowgGrade)
			lowgGrade = grades[grade];

			}

		return lowgGrade;

	}


int GradeBook::getMaximum(){

	int hightGrade{0};

	for (auto grade = 0; grade < students; grade++){
		if( grades[grade] > hightGrade)
			hightGrade = grades[grade];
	}


	return hightGrade;

}


double GradeBook::getAverage(){

	int total{ 0 };

	for( auto grade = 0; grade < students; grade++)
		total += grades[ grade ];

	return static_cast<double>(total)/students;

}


void GradeBook::outputBarChart(){

	cout<< "\nGrade distribution: "<<'\n';

	const int frequenceySize {11};

	int frequency[ frequenceySize ]={};


	for (auto grade = 0; grade < students; grade++)
		frequency[ grades [grade] / 10 ]++;

	for (auto count = 0; count < frequenceySize; count++){
		if(0 == count)
			cout<< " 0-9: ";
		else if ( 10 == count )
			cout << " 100: ";
		else
			cout << count * 10 << "-" << (count * 10 ) + 9 << ": ";

		for( auto stars = 0; stars < frequency[count]; stars++)

			cout<< '*';

		cout<<'\n';
	}
}


void GradeBook::outputGrades() const
{
	cout<< "\nThe grades are: \n\n";

	for(auto student = 0; student < students; student++)
		cout<< "Student "<<setw( 2 ) << student + 1 << ": "<< setw( 3 )
			<< grades[ student ] << '\n';

}




