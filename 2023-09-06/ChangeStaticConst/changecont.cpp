#include <iostream>

class Widget {
    static int num;
    int val;
public:
    Widget(int v) : val(v) {}
    void set(int n) {
        val = n;
    }

    void set2(int n) const {
        num = n;
    }

    int getVal() const {
        return val;
    }

    int getNum() const {
        return num;
    }
};

int Widget::num = 5;

int main() {
    Widget w{100};
    std::cout << w.getVal() << ", " << w.getNum() << '\n';
    w.set2(88);
    std::cout << w.getVal() << ", " << w.getNum() << '\n';
    
}
