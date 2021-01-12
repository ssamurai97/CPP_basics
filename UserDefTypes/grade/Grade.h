#pragma once

#include<string>

class GradeBook{

	public:

	const static int students {10};

	//constuctor initializes course name and array of grades
	GradeBook(const std::string, const int []);

	void setCourseName(std::string);
	std::string getCourseName()const;
	void displayMessage()const;
	void processGrades();

	int getMinimum();
	int getMaximum();
	double getAverage();

	void outputBarChart();

	void outputGrades()const;

	private:

		std::string courseName{};

		int grades[ students];

};


