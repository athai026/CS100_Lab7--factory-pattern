#ifndef __MOCK_OP_TEN__
#define __MOCK_OP_TEN__

#include "../base.hpp"

class mockOpTen : public Base {
    public: 
        mockOpTen() {}
        virtual double evaluate() {return 10;}
        virtual std::string stringify() {return "10";}
};

#endif
