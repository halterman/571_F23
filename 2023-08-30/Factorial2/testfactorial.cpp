#include <iostream>
#include <iomanip>
#include "factorial.h"

int main() {
    for (int i = -2; i < 16; i++)
        std::cout << std::setw(3) << i << ": " << std::setw(10) << factorial(i) << '\n';
}

