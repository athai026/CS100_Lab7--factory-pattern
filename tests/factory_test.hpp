#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include "gtest/gtest.h"
#include "../src/op.hpp"
#include "../src/mult.hpp"
#include "../src/div.hpp"
#include "../src/add.hpp"
#include "../src/pow.hpp"
#include "../src/sub.hpp"
#include "../src/factory.hpp"

TEST(FactoryTest, SimpleAdd) {
	Factory test;
	char* args[]={"3","+","4"};
	Base* op=test.parse(args,3);
	EXPECT_DOUBLE_EQ(op->evaluate(),7);
}

TEST(FactoryTest, SimpleSub) {
	Factory test;
	char* args[]={"7","-","4"};
	Base* op=test.parse(args,3);
	EXPECT_DOUBLE_EQ(op->evaluate(),3);
}

TEST(FactoryTest, SimpleDiv) {
	Factory test;
	char* args[]={"12","/","4"};
	Base* op=test.parse(args,3);
	EXPECT_DOUBLE_EQ(op->evaluate(),3);
}


TEST(FactoryTest, SimpleMult) {
	Factory test;
	char* args[]={"3","*","4"};
	Base* op=test.parse(args,3);
	EXPECT_DOUBLE_EQ(op->evaluate(),12);
}

TEST(FactoryTest, SimplePow) {
	Factory test;
	char* args[]={"3","**","2"};
	Base* op=test.parse(args,3);
	EXPECT_DOUBLE_EQ(op->evaluate(),9);
}

TEST(FactoryTest, AddSub) {
	Factory test;
	char* args[]={"3","+","4","-","5"};
	Base* op=test.parse(args,5);
	EXPECT_DOUBLE_EQ(op->evaluate(),2);
}

TEST(FactoryTest, MultAdd) {
	Factory test;
	char* args[]={"3","*","4","+","2"};
	Base* op=test.parse(args,3);
	EXPECT_DOUBLE_EQ(op->evaluate(),14);
}


TEST(FactoryTest, MultDiv) {
	Factory test;
	char* args[]={"3","*","4","/","3"};
	Base* op=test.parse(args,3);
	EXPECT_DOUBLE_EQ(op->evaluate(),4);
}

#endif //__FACTORY_TEST_HPP__
