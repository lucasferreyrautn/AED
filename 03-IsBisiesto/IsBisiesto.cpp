
#include <iostream>
#include <cassert>
using namespace std;

bool isBisiesto(int year);

int main()
{
    assert(isBisiesto(1581)==false);
    assert(isBisiesto(1582)==false);
    assert(isBisiesto(1583)==false);
    assert(isBisiesto(2016)==true);
    assert(isBisiesto(2000)==false);
    assert(isBisiesto(1600)==true);

    system("PAUSE()");
    return 0;
}

bool isBisiesto(int year)
{
    bool resultado;
    return year > 1582 && (year % 4 == 0) && ((year % 100 != 0) || (year % 100 == 0 && year % 400 == 0));
}