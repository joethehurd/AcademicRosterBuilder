#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "student.h"
#include "roster.h"
#include "degree.h"

using namespace std;

Student::Student() 
{				
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	this->daysInCourse[0] = 0;
	this->daysInCourse[1] = 0;
	this->daysInCourse[2] = 0;
	this->degreeProgram = SECURITY;	
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < numDaysInCourse; i++)
	{
		this->daysInCourse[i] = daysInCourse[i];
	}
	this->degreeProgram = degreeProgram;
}

Student::~Student()
{
	
}

#pragma region Getters

string Student::GetStudentID()
{	
	return this->studentID;
}
string Student::GetFirstName()
{	
	return this->firstName;
}
string Student::GetLastName()
{	
	return this->lastName;
}
string Student::GetEmailAddress()
{	
	return this->emailAddress;
}
int Student::GetAge()
{	
	return this->age;
}
int Student::GetDaysInCourse1()
{		
	return this->daysInCourse[0];
}
int Student::GetDaysInCourse2()
{	
	return this->daysInCourse[1];
}
int Student::GetDaysInCourse3()
{	
	return this->daysInCourse[2];
}
DegreeProgram Student::GetDegreeProgram()
{		
	return this->degreeProgram;
}

#pragma endregion

#pragma region Setters

void Student::SetStudentID(string studentID)
{
	this->studentID = studentID;	
}
void Student::SetFirstName(string firstName)
{
	this->firstName = firstName;
}
void Student::SetLastName(string lastName)
{
	this->lastName = lastName;	
}
void Student::SetEmailAddress(string emailAddress)
{
	this->emailAddress = emailAddress;	
}
void Student::SetAge(int age)
{
	this->age = age;	
}
void Student::SetDaysInCourse1(int daysInCourse1)
{
	this->daysInCourse[0] = daysInCourse1;	
}
void Student::SetDaysInCourse2(int daysInCourse2)
{
	this->daysInCourse[1] = daysInCourse2;	
}
void Student::SetDaysInCourse3(int daysInCourse3)
{
	this->daysInCourse[2] = daysInCourse3;
}
void Student::SetDegreeProgram(DegreeProgram dp)
{
	this->degreeProgram = dp;	
}

#pragma endregion

void Student::Print()
{	
	cout << "\n" << GetStudentID();
	cout << "\tFirst Name:  " << GetFirstName();
	cout << "\tLast Name:  " << GetLastName();	
	cout << "\tAge:  " << GetAge();
	cout << "\tDays In Course:  {" << GetDaysInCourse1() << ", " << GetDaysInCourse2() << ", " << GetDaysInCourse3() << "} ";
	cout << "\t Degree Program:  " << degreeProgramConversion[GetDegreeProgram()] << "\n";	
	//cout << "\tEmail Address: " << GetEmailAddress(); // not required, only display invalid emails
}