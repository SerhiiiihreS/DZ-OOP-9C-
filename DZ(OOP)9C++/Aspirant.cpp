#include "Aspirant.h"
#include<iostream>
using namespace std;

Aspirant::Aspirant(char* tp, char* nm, char* srn, int ag, int gr):Student(nm,srn,ag,gr) 
{
	this->Topic = new char[strlen(tp) + 1];
	strcpy_s(this->Topic, strlen(tp) + 1, tp);
}

Aspirant::~Aspirant()
{
	delete[]Topic;
}

Aspirant::Aspirant(const Aspirant& b)
{
	this->Topic = new char[strlen(b.Topic) + 1];
	strcpy_s(this->Topic, strlen(b.Topic) + 1, b.Topic);
}

void Aspirant::SetTopic(const char* tp)
{
	if (this->Topic != nullptr) {
		delete[]Topic;
	}
	this->Topic = new char[strlen(tp) + 1]; 
	strcpy_s(this->Topic, strlen(tp) + 1, tp); 
}

const char* Aspirant::GetTopic() const
{
	return Topic;
}

void Aspirant::Print1() const
{
	cout << "Topic" << Topic << endl;
}
