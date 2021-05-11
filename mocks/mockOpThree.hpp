#ifndef __MOCK_OP_THREE__
#define __MOCK_OP_THREE__

#include "../base.hpp" 

class mockOpThree : public Base {
    public: 
        mockOpThree() {}
        virtual double evaluate() {return 3;}
        virtual std::string stringify() {return "3";}
};

#endif // __MOCK_OP_THREE__
