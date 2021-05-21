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
#include <iostream>
#include <cctype>

using namespace std;

class Factory {
    public:
        Factory() {};
        Base* parse(char** input, int length) {
            int i = 1;
            Base* root = nullptr;
            Base* left;

            while (i < length) {
                string in = static_cast<string>(input[i]);
                string next = static_cast<string>(input[i+1]);
                if (isdigit(in.at(0))) {
                    left = new Op(stod(input[i]));
                }
                else if (in == "+") {
                    if (isdigit(next.at(0))) {
                        root = new Add(left, new Op(stod(input[++i])));
                        left = root;
                    }
                    else {
                        return nullptr;
                    }
                }
                else if (in == "-") {
                    if (isdigit(next.at(0))) {
                        root = new Sub(left, new Op(stod(input[++i])));
                        left = root;
                    }
                    else {
                        return nullptr;
                    }
                }
                else if (in == "*") {
                    if (isdigit(next.at(0))) {
                        root = new Mult(left, new Op(stod(input[++i])));
                        left = root;
                    }
                    else {
                        return nullptr;
                    }
                }
                else if (in == "/") {
                    if (isdigit(next.at(0))) {
                        root = new Div(left, new Op(stod(input[++i])));
                        left = root;
                    }
                    else {
                        return nullptr;
                    }
                }
                else if (in == "**") {
                    if (isdigit(next.at(0))) {
                        root = new Pow(left, new Op(stod(input[++i])));
                        left = root;
                    }
                    else {
                        return nullptr;
                    }
                }
                else {
                    cout << "Error" << endl;
                    return nullptr;
                }
                i++;
            }
            return root;
        }
};

#endif //__FACTORY_HPP__
