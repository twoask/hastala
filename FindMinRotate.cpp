/*
 * FindMinRotote.cpp
 *
 * Given a sorted array (from small to large) with distinct values.
 * Find the minimum value of the array with the best run time.
 *
 * Signature: int FindMinRotate(const deque<int> v)
 */
#include "all_functions.h"
#include <deque>

int FindMinRotateRecursive(const std::deque<int> v, int low, int high)
{
    if (low == high) return v[high];
    else if (low > high) return -1;  // invalid

    // Case 1: if low < high => return low because it's not rotated
    if (v[low] < v[high]) {
        return v[low];
    } else {
        // Case 2: low > high => array has been rotated
        int mid = low + (high - low)/2;
        if (v[mid] > v[low]) {
            return FindMinRotateRecursive(v, mid+1, high);
        } else if (v[mid] < v[high]) {
            return FindMinRotateRecursive(v, low, mid);
        } else {
            return v[high]; 
        }
    }
}

int FindMinRotate(const std::deque<int> v)
{
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    int min = FindMinRotateRecursive(v, 0, v.size() - 1);
    std::cout << " ===> " << min << std::endl;
    return min;
}
