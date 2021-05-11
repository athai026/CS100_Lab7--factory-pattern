#ifndef __MOCK_OP_ZERO__
#define __MOCK_OP_ZERO__

#include "../base.hpp" 

class mockOpZero : public Base {
    public: 
        mockOpZero() {}
        virtual double evaluate() {return 0;}
        virtual std::string stringify() {return "0";}
};

#endif //__MOCK_OP_ZERO__
