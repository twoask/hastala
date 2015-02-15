/*
 * Unit tests for all functions.
 */
#include "all_functions.h"
#include "gtest/gtest.h"

namespace {

/*
 * Unit test function for CalSum.
 */
class CalSumTest : public ::testing::Test {
  protected:
    CalSumTest();

    virtual ~CalSumTest();

    virtual void SetUp() {}

    virtual void TearDown() {}
};

TEST(CalSumTest, Correctness) {
    EXPECT_EQ(0, CalSum(0));
    EXPECT_EQ(1, CalSum(1));
    EXPECT_EQ(10, CalSum(4));
}

/*
 * Unit test function for CheckSort.
 */
class CheckSortTest : public ::testing::Test {
  protected:
    CheckSortTest();

    virtual ~CheckSortTest();

    virtual void SetUp() {}

    virtual void TearDown() {}
};

TEST(CheckSortTest, Correctness) {
    int array[] = {1, 2, 3, 4, 5};
    std::vector<int> v(array, array + 5);
    EXPECT_TRUE(CheckSort(v));
    int array2[] = {1, 2, 3, 4, 3};
    std::vector<int> v2(array2, array2 + 5);
    EXPECT_FALSE(CheckSort(v2));
    int array3[] = {5, 4, 3, 2, 1};
    std::vector<int> v3(array3, array3 + 5);
    EXPECT_TRUE(CheckSort(v3));
}

/*
 * Unit test function for SumTwo.
 */
class SumTwoTest : public ::testing::Test {
  protected:
    SumTwoTest();

    virtual ~SumTwoTest();

    virtual void SetUp() {}

    virtual void TearDown() {}
};

TEST(SumTwoTest, Correctness) {
    int array[] = {1, 2, 3, 4, 5};
    std::vector<int> v(array, array + 5);
    EXPECT_TRUE(SumTwo(v, 5));
    EXPECT_FALSE(SumTwo(v, 15));
}

/*
 * Unit test function for IntToEng.
 */
class IntToEngTest : public ::testing::Test {
  protected:
    IntToEngTest();

    virtual ~IntToEngTest();

    virtual void SetUp() {}

    virtual void TearDown() {}
};

TEST(IntToEngTest, Correctness) {
    EXPECT_EQ("ten", IntToEng(10));
    EXPECT_EQ("one hundred twenty one", IntToEng(121));
    EXPECT_EQ("one thousand thirty two", IntToEng(1032));
    EXPECT_EQ("eleven thousand forty three", IntToEng(11043));
    EXPECT_EQ("one million two hundred thousand", IntToEng(1200000));
}

/*
 * Unit test function for GCD.
 */
class GCDTest : public ::testing::Test {
  protected:
    GCDTest();

    virtual ~GCDTest();

    virtual void SetUp() {}

    virtual void TearDown() {}
};

TEST(GCDTest, Correctness) {
    EXPECT_EQ(1, GCD(3,5));
    EXPECT_EQ(2, GCD(4,10));
    EXPECT_EQ(4, GCD(4,4));
}

}  // namespace
