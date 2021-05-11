#ifndef __MOCK_OP_SEVEN__
#define __MOCK_OP_SEVEN__

#include "../base.hpp"

class mockOpSeven : public Base {
    public: 
        mockOpSeven() {}
        virtual double evaluate() {return 7;}
        virtual std::string stringify() {return "7";}
};

#endif //__MOCK_OP_SEVEN__
