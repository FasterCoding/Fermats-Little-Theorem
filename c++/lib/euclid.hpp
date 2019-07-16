#ifndef __EUCLID_H_
#define __EUCLID_H_

#include <tuple>

class Euclid {

private:

    Euclid();

public:

    static int gcd(int a, int b);
    static std::tuple<int, int> extgcd(int a, int b);
    static int moduloInverseOf(int a, int b);
    static int mod(int a, int b);
};

#endif