#ifndef __MOCK_OP_FOUR__
#define __MOCK_OP_FOUR__

#include "../base.hpp"

class mockOpFour : public Base {
    public: 
        mockOpFour() {}
        virtual double evaluate() {return 4;}
        virtual std::string stringify() {return "4";}
};

#endif //__MOCK_OP_FOUR__
