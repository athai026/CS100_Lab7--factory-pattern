#ifndef __MOCK_ADD__
#define __MOCK_ADD__

#include "../base.hpp"

class mockAdd : public Base {
    public: 
        mockAdd() {}
        virtual double evaluate() {return 31;}
        virtual std::string stringify() {return "(13+18)";}
};

#endif //__MOCK_ADD__
