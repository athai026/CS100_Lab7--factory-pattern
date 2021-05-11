#ifndef __MOCK_OP_NEG_SEVEN__
#define __MOCK_OP_NEG_SEVEN__

#include "../base.hpp"

class mockOpNegSeven : public Base {
    public: 
        mockOpNegSeven() {}
        virtual double evaluate() {return -7;}
        virtual std::string stringify() {return "-7";}
};

#endif //__MOCK_OP_NEG_SEVEN__
