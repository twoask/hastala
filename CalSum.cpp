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
using namespace std;
#include <cassert>

long CalSum(int N)
{
	int a = 
    cout << "Enter a number, any number" << endl;
	cin << 
	return 0;
}

int main(int argc, char *argv[] )
{
	int N;
	int sum;
	cout << "This program is to calculate the sum of"
		 << " 1 to N" << endl;
	cout << "Please enter any N number >=1 in the sets of integer \t\t";
	cin >> N;
	
	while (N < 1)
{
	int N;
	cout << "The number N cannot be less than 1" <<endl;
	cout << "Please enter N number as asked above\t\t";
	cin >> N;
}
	
	// Calculate and display the sum from 1 to N
	sum = N*(N+1)*0.5;
	cout << "\nThe sum of 1 to " << N << " is: \t\t" << sum <<endl;
	return 0;
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
    // Do Unit Test
    CalSumTest();
    // TODO<hieuvu96>: do more testings
	std::cout << "Return: " << CalSum(1) << std::endl;
    return 0;
}


