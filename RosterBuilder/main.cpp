#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "roster.h"
#include "degree.h"

using namespace std;

int main()
{	
	Roster classRoster;	
	
	classRoster.Roster::Roster();

	string divider = "\n__________________________________________________\n";

	vector <string> studentData =
	{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Joseph,Martin,jmartin00@wgu.edu,27,30,40,50,SOFTWARE"
	};

	cout << divider;
	cout << "\nCourse: Scripting and Programming - Applications - C867\n";
	cout << "Programming Language: C++\n";
	cout << "Student ID: #010101010\n";
	cout << "Name: Joseph Martin\n";
	cout << divider;

	classRoster.Parse(studentData);	

	cout << "\nPrinting All Students: \n";
	classRoster.PrintAll();
	cout << divider;

	cout << "\n\nPrinting Invalid Email Addresses: \n";
	classRoster.PrintInvalidEmails();
	cout << divider;

	cout << "\n\nPrinting Average Number Of Days In Courses: \n";

	for (int i = 0; i < 5; i++)
	{
		classRoster.PrintAverageDaysInCourse((classRoster.classRosterArray[i]->GetStudentID()));
	}
	cout << divider;

	cout << "\n\nPrinting Students In Degree Program [SOFTWARE]: \n";
	classRoster.PrintByDegreeProgram((DegreeProgram)SOFTWARE);
	cout << divider;
	
	cout << "\n\nRemoving Student A3 From Roster...";
	classRoster.Remove("A3");	
	cout << divider;

	cout << "\nPrinting All Students: \n";
	classRoster.PrintAll();
	cout << divider;

	cout << "\n\nRemoving Student A3 From Roster...";
	classRoster.Remove("A3");
	cout << divider;
	
	classRoster.~Roster();
}