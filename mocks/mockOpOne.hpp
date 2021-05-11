#ifndef __MOCK_OP_ONE__
#define __MOCK_OP_ONE__

#include "../base.hpp"

class mockOpOne : public Base {
    public: 
        mockOpOne() {}
        virtual double evaluate() {return 1;}
        virtual std::string stringify() {return "1";}
};

#endif //__MOCK_OP_ONE__

