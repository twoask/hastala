/*
 * all_functions.h
 *
 * Declaration of all functions here. Used for unit-test as well.
 */
#ifndef _ALL_FUNCTIONS_H
#define _ALL_FUNCTIONS_H

#include <string>
#include <vector>

/*
 * Calculate the sum of all number from 1 to N (given N).
 */
long CalSum(int N);

/*
 * Given an list of integers which may or may not come in sorted order. Your
 * task is to verify if the array is already sorted (could be ascending or
 * decending order, too). Return true if array is sort, false otherise.
 */
bool CheckSort(std::vector<int> v);

/*
 * Given an list of integers and a value N, return true if there exists two
 * numbers in the list whose sum equal N. Return false otherwise.
 */
bool SumTwo(std::vector<int> v, int N);

/*
 * Write a program that takes an integer and displays the English name of that
 * value.
 */
std::string IntToEng(int N);

/*
 * Calculate GCD (Greatest Common Divisor) of two numbers.
 */
#define ulong unsigned long
ulong GCD(ulong a, ulong b);

#endif  // _ALL_FUNCTIONS_
