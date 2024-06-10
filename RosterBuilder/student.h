#pragma once
#include <iostream>
#include "degree.h"

using namespace std;

class Student
{

public:

	const static int numDaysInCourse = 3;

private:

	string studentID = "";
	string firstName = "";
	string lastName = "";
	string emailAddress = "";
	int age = 0;
	int daysInCourse[numDaysInCourse];
	DegreeProgram degreeProgram; 
	string degreeProgramConversion [3] = {"SECURITY", "NETWORK", "SOFTWARE"};

public:	

	Student(); 

	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);	
	
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetAge();
	int GetDaysInCourse1();
	int GetDaysInCourse2();
	int GetDaysInCourse3();
	DegreeProgram GetDegreeProgram();

	void SetStudentID(string studentID);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetAge(int age);
	void SetDaysInCourse1(int daysInCourse1);
	void SetDaysInCourse2(int daysInCourse2);
	void SetDaysInCourse3(int daysInCourse3);	
	void SetDegreeProgram(DegreeProgram dp);
		
	void Print();

	~Student();
};
