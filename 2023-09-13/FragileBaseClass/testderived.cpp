#include <iostream>
#include "base.h"

class Derived: public Base {
public:
    void inc2() override {
        inc1();
    }
};

int main() {
    Base b;
    b.inc1();
    b.inc1();
    b.inc1();
    std::cout << b.get() << '\n';

    std::cout << "----------------\n";

    Derived d;
    d.inc1();
    d.inc1();
    d.inc1();
    std::cout << d.get() << '\n';

    std::cout << "----------------\n";

    std::cout << "Program finished\n";
}

