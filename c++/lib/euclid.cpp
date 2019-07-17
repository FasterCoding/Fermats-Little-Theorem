#include "euclid.hpp"

int Euclid::gcd(int a, int b) {
    
    int tmp;
    while (b > 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    return a;
}

std::tuple<int, int> Euclid::extgcd(int a, int b) {
    // Return in x and y form a*x + b*y
    // x is the inverse of a
    // y is the inverse if b
    // There is only an inverse if gcd(a,b) == 1
    if (a == 0) {
        return std::make_tuple(0, 1);
    }else {
        std::tuple<int, int> result = extgcd(b % a, a);

        int x1 = std::get<1>(result) - int(b / a) * std::get<0>(result);
        int y1 = std::get<0>(result);

        return std::make_tuple(x1, y1);
    }
}

int Euclid::mod(int a, int b) {
    return ((a%b)+b) % b;
}

int Euclid::moduloInverseOf(int a, int b) {
    std::tuple<int, int> inv = extgcd(a, b);
    return mod(std::get<0>(inv), b);
}