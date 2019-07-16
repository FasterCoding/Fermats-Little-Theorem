#include <stdexcept>
#include <iostream>

#include "fermat/fermat.hpp"

int main(int argc, char const *argv[]) {
    
    try {
        int modinv = Fermat::modInverse(*argv[1], *argv[2]);
        std::cout << "modular inverse of " << *argv[1] << "^" << *argv[2] << " is " << modinv << std::endl;
    } catch (std::exception ex) {
        std::cerr << ex.what() << std::endl;
    }

    return 0;
}
