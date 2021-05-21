#include <iostream>

#include "factory.hpp"

using namespace std;

int main(int argc, char** argv) {
    //int i = 1;
    //while (i < argc) {
    //    cout << argv[i];
    //    i++;
    //}

    Factory* f = new Factory();
    Base* output = f->parse(argv, argc);
    if (output == nullptr) {
        cout << "got nullptr" << endl;
    }
    else {
        cout << "string: " << output->stringify() << endl;
        cout << "answer: " << output->evaluate() << endl;
    }
    cout << endl;

    return 0;
}
