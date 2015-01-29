/*
 * CalSum.cpp
 *
 * Calculate the sum of all number from 1 to N (given N).
 *
 * Requested: Jan 26th, 2015
 *
 * Due date: Jan 27th, 2015
 *
 * Signature: long CalSum(int N)
 */
#include <iostream>
#include <cassert>

long CalSum(int N)
{
	return N*(N+1)/2;
}

/*
 * Unit test function for CalSum.
 */
void CalSumTest()
{
    assert(CalSum(0) == 0);
    assert(CalSum(1) == 1);
    assert(CalSum(4) == 10);
}

int main()
{
    CalSumTest();
    return 0;
}


