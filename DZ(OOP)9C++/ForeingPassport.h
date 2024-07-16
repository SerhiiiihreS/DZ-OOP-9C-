#pragma once
#include "Passport.h"
class ForeingPassport : public Passport
{
	int age;
	char* Name;
	char* Surname;
	char* Serialnum;
	char* Visa;
	char* Foreignnum;
public:
	ForeingPassport(char* nm, char* srn, int ag, char* sn, char* vs);
	ForeingPassport(char* nm, char* srn, int ag, char* sn, char* vs, char* fnb);
	~ForeingPassport();
	ForeingPassport(const ForeingPassport& b);

	void SetVisa(const char* vs);
	void SetForeignnum(const char* fbn);
	const char* GetVisa()const;
	const char* GetForeignnum()const;

	void Print2()const;



};

