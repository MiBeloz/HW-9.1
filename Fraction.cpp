#include "Fraction.h"


Fraction::Fraction(const int _numerator, const int _denominator) : numerator{ _numerator }, denominator{ _denominator } {}

bool Fraction::operator<(const Fraction& other) const {
    int commonDenominator = findCommonDenominator(denominator, other.denominator);
    return (numerator * commonDenominator / denominator) < (other.numerator * commonDenominator / other.denominator);
}

bool Fraction::operator>(const Fraction& other) {
    return other < *this;
}

bool Fraction::operator<=(const Fraction& other) const {
    int commonDenominator = findCommonDenominator(denominator, other.denominator);
    return (numerator * commonDenominator / denominator) <= (other.numerator * commonDenominator / other.denominator);
}

bool Fraction::operator>=(const Fraction& other) {
    return other <= *this;
}

bool Fraction::operator==(const Fraction& other) {
    int commonDenominator = findCommonDenominator(denominator, other.denominator);
    return (numerator * commonDenominator / denominator) == (other.numerator * commonDenominator / other.denominator);
}

bool Fraction::operator!=(const Fraction& other) {
    return !(*this == other);
}

int Fraction::findCommonDenominator(const int a, const int b) const {
    int x = a;
    int y = b;
    if (!(a % b)) {
        return a;
    }
    else if (!(b % a)) {
        return b;
    }
    else if (a > b) {
        while (true) {
            x += a;
            if (!(x % b)) {
                break;
            }
        }
        return x;
    }
    else {
        while (true) {
            y += b;
            if (!(y % a)) {
                break;
            }
        }
        return y;
    }
}

std::ostream& operator<<(std::ostream& os, const Fraction& obj) {
    os << obj.numerator << "/" << obj.denominator;
    return os;
}