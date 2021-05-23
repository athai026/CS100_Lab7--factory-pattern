#ifndef __MIXED_TEST_HPP__
#define __MIXED_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/add.hpp"
#include "../src/sub.hpp"
#include "../src/mult.hpp"
#include "../src/div.hpp"
#include "../src/pow.hpp"
#include "../src/rand.hpp"


TEST(MixedTest, test1) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* five = new Op(5);
    Base* nine = new Op(9);
    Base* add = new Add(three, five);
    Base* sub = new Sub(add, nine);
    Base* div = new Div(sub, two);
    std::string result = "(((3+5)-9)/2)";

    EXPECT_DOUBLE_EQ(div->evaluate(), -0.5);
    EXPECT_EQ(div->stringify(), result);
}

TEST(MixedTest, test2) {
    Base* two = new Op(2);
    Base* four = new Op(4);
    Base* eight = new Op(8);
    Base* pow = new Pow(four, two);
    Base* div = new Div(eight, four);
    Base* add = new Add(pow, div);
    std::string result = "((4**2)+(8/4))";

    EXPECT_DOUBLE_EQ(add->evaluate(), 18);
    EXPECT_EQ(add->stringify(), result);
}

TEST(MixedTest, test3) {
    Base* four = new Op(4);
    Base* seven = new Op(7);
    Base* nine = new Op(9);
    Base* ten = new Op(10);
    Base* seventeen = new Op(17);
    Base* sub1 = new Sub(seven, four);
    Base* mult = new Mult(sub1, nine);
    Base* sub2 = new Sub(seventeen, ten);
    Base* div  = new Div(mult, sub2);
    std::string result = "(((7-4)*9)/(17-10))";

    EXPECT_NEAR(div->evaluate(), 3.857143, 0.000001);
    EXPECT_EQ(div->stringify(), result);
}

TEST(MixedTest, test4) {
    Base* three = new Op(3);
    Base* six = new Op(6);
    Base* eight = new Op(8);
    Base* sub1 = new Sub(three, six);
    Base* sub2 = new Sub(eight, eight);
    Base* div = new Div(sub1, sub2);
    std::string result = "((3-6)/(8-8))";

    EXPECT_THROW(div->evaluate(), const char*);
    EXPECT_EQ(div->stringify(), result);
}

TEST(MixedTest, test5) {
    Base* six = new Op(6);
    Base* eight = new Op(8);
    Base* sub = new Sub(eight, eight);
    Base* pow = new Pow(sub, six);
    std::string result = "((8-8)**6)";

    EXPECT_DOUBLE_EQ(pow->evaluate(), 0);
    EXPECT_EQ(pow->stringify(), result);
}

TEST(MixedTest, test6) {
    Base* negOne = new Op(-1);
    Base* eight = new Op(8);
    Base* ten = new Op(10);
    Base* eleven = new Op(11);
    Base* twentyOne = new Op(21);
    Base* add = new Add(ten, eleven);
    Base* sub = new Sub(add, twentyOne);
    Base* mult = new Mult(negOne, eight);
    Base* pow = new Pow(sub, mult);
    std::string result = "(((10+11)-21)**(-1*8))";

    EXPECT_THROW(pow->evaluate(), const char*);
    EXPECT_EQ(pow->stringify(), result);
}

TEST(MixedTest, test7) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* four = new Op(4);
    Base* six = new Op(6);
    Base* div = new Div(four, three);
    Base* mult = new Mult(two, six);
    Base* add =  new Add(div, mult);
    std::string result = "((4/3)+(2*6))";

    EXPECT_NEAR(add->evaluate(), 13.333333, 0.000001);
    EXPECT_EQ(add->stringify(), result);
}

#endif 
