#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/div.hpp"
#include "../mocks/mock.hpp"

TEST(DivTest, DivEval_Ten_div_Five) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpFive();
    Div* test = new Div(op1, op2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 2.0);
}

TEST(DivTest, DivString_Ten_div_Five) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpFive();
    Div* test = new Div(op1, op2);
    std::string result = "(10/5)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(DivTest, DivEval_Five_div_Ten) {
    Base* op1 = new mockOpFive();
    Base* op2 = new mockOpTen();
    Div* test = new Div(op1, op2);
    EXPECT_NEAR(test->evaluate(), 0.5, 0.000001);
}

TEST(DivTest, DivString_Five_div_Ten) {
    Base* op1 = new mockOpFive();
    Base* op2 = new mockOpTen();
    Div* test = new Div(op1, op2);
    std::string result = "(5/10)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(DivTest, DivEval_One_div_Three) {
    Base* op1 = new mockOpOne();
    Base* op2 = new mockOpThree();
    Div* test = new Div(op1, op2);
    EXPECT_NEAR(test->evaluate(), 0.333333, 0.000001);
}

TEST(DivTest, DivString_One_div_Three) {
    Base* op1 = new mockOpOne();
    Base* op2 = new mockOpThree();
    Div* test = new Div(op1, op2);
    std::string result = "(1/3)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(DivTest, DivEval_Two_div_Seven) {
    Base* op1 = new mockOpTwo();
    Base* op2 = new mockOpSeven();
    Div* test = new Div(op1, op2);
    EXPECT_NEAR(test->evaluate(), 0.285714, 0.000001);
}

TEST(DivTest, DivEval_Three_div_Eight) {
    Base* op1 = new mockOpThree();
    Base* op2 = new mockOpEight();
    Div* test = new Div(op1, op2);
    EXPECT_NEAR(test->evaluate(), 0.375, 0.000001);
}

TEST(DivTest, DivEval_Five_div_Nine) {
    Base* op1 = new mockOpFive();
    Base* op2 = new mockOpNine();
    Div* test = new Div(op1, op2);
    EXPECT_NEAR(test->evaluate(), 0.555556, 0.000001);
}

TEST(DivTest, DivEval_Add_div_Pow) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockPow();
    Div* test = new Div(op1, op2);
    EXPECT_NEAR(test->evaluate(), 0.382716, 0.000001);
}

TEST(DivTest, DivString_Add_div_Pow) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockPow();
    Div* test = new Div(op1, op2);
    std::string result = "((13+18)/(3**4))";
    EXPECT_EQ(test->stringify(), result);
}

TEST(DivTest, DivEval_Mult_div_Nine) {
    Base* op1 = new mockMult();
    Base* op2 = new mockOpNine();
    Div* test = new Div(op1, op2);
    EXPECT_NEAR(test->evaluate(), 4.666667, 0.000001);
}

TEST(DivTest, DivString_Mult_div_Nine) {
    Base* op1 = new mockMult();
    Base* op2 = new mockOpNine();
    Div* test = new Div(op1, op2);
    std::string result = "((6*7)/9)";
    EXPECT_EQ(test->stringify(), result);
} 

TEST(DivTest, DivEval_div_Zero) {
    Base* op1 = new mockOpOne();
    Base* op2 = new mockOpZero();
    Div* test = new Div(op1, op2);
    EXPECT_THROW(test->evaluate(), const char*);
} 

TEST(DivTest, DivEval_NegFour_div_Seven) {
    Base* op1 = new mockOpNegFour();   
    Base* op2 = new mockOpSeven();
    Div* test = new Div(op1, op2);
    EXPECT_NEAR(test->evaluate(), -0.571428, 0.000001);
}

TEST(DivTest, DivEval_NegSeven_div_NegFour) {
    Base* op1 = new mockOpNegSeven();   
    Base* op2 = new mockOpNegFour();
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->evaluate(), 1.75);
}

#endif //__DIV_TEST_HPP__
