#ifndef __MOCK_OP_EIGHT__
#define __MOCK_OP_EIGHT__

#include "../base.hpp"

class mockOpEight : public Base {
    public: 
        mockOpEight() {}
        virtual double evaluate() {return 8;}
        virtual std::string stringify() {return "8";}
};

#endif //__MOCK_OP_EIGHT__
