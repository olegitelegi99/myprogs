#include <iostream>
#include <vector>
#include <cmath>

void insert_sort(std::vector <double> &array, int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && array[j] < array[j - 1]) {
            std::swap(array[j - 1], array[j]);
            --j;
        }
    }
}


int main() {
    int n;
    std::cout << "Enter the array size: " << std::endl;
    std::cin >> n;

    std::vector <double> a;
    std::cout << "Enter the array elements (all numbers are positive): " << std::endl;
    for (int i = 0; i < n; ++i) {
        double some_num;
        std::cin >> some_num;
        a.push_back(some_num);
    }


    int k = 0;
    std::vector <double > triangle;
    for (int i = 1; i < n - 1; ++i) {
        if ((a[i] < a[i - 1] + a[i + 1]) && (a[i + 1] < a[i] + a[i - 1])
            && (a[i - 1] < a[i] + a[i + 1])) {
                double p = (a[i - 1] + a[i] + a[i + 1])/2;
                double S = sqrt(p * (p - a[i]) * (p - a[i - 1]) * (p - a[i + 1]));
                triangle.push_back(S);
                ++k;
        }
    }

    std::cout << "the number of the triangles: " << k << std::endl;
    if (k == 0) {
        std::cout << "There are no triangles with such length! " << std::endl;
    }
    else {
        std::cout << "We see the triangles with this square: " << std::endl;
        for (int i = 0; i < k; ++i) {
            std::cout << triangle[i] <<" " << std::endl;
        }
    }

    insert_sort(triangle, k);


    std::cout << "Sorted array of the triangle's square: " << std::endl;
    for(double x : triangle) {
        std::cout << x << "\n";
    }

    return 0;

}









