/*
 * SumTwo.cpp
 *
 * Given an list of integers and a value N, return true if there exists two
 * numbers in the list whose sum equal N. Return false otherwise.
 *
 * Example:
 * [1,2,3,4,5], N = 5 ==> return true (2 + 3 == 5)
 * [1,2,3,4,5], N = 15 ==> return false (no pairs could add up to 15)
 *
 * Requested: Feb 1st, 2015
 *
 * Due date: Feb 3rd, 2015
 *
 * Signature: bool SumTwo(std::vector<int> nList, int N)
 * - @v: list of integers
 * - @N: value in which to find the two number who sum equals to
 * - @return: true or false
 *
 * Note, here we are using vector to construct a list of numbers (of objects).
 * If you are not familiar with vector, take a look here:
 * http://www.codeguru.com/cpp/cpp/cpp_mfc/stl/article.php/c4027/C-Tutorial-A-Beginners-Guide-to-stdvector-Part-1.htm
 */
#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
#include <vector>

bool SumTwo(std::vector<int> v, int N)
{
    return false;
}

/*
 * Unit test function.
 */
void SumTwoTest()
{
    int array[] = {1, 2, 3, 4, 5};
    std::vector<int> v(array, array + 5);
    assert(SumTwo(v, 5) == true);
    assert(SumTwo(v, 15) == false);
}

int main()
{
    // Do Unit Test
    SumTwoTest();
    return 0;
}


