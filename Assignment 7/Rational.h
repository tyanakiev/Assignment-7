#include <string>
#ifndef RATIONAL_H
#define RATIONAL_H


class Rational
{
private:    
	int numerator = 0;
	int denominator = 1;
public:    
	Rational(int num, int denum);
	Rational add(Rational rationalNumber);
	Rational subtract(Rational rationalNumber);
	Rational multiply(Rational rationalNumber);
	Rational divide(Rational rationalNumber);
	void reduce();
	std::string toRationalString();
	double toDouble();
};

#endif