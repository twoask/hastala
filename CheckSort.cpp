/*
 * CheckSort.cpp
 *
 * Given an list of integers which may or may not come in sorted order. Your
 * task is to verify if the array is already sorted (could be ascending or
 * decending order, too). Return true if array is sort, false otherise.
 *
 * Example:
 * [1,2,3,4,5] ==> return true (array is sorted)
 * [5,4,3,2,1] ==> return true (array is sorted)
 * [1,2,3,4,3] ==> return false (array is not sorted)
 *
 * Requested: Feb 2nd, 2015
 *
 * Due date: Feb 4th, 2015
 *
 * Signature: bool CheckSort(std::vector<int> nList)
 * - @v: list of integers, may already be sorted
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

bool CheckSort(std::vector<int> v)
{
    return false;
}

/*
 * Unit test function.
 */
void CheckSortTest()
{
    int array[] = {1, 2, 3, 4, 5};
    std::vector<int> v(array, array + 5);
    assert(CheckSort(v) == true);
    int array2[] = {1, 2, 3, 4, 3};
    std::vector<int> v2(array2, array2 + 5);
    assert(CheckSort(v2) == false);
    int array3[] = {5, 4, 3, 2, 1};
    std::vector<int> v3(array3, array3 + 5);
    assert(CheckSort(v3) == true);
}

int main()
{
    // Do Unit Test
    CheckSortTest();
    return 0;
}


