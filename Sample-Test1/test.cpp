#include "pch.h"
#include "../TDD_1_PrimeFactors/PrimeFactor.cpp"
#include <vector>

using namespace std;

class PrimeFactorTest : public testing::Test
{
protected:
    PrimeFactor primeFactor;
    vector<int> expected;
};

TEST_F(PrimeFactorTest, Of1) {
    expected = { };
    EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFactorTest, Of2) {
    expected = { 2 };
    EXPECT_EQ(expected, primeFactor.of(2));
}