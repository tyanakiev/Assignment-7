#include "Rational.h"
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

// Base constructor for Rational class.
Rational::Rational(int num, int denum)
{
	this->numerator = num;
	this->denominator = denum;
}

// Adding two rational numbers.
Rational Rational::add(Rational rationalNumber)
{
	int num = rationalNumber.numerator * denominator + rationalNumber.denominator * numerator;
	int denum = rationalNumber.denominator * denominator;
	Rational result(num, denum);
	result.reduce();
	return result;
}

// Substracting two rational numbers.
Rational Rational::subtract(Rational rationalNumber)
{
	int num = rationalNumber.denominator * numerator - denominator * rationalNumber.numerator;
	int denum = rationalNumber.denominator * denominator;
	Rational result(num, denum);
	result.reduce();
	return result;
}

// Multiplying two rational numbers.
Rational Rational::multiply(Rational rationalNumber)
{
	int num = rationalNumber.numerator * numerator;
	int denum = rationalNumber.denominator * denominator;
	Rational result(num, denum);
	result.reduce();
	return result;
}

// Dividing two rational numbers.
Rational Rational::divide(Rational rationalNumber)
{
	if (rationalNumber.numerator != 0) {
		int num = rationalNumber.denominator * numerator;
		int denum = denominator * rationalNumber.numerator;
		Rational result(num, denum);
		result.reduce();
		return result;
	}
	return Rational(0,1);
}

// String representation of a rational number.
string Rational::toRationalString()	
{
	reduce();
	ostringstream output;
	output << this->numerator << '/' << this->denominator;
	return output.str();

}

// Double representation of a rational number.
double Rational::toDouble()
{
	if (this->denominator != 0) {
		return double(this->numerator) / double(this->denominator);
	}
	return 0;
}

// reduce fraction to reduced form.
void Rational::reduce() {
	// setting the rational to default values.
	if (this->numerator == 0) {
		this->denominator = 1;
		return;
	}

	// finding greatest common divisor.
	int gcd = min(this->numerator, this->denominator);
	while (this->numerator % gcd != 0 || this->denominator % gcd != 0) {
		--gcd;
	}

	// setting current numerator and denominator to reduced form.
	this->numerator /= gcd;
	this->denominator /= gcd;
}
