#ifndef __MOCK_POW__
#define __MOCK_POW__

#include "../base.hpp"

class mockPow : public Base {
    public: 
        mockPow() {}
        virtual double evaluate() {return 81;}
        virtual std::string stringify() {return "(3**4)";}
};

#endif //__MOCK_POW__

