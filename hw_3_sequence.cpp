#include <iostream>
#include <cmath>

int main() {
    double b;
    std::cout << "Enter some positive number: " << std::endl;
    std::cin >> b;
    double a1 = b, a2 = b;

    int i = 1;
    while (a2 > 0) {
        double tmp = a1;
        a1 = a2;
        a2 = tmp - 1 / sqrt(1 + i);
        ++i;
    }

    std::cout << "the first negative number in the sequence: " << a2 << std::endl;
    return 0;
}