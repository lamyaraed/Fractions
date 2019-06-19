#include <iostream>
#include "Fraction.h"
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <string>


using namespace std;
int main()
{
    Fraction fraction1(1,6);
    Fraction fraction2(2,3);
    Fraction fraction4 (2,6);
    Fraction fraction3;
    bool x;
    fraction3 = fraction1+fraction2;
    cout << fraction3 << endl;
    fraction3 = fraction1-fraction2;
    cout<<fraction3<<endl;
    fraction3 = fraction1*fraction2;
    cout << fraction3 << endl;
    fraction3=fraction1/fraction2;
    cout<<fraction3<<endl;
    x=(fraction1==fraction2);
    cout << x <<endl;
    x=(fraction1<fraction2);
    cout<<x<<endl;
    x=(fraction1>fraction2);
    cout<<x<<endl;
    x=(fraction1<=fraction2);
    cout<<x<<endl;
    Fraction fraction5;
    fraction5=RedFrac(fraction4);
    cout << fraction5;

    return 0;
}
