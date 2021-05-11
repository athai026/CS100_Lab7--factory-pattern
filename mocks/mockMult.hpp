#ifndef __MOCK_MULT__
#define __MOCK_MULT__

#include "../base.hpp"

class mockMult : public Base {
    public: 
        mockMult() {}
        virtual double evaluate() {return 42;}
        virtual std::string stringify() {return "(6*7)";}
};

#endif //__MOCK_MULT__
