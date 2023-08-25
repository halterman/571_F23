#include <iostream>

int add(int m, int n) {
    return m + n;
}

int main() {
    int num1 = 5, num2 = 7;
    std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << '\n';
}