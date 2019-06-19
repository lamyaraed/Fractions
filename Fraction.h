#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <string>


using namespace std;
class Fraction
{
protected:
    int numer,denom;
public:
    Fraction();
    Fraction(int a,int b);
    Fraction operator/ (Fraction frac1);
    Fraction operator* (Fraction frac1);
    Fraction operator+ (Fraction frac1);
    Fraction operator- (Fraction frac1);
    Fraction RedFrac (Fraction frac1, Fraction frac2);
    bool operator< (Fraction frac1);
    bool operator> (Fraction frac1);
    bool operator== (Fraction frac1);
    bool operator<= (Fraction frac1);
    bool operator>= (Fraction frac1);
    friend ostream& operator<<(ostream& out, Fraction& frac1);
    friend Fraction RedFrac (Fraction frac1);
};

ostream& operator << (ostream& out, Fraction& frac1);
Fraction RedFrac (Fraction frac1);
#endif // FRACTION_H
