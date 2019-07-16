#include <stdexcept>
#include <iostream>

#include "fermat/fermat.hpp"

void checkInvalidArguments(const int& argc, char const *argv[]){

    if (argc == 1) {
        throw std::invalid_argument{"No input arguments!"};
    }else if (argc == 2) {
        throw std::invalid_argument{"Not enough input arguments!"};
    }

    bool secondArgumentIsZero = (atoi(argv[2]) == 0);
    if (secondArgumentIsZero) {
        throw std::invalid_argument{"Second number do not have to be 0"};
    }
}

int main(int argc, char const *argv[]) {

    int a, m;

    try {

        checkInvalidArguments(argc, argv);

        a = atoi(argv[1]);
        m = atoi(argv[2]);

    } catch(std::exception& ex) {
        std::cerr << ex.what() << std::endl;

        return 1;
    }
    
    
    try {
        int modinv = Fermat::modInverse(a, m);
        std::cout << "modular inverse of " << a << " mod " << m << " is " << modinv << std::endl;
    } catch (std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    return 0;
}
