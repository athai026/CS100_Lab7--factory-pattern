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
	char* args[]={"./calculator","3","+","4"};
	Base* op=test.parse(args,4);
	string result = "(3+4)";
	EXPECT_DOUBLE_EQ(op->evaluate(),7);
	EXPECT_EQ(op->stringify(), result);
}

TEST(FactoryTest, SimpleSub) {
	Factory test;
	char* args[]={"./calculator","7","-","4"};
	Base* op=test.parse(args,4);
	string result = "(7-4)";
	EXPECT_DOUBLE_EQ(op->evaluate(),3);
	EXPECT_EQ(op->stringify(), result);
}

TEST(FactoryTest, SimpleDiv) {
	Factory test;
	char* args[]={"./calculator","12","/","4"};
	Base* op=test.parse(args,4);
	string result = "(12/4)";
	EXPECT_DOUBLE_EQ(op->evaluate(),3);
	EXPECT_EQ(op->stringify(), result);
}


TEST(FactoryTest, SimpleMult) {
	Factory test;
	char* args[]={"./calculator","3","*","4"};
	Base* op=test.parse(args,4);
	string result = "(3*4)";
	EXPECT_DOUBLE_EQ(op->evaluate(),12);
	EXPECT_EQ(op->stringify(), result);
}

TEST(FactoryTest, SimplePow) {
	Factory test;
	char* args[]={"./calculator","3","**","2"};
	Base* op=test.parse(args,4);
	string result = "(3**2)";
	EXPECT_DOUBLE_EQ(op->evaluate(),9);
	EXPECT_EQ(op->stringify(), result);
}

TEST(FactoryTest, AddSub) {
	Factory test;
	char* args[]={"./calculator","3","+","4","-","5"};
	Base* op=test.parse(args,6);
	string result = "((3+4)-5)";
	EXPECT_DOUBLE_EQ(op->evaluate(),2);
	EXPECT_EQ(op->stringify(), result);
}

TEST(FactoryTest, MultAdd) {
	Factory test;
	char* args[]={"./calculator","3","*","4","+","2"};
	Base* op=test.parse(args,6);
	string result = "((3*4)+2)";
	EXPECT_DOUBLE_EQ(op->evaluate(),14);
	EXPECT_EQ(op->stringify(), result);
}


TEST(FactoryTest, MultDiv) {
	Factory test;
	char* args[]={"./calculator","3","*","4","/","3"};
	Base* op=test.parse(args,6);
	string result = "((3*4)/3)";
	EXPECT_DOUBLE_EQ(op->evaluate(),4);
	EXPECT_EQ(op->stringify(), result);
}

TEST(FactoryTest, MultAddError) {
	Factory test;
	char* args[]={"./calculator","3","*","+","4"};
	Base* op=test.parse(args,5);
	EXPECT_EQ(test.parse(args,5), nullptr);
}

TEST(FactoryTest, AddError) {
	Factory test;
	char* args[]={"./calculator","a","+","4"};
	Base* op=test.parse(args,4);
	EXPECT_EQ(test.parse(args,4), nullptr);
}

TEST(FactoryTest, IncompleteError) {
	Factory test;
	char* args[]={"./calculator",3","+"};
	Base* op=test.parse(args,3);
	EXPECT_EQ(test.parse(args,3), nullptr);
}

TEST(FactoryTest, GibberishError) {
	Factory test;
	char* args[]={"./calculator","cs100","makes","me","cry"};
	Base* op=test.parse(args5);
	EXPECT_EQ(test.parse(args,5), nullptr);
}

#endif //__FACTORY_TEST_HPP__
