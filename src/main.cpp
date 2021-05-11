#include <iostream>

#include "factory.hpp"

using namespace std;

int main(int argc, char** argv) {
    int i = 1;
    while (i < argc) {
        cout << argv[i];
        i++;
    }

    cout << endl;

    return 0;
}
