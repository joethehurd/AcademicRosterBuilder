#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "student.h"
#include "roster.h"
#include "degree.h"

using namespace std;
DegreeProgram dp;
Student student;

Roster::Roster()
{
	this->classRosterArray[0] = 0;
	this->classRosterArray[1] = 0;
	this->classRosterArray[2] = 0;
	this->classRosterArray[3] = 0;
	this->classRosterArray[4] = 0;
}

void Roster::Parse(vector <string> studentData)
{	
	student.Student::Student();

	for (int i = 0; i < studentData.size(); i++)
	{
		string str = studentData[i];
		vector <string> result;
		stringstream ss(str);
		while (ss.good())
		{
			string substr;
			getline(ss, substr, ',');
			result.push_back(substr);
		}

		for (int y = 0; y < result.size(); y++)
		{
			if (i == 0)
			{	
				if (y == 0)
				{
					studentID = result[y];
					student.SetStudentID(studentID);					
				}
				else if (y == 1)
				{
					firstName = result[y];
					student.SetFirstName(firstName);					
				}
				else if (y == 2)
				{
					lastName = result[y];
					student.SetLastName(lastName);					
				}
				else if (y == 3)
				{
					emailAddress = result[y];
					student.SetEmailAddress(emailAddress);					
				}
				else if (y == 4)
				{
					stringstream sso;
					string tempAge = result[y];
					sso << tempAge;
					sso >> age;
					student.SetAge(age);					
				}
				else if (y == 5)
				{
					stringstream sso;
					string tempDaysInCourse1 = result[y];
					sso << tempDaysInCourse1;
					sso >> daysInCourse1;
					student.SetDaysInCourse1(daysInCourse1);					
				}
				else if (y == 6)
				{
					stringstream sso;
					string tempDaysInCourse2 = result[y];
					sso << tempDaysInCourse2;
					sso >> daysInCourse2;
					student.SetDaysInCourse2(daysInCourse2);					
				}
				else if (y == 7)
				{
					stringstream sso;
					string tempDaysInCourse3 = result[y];
					sso << tempDaysInCourse3;
					sso >> daysInCourse3;
					student.SetDaysInCourse3(daysInCourse3);
				}
				else if (y == 8)
				{
					string tempDegreeProgram = result[y];
					if (tempDegreeProgram == "SECURITY")
					{
						dp = SECURITY;
					}
					else if (tempDegreeProgram == "NETWORK")
					{
						dp = NETWORK;
					}
					else if (tempDegreeProgram == "SOFTWARE")
					{
						dp = SOFTWARE;
					}
					student.SetDegreeProgram(dp);										
					Add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, dp);
				}
			}

			if (i == 1)
			{
				if (y == 0)
				{
					studentID = result[y];
					student.SetStudentID(studentID);
				}
				else if (y == 1)
				{
					firstName = result[y];
					student.SetFirstName(firstName);
				}
				else if (y == 2)
				{
					lastName = result[y];
					student.SetLastName(lastName);
				}
				else if (y == 3)
				{
					emailAddress = result[y];
					student.SetEmailAddress(emailAddress);
				}
				else if (y == 4)
				{
					stringstream sso;
					string tempAge = result[y];
					sso << tempAge;
					sso >> age;
					student.SetAge(age);
				}
				else if (y == 5)
				{
					stringstream sso;
					string tempDaysInCourse1 = result[y];
					sso << tempDaysInCourse1;
					sso >> daysInCourse1;
					student.SetDaysInCourse1(daysInCourse1);
				}
				else if (y == 6)
				{
					stringstream sso;
					string tempDaysInCourse2 = result[y];
					sso << tempDaysInCourse2;
					sso >> daysInCourse2;
					student.SetDaysInCourse2(daysInCourse2);
				}
				else if (y == 7)
				{
					stringstream sso;
					string tempDaysInCourse3 = result[y];
					sso << tempDaysInCourse3;
					sso >> daysInCourse3;
					student.SetDaysInCourse3(daysInCourse3);
				}
				else if (y == 8)
				{
					string tempDegreeProgram = result[y];
					if (tempDegreeProgram == "SECURITY")
					{
						dp = SECURITY;
					}
					else if (tempDegreeProgram == "NETWORK")
					{
						dp = NETWORK;
					}
					else if (tempDegreeProgram == "SOFTWARE")
					{
						dp = SOFTWARE;
					}
					student.SetDegreeProgram(dp);
					Add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, dp);
				}
			}

			if (i == 2)
			{
				if (y == 0)
				{
					studentID = result[y];
					student.SetStudentID(studentID);
				}
				else if (y == 1)
				{
					firstName = result[y];
					student.SetFirstName(firstName);
				}
				else if (y == 2)
				{
					lastName = result[y];
					student.SetLastName(lastName);
				}
				else if (y == 3)
				{
					emailAddress = result[y];
					student.SetEmailAddress(emailAddress);
				}
				else if (y == 4)
				{
					stringstream sso;
					string tempAge = result[y];
					sso << tempAge;
					sso >> age;
					student.SetAge(age);
				}
				else if (y == 5)
				{
					stringstream sso;
					string tempDaysInCourse1 = result[y];
					sso << tempDaysInCourse1;
					sso >> daysInCourse1;
					student.SetDaysInCourse1(daysInCourse1);
				}
				else if (y == 6)
				{
					stringstream sso;
					string tempDaysInCourse2 = result[y];
					sso << tempDaysInCourse2;
					sso >> daysInCourse2;
					student.SetDaysInCourse2(daysInCourse2);
				}
				else if (y == 7)
				{
					stringstream sso;
					string tempDaysInCourse3 = result[y];
					sso << tempDaysInCourse3;
					sso >> daysInCourse3;
					student.SetDaysInCourse3(daysInCourse3);
				}
				else if (y == 8)
				{
					string tempDegreeProgram = result[y];
					if (tempDegreeProgram == "SECURITY")
					{
						dp = SECURITY;
					}
					else if (tempDegreeProgram == "NETWORK")
					{
						dp = NETWORK;
					}
					else if (tempDegreeProgram == "SOFTWARE")
					{
						dp = SOFTWARE;
					}
					student.SetDegreeProgram(dp);
					Add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, dp);
				}
			}
			
			if (i == 3)
			{
				if (y == 0)
				{
					studentID = result[y];
					student.SetStudentID(studentID);
				}
				else if (y == 1)
				{
					firstName = result[y];
					student.SetFirstName(firstName);
				}
				else if (y == 2)
				{
					lastName = result[y];
					student.SetLastName(lastName);
				}
				else if (y == 3)
				{
					emailAddress = result[y];
					student.SetEmailAddress(emailAddress);
				}
				else if (y == 4)
				{
					stringstream sso;
					string tempAge = result[y];
					sso << tempAge;
					sso >> age;
					student.SetAge(age);
				}
				else if (y == 5)
				{
					stringstream sso;
					string tempDaysInCourse1 = result[y];
					sso << tempDaysInCourse1;
					sso >> daysInCourse1;
					student.SetDaysInCourse1(daysInCourse1);
				}
				else if (y == 6)
				{
					stringstream sso;
					string tempDaysInCourse2 = result[y];
					sso << tempDaysInCourse2;
					sso >> daysInCourse2;
					student.SetDaysInCourse2(daysInCourse2);
				}
				else if (y == 7)
				{
					stringstream sso;
					string tempDaysInCourse3 = result[y];
					sso << tempDaysInCourse3;
					sso >> daysInCourse3;
					student.SetDaysInCourse3(daysInCourse3);
				}
				else if (y == 8)
				{
					string tempDegreeProgram = result[y];
					if (tempDegreeProgram == "SECURITY")
					{
						dp = SECURITY;
					}
					else if (tempDegreeProgram == "NETWORK")
					{
						dp = NETWORK;
					}
					else if (tempDegreeProgram == "SOFTWARE")
					{
						dp = SOFTWARE;
					}
					student.SetDegreeProgram(dp);
					Add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, dp);
				}
			}

			if (i == 4)
			{
				if (y == 0)
				{
					studentID = result[y];
					student.SetStudentID(studentID);
				}
				else if (y == 1)
				{
					firstName = result[y];
					student.SetFirstName(firstName);
				}
				else if (y == 2)
				{
					lastName = result[y];
					student.SetLastName(lastName);
				}
				else if (y == 3)
				{
					emailAddress = result[y];
					student.SetEmailAddress(emailAddress);
				}
				else if (y == 4)
				{
					stringstream sso;
					string tempAge = result[y];
					sso << tempAge;
					sso >> age;
					student.SetAge(age);
				}
				else if (y == 5)
				{
					stringstream sso;
					string tempDaysInCourse1 = result[y];
					sso << tempDaysInCourse1;
					sso >> daysInCourse1;
					student.SetDaysInCourse1(daysInCourse1);
				}
				else if (y == 6)
				{
					stringstream sso;
					string tempDaysInCourse2 = result[y];
					sso << tempDaysInCourse2;
					sso >> daysInCourse2;
					student.SetDaysInCourse2(daysInCourse2);
				}
				else if (y == 7)
				{
					stringstream sso;
					string tempDaysInCourse3 = result[y];
					sso << tempDaysInCourse3;
					sso >> daysInCourse3;
					student.SetDaysInCourse3(daysInCourse3);
				}
				else if (y == 8)
				{
					string tempDegreeProgram = result[y];
					if (tempDegreeProgram == "SECURITY")
					{
						dp = SECURITY;
					}
					else if (tempDegreeProgram == "NETWORK")
					{
						dp = NETWORK;
					}
					else if (tempDegreeProgram == "SOFTWARE")
					{
						dp = SOFTWARE;
					}
					student.SetDegreeProgram(dp);
					Add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, dp);
				}
			}
		}
	}
}

