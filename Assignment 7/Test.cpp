#include <iostream>
#include "Rational.h"
#include "Date.h"

using namespace std;


int main()
{
	cout << "Assignment 7" << endl;
	cout << "Part 1: " << endl;
	Rational testOne(2,4);
	cout << "\tRational string representation of 2/4 is: " << testOne.toRationalString() << endl;
	Rational addTest(1, 3);
	auto resultAdd = testOne.add(addTest);
	cout << "\tAdding 2/4 and 1/3, result: "<< resultAdd.toRationalString() << endl;
	auto resultSub = testOne.subtract(addTest);
	cout << "\tSubstracting 2/4 and 1/3, result: " << resultSub.toRationalString() << endl;
	auto resultMult = testOne.multiply(addTest);
	cout << "\tMultiplication of 2/4 and 1/3, result: " << resultMult.toRationalString() << endl;
	auto resultDiv = testOne.divide(addTest);
	cout << "\tDivision of 2/4 and 1/3, result: " << resultDiv.toRationalString() << endl;
	cout << "\t2/4 in double: " << testOne.toDouble() << endl;
	cout << "Part 2: " << endl;
	Date testDate(3123, 3213, 322);
	Date testDate2(2, 30, 1952);
	Date testDate3(4, 31, 1999);
	Date testDate4(11, 28, 1999);
	for (size_t i = 1; i < 36; i++)
	{
		testDate4.nextDay();
		cout << testDate4.toString() << endl;
	}
}