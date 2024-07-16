#include "ForeingPassport.h"
#include<iostream>
using namespace std;

ForeingPassport::ForeingPassport(char* nm, char* srn, int ag, char* sn, char* vs):Passport(nm,  srn,  ag,  sn)
{
	this->Visa = new char[strlen(vs) + 1];
	strcpy_s(this->Visa, strlen(vs) + 1, vs);
}

ForeingPassport::ForeingPassport(char* nm, char* srn, int ag, char* sn, char* vs, char* fnb):ForeingPassport(nm,srn,ag,sn,vs)
{
	this->Foreignnum = new char[strlen(fnb) + 1]; 
	strcpy_s(this->Foreignnum, strlen(fnb) + 1, fnb); 
}

ForeingPassport::~ForeingPassport()
{
	delete[]Visa;
	delete[]Foreignnum;
}

ForeingPassport::ForeingPassport(const ForeingPassport& b)
{
	this->Visa = new char[strlen(b.Visa) + 1];
	strcpy_s(this->Visa, strlen(b.Visa) + 1, b.Visa);

	this->Foreignnum = new char[strlen(b.Foreignnum) + 1];
	strcpy_s(this->Foreignnum, strlen(b.Foreignnum) + 1, b.Foreignnum);
}

void ForeingPassport::SetVisa(const char* vs)
{
	if (this->Visa != nullptr) {
		delete[]Visa;
	}
	this->Visa = new char[strlen(vs) + 1];
	strcpy_s(this->Visa, strlen(vs) + 1, vs);
}

void ForeingPassport::SetForeignnum(const char* fbn)
{
	if (this->Foreignnum != nullptr) {
		delete[]Foreignnum;
	}
	this->Foreignnum = new char[strlen(fbn) + 1];
	strcpy_s(this->Foreignnum, strlen(fbn) + 1, fbn);
}

const char* ForeingPassport::GetVisa() const
{
	return Visa;
}

const char* ForeingPassport::GetForeignnum() const
{
	return Foreignnum;
}

void ForeingPassport::Print2() const
{
	cout << "Name" << Name << endl << "Surname" << Surname << endl << "Age" << age << endl << "Serialnum" << Serialnum<<"Visa"<<endl<< Visa<<"Foreignnum"<< Foreignnum;
}
