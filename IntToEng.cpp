/*
 * IntToEng.cpp
 *
 * Write a program that takes an integer and displays the English name of that
 * value.
 *
 * You should support both positive and negative numbers, in the range 
 * supported by a 32-bit integer (approximately -2 billion to 2 billion).
 *
 * Example:
 * 10 -> ten
 * 121 -> one hundred twenty one
 * 1032 -> one thousand thirty two
 * 11043 -> eleven thousand forty three
 * 1200000 -> one million two hundred thousand
 *
 * Requested: Jan 28th, 2015
 *
 * Due date: Jan 29th, 2015
 *
 * Signature: string IntToEng(int N)
 * - @input: an integer value, between -2 billion to 2 billion
 * - @return: a string, all characters are lower case
 */
#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>

std::string IntToEng(int N)
{
    std::string output = "";
    return output;
}

/*
 * Unit test function.
 */
void IntToEngTest()
{
    assert(IntToEng(10) == "ten");
    assert(IntToEng(121) == "one hundred twenty one");
    assert(IntToEng(1032) == "one thousand thirty two");
    assert(IntToEng(11043) == "eleven thousand forty three");
    assert(IntToEng(1200000) == "one million two hundred thousand");
}

int main()
{
    // Do Unit Test
    IntToEngTest();
    return 0;
}


