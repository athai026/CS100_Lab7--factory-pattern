#ifndef __MOCK_OP_FIVE__
#define __MOCK_OP_FIVE__

#include "../base.hpp" 

class mockOpFive : public Base {
    public: 
        mockOpFive() {}
        virtual double evaluate() {return 5;}
        virtual std::string stringify() {return "5";}
};

#endif
        
