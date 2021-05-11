#ifndef __MOCK_OP_NEG_FOUR__
#define __MOCK_OP_NEG_FOUR__

#include "../base.hpp"

class mockOpNegFour : public Base {
    public: 
        mockOpNegFour() {}
        virtual double evaluate() {return -4;}
        virtual std::string stringify() {return "-4";}
};

#endif //__MOCK_OP_NEG_FOUR__
