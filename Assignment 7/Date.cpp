// Fig. 9.15: Date.cpp
// Date class member-function definitions.
#include <sstream>
#include <iostream>
#include <string>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor (should do range checking)
Date::Date(unsigned int m, unsigned int d, unsigned int y)
	: month{ m }, day{ d }, year{ y } {
	if (day > 31 || month > 12 || day <= 0 || month <= 0 || year < 0)
	{
		cout << month << "/" << day << "/" << year << ": is not valid date!" << std::endl;
		
	}
	if (this->day == 31 && (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11))
	{
		cout << month << "/" << day << "/" << year << ": Feb, April, June, Sep and Nov do not have 31 days!" << endl;
		return;
	}
	if (month == 2)
	{
		if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
		{
			if (day > 28)
			{
				std::cout << month << "/" << day << "/" << year << ": is a leap year, so FEB can't have more than 28 days!!!" << std::endl;
				return;
			}
		}
		if (day > 29)
		{
			std::cout << month << "/" << day << "/" << year << ": FEB has no more than 29 days!!" << std::endl;
			return;
		}
	}
}

// print Date in the format mm/dd/yyyy
string Date::toString() const {
	ostringstream output;
	output << month << '/' << day << '/' << year;
	return output.str();
}

// Adding 1 day.
void Date::nextDay()
{	// If days are equal to 31, we check if the month is Dec, then we set day to 1 and month to 1 and we increase the year with 1
	if (this->day == 31)
	{
		if (this->month == 12)
		{
			this->year++;
			this->day = 1;
			this->month = 1;
		}
		else
			this->month++;
		this->day = 1;
	}

	// If days are equal to 30, we check if its Jan, March,  May, July, August, Oct or Dec and we add 1 day, because those months have 31 days.
	else if (this->day == 30) {
		if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12)
			this->day++;
		else
		{
			this->day = 1;
			this->month++;
		}
	}

	// If days are equal to 29, we need to check if the month is FEB.
	else if (this->day == 29)
	{
		if (this->month == 2)
		{
			this->day = 1;
			this->month++;
		}
		else
			this->day++;
	}

	// If days are equal to 28, we need to check if the month is FEB and if we have a leap year.
	else if (this->day == 28) {
		if (this->month == 2) {
			if ((this->year % 400 == 0) || (this->year % 100 != 0 || this->year % 4 == 0))
			{
				this->day++;
			}
			else
			{
				this->day = 1;
				this->month++;
			}
		}
		else {
			this->day++;
		}
	}

	// Checks if days are less 28, then we just add 1 day.
	else{
		this->day++;
	}
}


/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
