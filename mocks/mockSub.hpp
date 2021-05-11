#ifndef __MOCK_SUB__
#define __MOCK_SUB__

#include "../base.hpp"

class mockSub : public Base {
    public:
        mockSub() {}
        virtual double evaluate() {return 5;}
        virtual std::string stringify() {return "(18-13)";}
};

#endif //__MOCK_SUB__
