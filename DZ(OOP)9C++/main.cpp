#include<iostream>
using namespace std;

#include "Student.h"
#include "Aspirant.h"
#include "ForeingPassport.h"
#include "Passport.h"

int main() {
	Aspirant w("cnuvd", "dcvsf", "mkiovf", 23, 15);
	w.Print();
	w.Print1();

	ForeingPassport f("dfbvk", "sjvbr", 23, "232659d", "vgnmvth");
	f.Print2();
	f.Print4();
 }