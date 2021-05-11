#ifndef __MOCK_OP_NINE__
#define __MOCK_OP_NINE__

#include "../base.hpp"

class mockOpNine : public Base {
    public: 
        mockOpNine() {}
        virtual double evaluate() {return 9;}
        virtual std::string stringify() {return "9";}
};

#endif //__MOCK_OP_NINE__
