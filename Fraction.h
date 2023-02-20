#pragma once

#include <iostream>


class Fraction {
public:
	Fraction(const int _numerator, const int _denominator);

	bool operator<(const Fraction& other);
	bool operator>(const Fraction& other);
	bool operator<=(const Fraction& other);
	bool operator>=(const Fraction& other);
	bool operator==(const Fraction& other);
	bool operator!=(const Fraction& other);

private:
	int numerator;
	int denominator;

	int findCommonDenominator(const int a, const int b);

	friend std::ostream& operator<<(std::ostream& os, const Fraction& obj);
};

