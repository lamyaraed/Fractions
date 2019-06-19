#include "Fraction.h"
#include <iostream>
#include <cassert>
#include <cmath>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <string>


using namespace std;
Fraction::Fraction()
{
    numer=1;
    denom=1;
}
Fraction::Fraction(int a, int b)
{
    numer=a;
    denom=b;
}
Fraction Fraction::operator/(Fraction frac1)
{
    assert((denom!=0)&&(frac1.numer!=0));
    Fraction frac2;
    frac2.numer= numer * frac1.denom;
    frac2.denom= denom * frac1.numer;
    return frac2;
}
Fraction Fraction::operator*(Fraction frac1)
{
    assert((denom!=0)&&(frac1.denom!=0));
    Fraction frac2;
    frac2.numer = numer * frac1.numer;
    frac2.denom = denom * frac1.denom;
    return frac2;
}
Fraction Fraction::operator+(Fraction frac1)
{
    Fraction frac2;
    if (denom == frac1.denom)
    {
        frac2.numer = numer + frac1.numer;
        frac2.denom = denom;
    }
    else
    {
        int numertemp,numertemp1,denomtemp1,denomtemp;
        numertemp = numer * frac1.denom;
        numertemp1 = frac1.numer * denom;
        denomtemp = denom * frac1.denom;
        denomtemp1 = denom * frac1.denom;
        frac2.numer = numertemp + numertemp1;
        frac2.denom = denomtemp;
    }
    return frac2;
}
Fraction Fraction::operator-(Fraction frac1)
{
    Fraction frac2;
    if (denom == frac1.denom)
    {
        frac2.numer = numer - frac1.numer;
        frac2.denom = denom;
    }
    else
    {
        int numertemp,numertemp1,denomtemp1,denomtemp;
        numertemp = numer * frac1.denom;
        numertemp1 = frac1.numer * denom;
        denomtemp = denom * frac1.denom;
        denomtemp1 = denom * frac1.denom;
        frac2.numer = numertemp - numertemp1;
        frac2.denom = denomtemp;
    }
    return frac2;
}
bool Fraction::operator<(Fraction frac1)
{
    if (denom==frac1.denom)
    {
        if (numer<frac1.numer)
            return true;
        else
            return false;
    }
    else
    {
        int numertemp,numertemp1,denomtemp1,denomtemp;
        numertemp = numer * frac1.denom;
        numertemp1 = frac1.numer * denom;
        denomtemp = denom * frac1.denom;
        denomtemp1 = denom * frac1.denom;
        if (numertemp < numertemp1)
            return true;
        else
            return false;
    }
}
bool Fraction::operator>(Fraction frac1)
{
    if (denom==frac1.denom)
    {
        if (numer>frac1.numer)
            return true;
        else
            return false;
    }
    else
    {
        int numertemp,numertemp1,denomtemp1,denomtemp;
        numertemp = numer * frac1.denom;
        numertemp1 = frac1.numer * denom;
        denomtemp = denom * frac1.denom;
        denomtemp1 = denom * frac1.denom;
        if (numertemp > numertemp1)
            return true;
        else
            return false;
    }
}
bool Fraction::operator==(Fraction frac1)
{
    if (denom==frac1.denom)
    {
        if (numer==frac1.numer)
            return true;
        else
            return false;
    }
    else
    {
        int numertemp,numertemp1,denomtemp1,denomtemp;
        numertemp = numer * frac1.denom;
        numertemp1 = frac1.numer * denom;
        denomtemp = denom * frac1.denom;
        denomtemp1 = denom * frac1.denom;
        if (numertemp == numertemp1)
            return true;
        else
            return false;
    }

}
bool Fraction::operator<= (Fraction frac1)
{
    if (denom==frac1.denom)
    {
        if (numer<frac1.numer || numer==frac1.numer)
            return true;
        else
            return false;
    }
    else
    {
        int numertemp,numertemp1,denomtemp1,denomtemp;
        numertemp = numer * frac1.denom;
        numertemp1 = frac1.numer * denom;
        denomtemp = denom * frac1.denom;
        denomtemp1 = denom * frac1.denom;
        if (numertemp < numertemp1 || numertemp==numertemp1)
            return true;
        else
            return false;
    }
}
bool Fraction::operator>= (Fraction frac1)
{
    if (denom==frac1.denom)
    {
        if (numer>frac1.numer || numer==frac1.numer)
            return true;
        else
            return false;
    }
    else
    {
        int numertemp,numertemp1,denomtemp1,denomtemp;
        numertemp = numer * frac1.denom;
        numertemp1 = frac1.numer * denom;
        denomtemp = denom * frac1.denom;
        denomtemp1 = denom * frac1.denom;
        if (numertemp>numertemp1 ||  numertemp==numertemp1 )
            return true;
        else
            return false;
    }
}
ostream& operator<<(ostream& out, Fraction& frac1)
{
    out << frac1.numer << "/" << frac1.denom;
    return out;
}
Fraction RedFrac(Fraction frac1)
{
    assert(frac1.denom !=0 );
    for (int i = frac1.denom * frac1.numer; i > 1; i--)
        if ((frac1.denom % i == 0) && (frac1.numer % i == 0)) {
        frac1.denom /= i;
        frac1.numer /= i;
    }
  Fraction frac2;
  frac2.numer = frac1.numer;
  frac2.denom = frac1.denom;
  return frac2;
}
