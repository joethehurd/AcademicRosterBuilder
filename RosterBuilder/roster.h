#pragma once
#include <iostream>
#include "degree.h"

using namespace std;

class Roster
{

public:

	const static int rosterSize = 5;
	Student* classRosterArray[rosterSize];

private:

	string studentID = "";
	string firstName = "";
	string lastName = "";
	string emailAddress = "";
	int age = 0;
	int daysInCourse1 = 0;
	int daysInCourse2 = 0;
	int daysInCourse3 = 0;
	int indexCounter = 0;	
	bool removed = false;

public:

	Roster();

	void Parse(vector <string> studentData);

	void Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram dp);

	void Remove(string studentID);

	void PrintAll();

	void PrintAverageDaysInCourse(string studentID);

	void PrintInvalidEmails();

	void PrintByDegreeProgram(DegreeProgram dp);

	~Roster();
};