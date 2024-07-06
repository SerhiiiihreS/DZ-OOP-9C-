#pragma once
#include "Student.h"
class Aspirant : public Student
   
{
	char* Topic;
public:
	Aspirant(char* tp, char* nm, char* srn, int ag, int gr);
	~Aspirant();
	Aspirant(const Aspirant& b);

	void SetTopic(const char* tp);
	const char* GetTopic()const;
	void Print1()const;

};
