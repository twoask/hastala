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
#include <cassert>

#define ulong unsigned long

ulong GCD(ulong A, ulong B)
{
	return 0;
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


