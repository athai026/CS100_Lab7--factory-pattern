#ifndef __MOCK_OP_SIX__
#define __MOCK_OP_SIX__

#include "../base.hpp"

class mockOpSix : public Base {
    public: 
        mockOpSix() {}
        virtual double evaluate() {return 6;}
        virtual std::string stringify() {return "6";}
};

#endif //__MOCK_OP_SIX__
