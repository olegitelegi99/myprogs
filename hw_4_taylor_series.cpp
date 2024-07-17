#include <iostream>
#include <cmath>

int main() {
    int  N;
    std::cout << "enter N: " << std::endl;
    std::cin >> N;
    double x, eps;
    std::cout << "enter x: " << std::endl;
    std::cin >> x;
    if (x > -1 && x < 1) {
        std::cout << "x from (-1; 1). That is ok " << std::endl;
    }
    std::cout << "enter eps: " << std::endl;
    std::cin >> eps;

    double Sum = 0;
    for(int i = 1; i <= N; ++i) {
        double a = - pow(x, i) / i;
        Sum = Sum + a;
    }

    std::cout << "the sum of the " << N << " terms is: " << Sum << std::endl;

    int k = 0;
    double Sum_1 = 0;
    while ((pow(x, k + 1) / (k + 1)) > eps || (pow(x, k + 1)) / (k + 1) < -eps) {
        Sum_1 = Sum_1 - pow(x, k + 1) / (k + 1);
        ++k;
    }

    std::cout << "sum of the terms, whitch more than eps " << Sum_1 << std::endl;
    std::cout << "analytic function value " << log(1 - x);

    return 0;

}
