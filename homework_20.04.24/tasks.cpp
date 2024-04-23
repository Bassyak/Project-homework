#include<iostream>

class Fraction {
private:
    int numerator, denominator;

public:
    Fraction(int num = 0, int denom = 1) {
        numerator = num;
        denominator = denom;
    }

    void setNumerator(int num) {
        numerator = num;
    }

    void setDenominator(int denom) {
        if (denom != 0) {
            denominator = denom;
        }
        else {
            std::cout << "Denominator cannot be zero!" << std::endl;
        }
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }

    Fraction add(Fraction frac);
    Fraction subtract(Fraction frac);
    Fraction multiply(Fraction frac);
    Fraction divide(Fraction frac);
    void print();
};

Fraction Fraction::add(Fraction frac) {
    int num = numerator * frac.getDenominator() + frac.getNumerator() * denominator;
    int denom = denominator * frac.getDenominator();
    return Fraction(num, denom);
}

Fraction Fraction::subtract(Fraction frac) {
    int num = numerator * frac.getDenominator() - frac.getNumerator() * denominator;
    int denom = denominator * frac.getDenominator();
    return Fraction(num, denom);
}

Fraction Fraction::multiply(Fraction frac) {
    int num = numerator * frac.getNumerator();
    int denom = denominator * frac.getDenominator();
    return Fraction(num, denom);
}

Fraction Fraction::divide(Fraction frac) {
    int num = numerator * frac.getDenominator();
    int denom = denominator * frac.getNumerator();
    return Fraction(num, denom);
}

void Fraction::print() {
    std::cout << numerator << "/" << denominator << std::endl;
}

int main() {
    Fraction f1(2, 3);
    Fraction f2(3, 4);
    Fraction result = f1.add(f2);
    result.print();

    return 0;
}