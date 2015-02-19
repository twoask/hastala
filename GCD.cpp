/*
 * GCD.cpp
 *
 * Calculate GCD (Greatest Common Divisor) of two numbers.
 *
 * Example:
 * - GCD(3,5) = 1
 * - GCD(4,10) = 2
 * - GCD(4,4) = 4
 *
 * Signature: unsigned long GCD(unsigned long A, unsigned long B)
 */
#include <iostream>
#include <algorithm>
#include "all_functions.h"
using namespace std;

ulong GCD(ulong a, ulong b)
{
    ulong max, min;
    
    if (a == b)
    {
        cout << "the GCD of 2 numbers is " << a << endl;
        return a;
    }
    
    if (a>b)
    {
        max = a;
        min = b;
    }
    else if (b>a)
    {
        max = b;
        min = a;
    }
    
    if (max % min == 0)
    { 
        cout << "the GCD of 2 numbers is " << min << endl;
        return min;
    }
    ulong result = min;
    while (!(max % result == 0 && min % result == 0))
    {
        result--;
    }
    cout <<"the GCD of 2 numbers is " << result << endl;
    return result;
}
