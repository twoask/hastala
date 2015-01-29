/*
 * GCD.cpp
 *
 * Calculate GCD (Greatest Common Divisor) of two numbers.
 *
 * Example:
 * - GCD(3,5) = 1
 * - GCD(4,10) = 2
 *
 * Requested: Jan 27th, 2015
 *
 * Due date: Jan 28th, 2015
 *
 * Signature: unsigned long GCD(unsigned long A, unsigned long B)
 */
#include <iostream>
using namespace std;
#include <cassert>
#include <algorithm>

#define ulong unsigned long

ulong GCD(ulong a, ulong b)
{
    ulong x, y, c;
    x = max(a,b);
    y = min(a,b); 
    c = x - y;
    while ( c!= 1 && c!=y )
    {
        x = y;
        y = c;
        c = x - y;

    }
    if ( c = 1 )
    {
        cout << "GCD(" <<a<< "," <<b<< ") == " << 1 << endl;
        return 0;
    }
    else
    {
        cout << "GCD(" <<a<< "," <<b<< ") == " << c << endl;
        return 0;
    }
}

/*
 * Unit test function for CalSum.
 */
void GCDTest()
{
    assert(GCD(3,5) == 1);
    assert(GCD(4,10) == 2);
}

int main()
{
    // Do Unit Test
    GCDTest();
    return 0;
}


