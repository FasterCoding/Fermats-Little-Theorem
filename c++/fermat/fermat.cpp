#include "fermat.hpp"

int Fermat::modPower(const int& a, const int& b, const int& mod) {

    if (b == 0) {
        return 1;
    }

    int p = modPower(a, b / 2, mod) % mod;
    p = (p * p) % mod;

    int result = (b % 2 == 0) ? p : (a * p) % mod;

    return result;
}

int Fermat::modInverse(const int& a, const int& mod) {

    int gcd = Euclid::gcd(a, mod);

    if (gcd == 1) {
        return modPower(a, mod - 2, mod);
    }else {
        throw std::invalid_argument{"There is no modular inverse!"};
    }

}