void Roster::Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram dp)
{	
	int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};

	classRosterArray[indexCounter++] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, dp);
}

void Roster::Remove(string studentID)
{
	if (removed == false)
	{
		for (int i = 0; i < indexCounter; i++)
		{
			if (classRosterArray[i]->GetStudentID() == studentID)
			{
				if (i < rosterSize - 1)
				{				
					classRosterArray[2] = classRosterArray[3];
					classRosterArray[3] = classRosterArray[4];										

					indexCounter--;
					removed = true;
					cout << "...Student A3 Successfully Removed From Roster.\n";
				}				
			}			
		}
	}
	else
	{
		cout << "...Student A3 Could Not Be Found.\n";
	}	
}

void Roster::PrintAll()
{
	for (int i = 0; i < indexCounter; i++)
	{		
		classRosterArray[i]->Print();
	}
}

void Roster::PrintAverageDaysInCourse(string studentID)
{	
	for (int i = 0; i < indexCounter; i++)
	{
		if (classRosterArray[i]->GetStudentID() == studentID)
		{
			int avgDays = (((classRosterArray[i]->GetDaysInCourse1()) + (classRosterArray[i]->GetDaysInCourse2()) + (classRosterArray[i]->GetDaysInCourse3())) / 3);
			cout << "\n" << (classRosterArray[i]->GetStudentID()) << "\t";
			cout << "Average Number Of Days In Courses: " << avgDays << "\n";
		}
	}
}

void Roster::PrintInvalidEmails() 
{
	for (int i = 0; i < indexCounter; i++)
	{		
		string tempEmail = (classRosterArray[i]->GetEmailAddress());
		if (tempEmail.find(' ') != string::npos || tempEmail.find('@') == string::npos || tempEmail.find('.') == string::npos)
		{			
			cout << "\n" << (classRosterArray[i]->GetStudentID()) << "\t";
			cout << "Email Address: " << tempEmail << "\n";
		}
	}
}

void Roster::PrintByDegreeProgram(DegreeProgram dp) 
{		
	for (int i = 0; i < indexCounter; i++)
	{		
		int tempDegreeProgram = (classRosterArray[i]->GetDegreeProgram());
		if (tempDegreeProgram == dp)
		{			
			classRosterArray[i]->Print();
		}
	}
}

Roster::~Roster() 
{	
	for (int i = 0; i < rosterSize; i++)
	{		
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}	
}