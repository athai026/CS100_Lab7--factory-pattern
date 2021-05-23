#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNeg) {
    Op* test = new Op(-22); 
    EXPECT_EQ(test->evaluate(), -22);
}

TEST(OpTest, OpStringEight) {
    Op* test = new Op(8);
    std::string eight = "8";
    EXPECT_EQ(test->stringify(), eight);
}

TEST(OpTest, OpStringZero) {
    Op* test = new Op(0);
    std::string zero = "0";
    EXPECT_EQ(test->stringify(), zero);
}

TEST(OpTest, OpStringNeg) {
    Op* test = new Op(-54);
    std::string neg_fifty_four = "-54";
    EXPECT_EQ(test->stringify(), neg_fifty_four);
}

#endif //__OP_TEST_HPP__
