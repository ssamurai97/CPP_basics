#include"Grade.h"


int main(){


	int gradeAarray [GradeBook::students] = {
		87, 68, 94,100, 83,78, 85, 91, 76, 87};

	GradeBook myGradeBook{
			"introduction to c++ programming", gradeAarray};

	myGradeBook.displayMessage();
	myGradeBook.processGrades();

	return 0;

}





