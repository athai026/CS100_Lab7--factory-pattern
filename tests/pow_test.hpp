#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/pow.hpp"
#include "../mocks/mock.hpp"

TEST(PowTest, PowEval_Ten_power_NegFour) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegFour();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.0001);
}

TEST(PowTest, PowString_Ten_power_NegFour) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegFour();
    Pow* test = new Pow(op1, op2);
    std::string result = "(10**-4)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(PowTest, PowEval_Sub_power_Five) {
    Base* op1 = new mockSub();
    Base* op2 = new mockOpFive();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 3125);
}

TEST(PowTest, PowString_Sub_power_Five) {
    Base* op1 = new mockSub();
    Base* op2 = new mockOpFive();
    Pow* test = new Pow(op1, op2);
    std::string result = "((18-13)**5)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(PowTest, PowEval_Mult_power_Zero) {
    Base* op1 = new mockMult();
    Base* op2 = new mockOpZero();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowString_Mult_power_Zero) {
    Base* op1 = new mockMult();
    Base* op2 = new mockOpZero();
    Pow* test = new Pow(op1, op2);
    std::string result = "((6*7)**0)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(PowTest, PowEval_Zero_power_NegFour) {
    Base* op1 = new mockOpZero();
    Base* op2 = new mockOpNegFour();
    Pow* test = new Pow(op1, op2);
    EXPECT_THROW(test->evaluate(), const char*);
}

TEST(PowTest, PowEval_Zero_power_Zero) {
    Base* op1 = new mockOpZero();
    Base* op2 = new mockOpZero();
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 1);
}

#endif
