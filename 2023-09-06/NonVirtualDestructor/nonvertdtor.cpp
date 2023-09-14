#include <iostream>

class Widget {
    static int w_number;
    int serial_number;
public:
    Widget() : serial_number{++w_number} {
        std::cout << "Making Widget #" << serial_number << '\n';
    }
    ~Widget() {
        std::cout << "Destroying Widget #" << serial_number << '\n';
    }
};

class Gadget : public Widget {
public:
    Gadget() : Widget() {
        std::cout << "Gadget created\n";
    }
    ~Gadget() {
        std::cout << "Gadget destroyed\n";
    }
};

int Widget::w_number = 0;

int main() {
    Widget w;
    Gadget g;
    (void)w;
    (void)g;
}
