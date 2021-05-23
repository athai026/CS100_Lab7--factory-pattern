#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/rand.hpp"

TEST(RandTest, RandEvaluateGE0) {
    Rand* test = new Rand();
    EXPECT_GE(test->evaluate(), 0);
}

TEST(RandTest, RandEvaluateLT100) {
    Rand* test = new Rand();
    EXPECT_LT(test->evaluate(), 100);
}

TEST(RandTest, RandStringifyNE) {
    Rand* test = new Rand();
    std::string temp = "101";
    EXPECT_NE(test->stringify(), temp);
}

#endif //__RAND_TEST_HPP__
