#include "Passport.h"
#include<iostream>
using namespace std;

Passport::Passport(char* nm)
{
	this->Name = new char[strlen(nm) + 1];
	strcpy_s(this->Name, strlen(nm) + 1, nm);
}

Passport::Passport(char* nm, char* srn) :Passport(nm)
{
	this->Surname = new char[strlen(srn) + 1];
	strcpy_s(this->Surname, strlen(srn) + 1, srn);
}

Passport::Passport(char* nm, char* srn, int ag) :Passport(nm, srn)
{
	if (ag > 0 && ag < 100) {
		age = ag;
	}
}

Passport::Passport(char* nm, char* srn, int ag, char* sn) :Passport(nm, srn, ag)
{
	this->Serialnum = new char[strlen(sn) + 1]; 
	strcpy_s(this->Serialnum, strlen(sn) + 1, sn);
}

Passport::~Passport()
{
	delete[]Name;
	delete[]Surname;
	age = 0;
	delete[]Serialnum;
	

}

Passport::Passport(const Passport& b)
{
	this->Name = new char[strlen(b.Name) + 1];
	strcpy_s(this->Name, strlen(b.Name) + 1, b.Name);
	this->Surname = new char[strlen(b.Surname) + 1];
	strcpy_s(this->Surname, strlen(b.Surname) + 1, b.Surname);
	age = b.age;
	this->Serialnum = new char[strlen(b.Serialnum) + 1];
	strcpy_s(this->Serialnum, strlen(b.Serialnum) + 1, b.Serialnum);

}

void Passport::SetName(const char* nm)
{
	if (this->Name != nullptr) {
		delete[]Name;
	}
	this->Name = new char[strlen(nm) + 1];
	strcpy_s(this->Name, strlen(nm) + 1, nm);
}

void Passport::SetSurname(const char* srn)
{
	if (this->Surname != nullptr) {
		delete[]Surname;
	}
	this->Surname = new char[strlen(srn) + 1];
	strcpy_s(this->Surname, strlen(srn) + 1, srn);
}

void Passport::SetAge(int ag)
{
	if (ag > 0 && ag < 100) {
		age = ag;
	}
}

void Passport::SetGroup(int gr)
{
	group = gr;
}

const char* Passport::GetName() const
{
	return Name;
}

const char* Passport::GetSurname() const
{
	return Surname;
}

int Passport::GetAge() const
{
	return age;
}

int Passport::GetGroup() const
{
	return group;
}

void Passport::Print() const
{

	cout << "Name" << Name << endl << "Surname" << Surname << endl << "Age" << age << endl << 
}