#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(char* nm)
{
	this->Name = new char[strlen(nm) + 1];
	strcpy_s(this->Name, strlen(nm) + 1, nm);
}

Student::Student(char* nm, char* srn) :Student(nm)
{
	this->Surname = new char[strlen(srn) + 1];
	strcpy_s(this->Surname, strlen(srn) + 1, srn);
}

Student::Student(char* nm, char* srn, int ag) :Student(nm, srn)
{
	if (ag > 0 && ag < 100) {
		age = ag;
	}
}

Student::Student(char* nm, char* srn, int ag, int gr):Student(nm, srn, ag) 
{
	group = gr;
}

Student::~Student()
{
	delete[]Name;
	delete[]Surname;
	age = 0;
	group = 0;

}

Student::Student(const Student& b)
{
	this->Name = new char[strlen(b.Name) + 1];
	strcpy_s(this->Name, strlen(b.Name) + 1, b.Name);
	this->Surname = new char[strlen(b.Surname) + 1];
	strcpy_s(this->Surname, strlen(b.Surname) + 1, b.Surname);
	age = b.age;

}

void Student::SetName(const char* nm)
{
	if (this->Name != nullptr) {
		delete[]Name;
	}
	this->Name = new char[strlen(nm) + 1];
	strcpy_s(this->Name, strlen(nm) + 1, nm);
}

void Student::SetSurname(const char* srn)
{
	if (this->Surname != nullptr) {
		delete[]Surname;
	}
	this->Surname = new char[strlen(srn) + 1];
	strcpy_s(this->Surname, strlen(srn) + 1, srn);
}

void Student::SetAge(int ag)
{
	if (ag > 0 && ag < 100) {
		age = ag;
	}
}

void Student::SetGroup(int gr)
{
	group = gr;
}

const char* Student::GetName() const
{
	return Name;
}

const char* Student::GetSurname() const
{
	return Surname;
}

int Student::GetAge() const
{
	return age;
}

int Student::GetGroup() const
{
	return group;
}

void Student::Print() const
{

	cout << "Name" << Name << endl << "Surname" << Surname << endl << "Age" << age<<endl<<"Group"<<group; 
}