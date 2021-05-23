#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/mult.hpp"
#include "../mocks/mock.hpp"

TEST(MultTest, MultEval_Ten_times_NegSeven) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegSeven();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), -70);
}

TEST(MultTest, MultEval_NegSeven_times_Ten) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpTen();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), -70);
}

TEST(MultTest, MultString_Ten_times_NegSeven) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegSeven();
    Mult* test = new Mult(op1, op2);
    std::string result = "(10*-7)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultString_NegSeven_times_Ten) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpTen();
    Mult* test = new Mult(op1, op2);
    std::string result = "(-7*10)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultEval_Sub_times_Five) {
    Base* op1 = new mockSub();
    Base* op2 = new mockOpFive();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 25);
}

TEST(MultTest, MultString_Sub_times_Five) {
    Base* op1 = new mockSub();
    Base* op2 = new mockOpFive();
    Mult* test = new Mult(op1, op2);
    std::string result = "((18-13)*5)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultEval_Add_times_Pow) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockPow();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 2511);
}

TEST(MultTest, MultString_Add_times_Pow) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockPow();
    Mult* test = new Mult(op1, op2);
    std::string result = "((13+18)*(3**4))";
    EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultEval_Mult_times_Div) {
    Base* op1 = new mockMult();
    Base* op2 = new mockDiv();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 336);
}

TEST(MultTest, MultString_Mult_times_Div) {
    Base* op1 = new mockMult();
    Base* op2 = new mockDiv();
    Mult* test = new Mult(op1, op2);
    std::string result = "((6*7)*(72/9))";
    EXPECT_EQ(test->stringify(), result);
}

TEST(MultTest, MultEval_NegSeven_times_NegFour) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpNegFour();
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 28);
}

TEST(MultTest, MultString_NegSeven_times_NegFour) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpNegFour();
    Mult* test = new Mult(op1, op2);
    std::string result = "(-7*-4)";
    EXPECT_EQ(test->stringify(), result);
}

#endif
