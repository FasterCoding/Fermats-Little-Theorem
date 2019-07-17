#ifndef _FERMATS_LITTLE_THEOREM_H_
#define _FERMATS_LITTLE_THEOREM_H_

#include <stdexcept>

#include "../lib/euclid.hpp"

class Fermat {

private:

    static int modPower(const int& a, const int& b, const int& mod);

public:

    static int modInverse(const int& a, const int& mod);

};

#endif