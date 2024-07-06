#pragma once
class Passport

{
private:
	int age;
	char* Name;
	char* Surname;
	char* Serialnum;
public:
	Passport() = default;
	Passport(char* nm);
	Passport(char* nm, char* srn);
	Passport(char* nm, char* srn, int ag);
	Passport(char* nm, char* srn, int ag, char* sn);
	~Passport();
	Passport(const Passport& b);

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
