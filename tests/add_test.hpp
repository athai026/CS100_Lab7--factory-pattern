#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/add.hpp"
#include "../mocks/mock.hpp"

TEST(AddTest, AddEval_Ten_plus_NegSeven) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegSeven();
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(AddTest, AddEval_NegSeven_plus_Ten) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpTen();
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(AddTest, AddString_Ten_plus_NegSeven) {
    Base* op1 = new mockOpTen();
    Base* op2 = new mockOpNegSeven();
    Add* test = new Add(op1, op2);
    std::string result = "(10+-7)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(AddTest, AddString_NegSeven_plus_Ten) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpTen();
    Add* test = new Add(op1, op2);
    std::string result = "(-7+10)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(AddTest, AddEval_Sub_plus_Five) {
    Base* op1 = new mockSub();
    Base* op2 = new mockOpFive();
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), 10);
}

TEST(AddTest, AddString_Sub_plus_Five) {
    Base* op1 = new mockSub();
    Base* op2 = new mockOpFive();
    Add* test = new Add(op1, op2);
    std::string result = "((18-13)+5)";
    EXPECT_EQ(test->stringify(), result);
}

TEST(AddTest, AddEval_Add_plus_Pow) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockPow();
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), 112);
}

TEST(AddTest, AddString_Add_plus_Pow) {
    Base* op1 = new mockAdd();
    Base* op2 = new mockPow();
    Add* test = new Add(op1, op2);
    std::string result = "((13+18)+(3**4))";
    EXPECT_EQ(test->stringify(), result);
}

TEST(AddTest, AddEval_Mult_plus_Div) {
    Base* op1 = new mockMult();
    Base* op2 = new mockDiv();
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), 50);
}

TEST(AddTest, AddString_Mult_plus_Div) {
    Base* op1 = new mockMult();
    Base* op2 = new mockDiv();
    Add* test = new Add(op1, op2);
    std::string result = "((6*7)+(72/9))";
    EXPECT_EQ(test->stringify(), result);
}

TEST(AddTest, AddEval_NegSeven_plus_NegFour) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpNegFour();
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), -11);
}

TEST(AddTest, AddString_NegSeven_plus_NegFour) {
    Base* op1 = new mockOpNegSeven();
    Base* op2 = new mockOpNegFour();
    Add* test = new Add(op1, op2);
    std::string result = "(-7+-4)";
    EXPECT_EQ(test->stringify(), result);
}

#endif //__ADD_TEST_HPP__
