#pragma once
class Student
{
private:
	int age;
	char* Name;
	char* Surname;
	int group;
public:
	Student() = default;
	Student(char* nm);
	Student(char* nm, char* srn);
	Student(char* nm, char* srn, int ag);
	Student(char* nm, char* srn, int ag,int gr);
	~Student();
	Student(const Student& b);

	void SetName(const char* nm);
	void SetSurname(const char* srn);
	void SetAge(int ag);
	void SetGroup(int ag);


	const char* GetName()const;
	const char* GetSurname()const;
	int GetAge()const;
	int GetGroup()const;

	void Print()const;
};

