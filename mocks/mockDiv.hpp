#ifndef __MOCK_DIV__
#define __MOCK_DIV__

#include "../base.hpp"

class mockDiv : public Base {
    public: 
        mockDiv() {}
        virtual double evaluate() {return 8;}
        virtual std::string stringify() {return"(72/9)";}
};

#endif //__MOCK_DIV__

