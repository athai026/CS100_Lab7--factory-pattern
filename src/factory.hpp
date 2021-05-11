#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "rand.hpp"

class Factory {
    public:
        Factory() {};
        Base* parse(char** input, int length) {
            int i = 0;
            Base* root = nullptr;

            return root;
        }
};

#endif //__FACTORY_HPP__
