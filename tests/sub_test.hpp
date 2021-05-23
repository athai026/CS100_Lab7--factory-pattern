#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/sub.hpp"
#include "../mocks/mock.hpp"

TEST(SubTest, SubEval_Ten_minus_Five) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpFive();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), 5);
}

TEST(SubTest, SubEval_Five_minus_Ten) {
    Base* op1 = new mockOpFive();
    Base* op2 = new mockOpTen();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), -5);
}

TEST(SubTest, SubString_Ten_minus_Five) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpFive();
    Sub* test = new Sub(op1, op2);
    std::string result = "(10-5)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(SubTest, SubString_Five_minus_Ten) {
    Base* op1 = new mockOpFive();
    Base* op2 = new mockOpTen();
    Sub* test = new Sub(op1, op2);
    std::string result = "(5-10)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(SubTest, SubEval_Add_minus_Five) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockOpFive();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), 26);
}

TEST(SubTest, SubString_Add_minus_Five) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockOpFive();
    Sub* test = new Sub(op1, op2);
    std::string result = "((13+18)-5)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(SubTest, SubEval_Add_minus_Pow) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockPow();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), -50);
}

TEST(SubTest, SubString_Add_minus_Pow) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockPow();
    Sub* test = new Sub(op1, op2);
    std::string result = "((13+18)-(3**4))";
    EXPECT_EQ(test->stringify(), result);
}

TEST(SubTest, SubEval_Mult_minus_Div) {
    Base* op1 = new mockMult();
    Base* op2 = new mockDiv();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), 34);
}

TEST(SubTest, SubString_Mult_minus_Div) {
    Base* op1 = new mockMult();
    Base* op2 = new mockDiv();
    Sub* test = new Sub(op1, op2);
    std::string result = "((6*7)-(72/9))";
    EXPECT_EQ(test->stringify(), result);
}

TEST(SubTest, SubEval_NegSeven_minus_NegFour) {
    Base* op1 = new mockOpNegSeven();   
    Base* op2 = new mockOpNegFour();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), -3);
}

TEST(SubTest, SubString_NegSeven_minus_NegFour) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpNegFour();
    Sub* test = new Sub(op1, op2);
    std::string result = "(-7--4)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(SubTest, SubEval_NegFour_minus_NegSeven) {
    Base* op1 = new mockOpNegFour();
    Base* op2 = new mockOpNegSeven();
    Sub* test = new Sub(op1, op2);
    EXPECT_EQ(test->evaluate(), 3);
}

#endif //__SUB_TEST_HPP__
