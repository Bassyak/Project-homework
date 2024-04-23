#include<iostream>

class Fraction {
private:
    int numerator, denominator;

public:
    Fraction(int num, int denom) {
        numerator = num;
        denominator = denom;
    }

    Fraction add(Fraction frac) {
        int num = numerator * frac.denominator + frac.numerator * denominator;
        int denom = denominator * frac.denominator;
        return Fraction(num, denom);
    }

    Fraction subtract(Fraction frac) {
        int num = numerator * frac.denominator - frac.numerator * denominator;
        int denom = denominator * frac.denominator;
        return Fraction(num, denom);
    }

    Fraction multiply(Fraction frac) {
        int num = numerator * frac.numerator;
        int denom = denominator * frac.denominator;
        return Fraction(num, denom);
    }

    Fraction divide(Fraction frac) {
        int num = numerator * frac.denominator;
        int denom = denominator * frac.numerator;
        return Fraction(num, denom);
    }

    void print() {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    Fraction f1(2, 3);
    Fraction f2(3, 4);
    Fraction result = f1.add(f2);
    result.print();

    return 0;
}