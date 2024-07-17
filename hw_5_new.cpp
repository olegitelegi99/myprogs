#include <iostream>
#include <vector>
#include <cmath>

struct coordinate {
    int x;
    int y;
};

int main() {
    //here we enter the size of the array struct coordinate
    int n;
    std::cout << "Enter the quantity of the coordinates: " << std::endl;
    std::cin >> n;


    //here we fill a set of coordinates
    std::vector <coordinate> arr;
    coordinate spot_coord;
    std::cout << "Enter the spot's coordinates: " << std::endl;
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter the coordinate of the: " << i + 1 << " spot " << std::endl;
        int some_x;
        int some_y;
        std::cin >> some_x >> some_y;
        spot_coord.x = some_x;
        spot_coord.y = some_y;
        arr.push_back(spot_coord);
    }

    double d;
    std::vector <double> dist;
    for (int i = 0; i < n; ++i) {
        if (((arr[i].x >= 0) && (arr[i].x <= 3)) && ((pow(arr[i].x, 2) + pow(arr[i].y, 2) <= 9))) {
            if ((pow(arr[i].x - 3 / 2.0, 2)) + pow(arr[i].y, 2) >= pow(3 / 2.0, 2)
                || (arr[i].y <= 0) && (arr[i].y >= -3)) {
                d = sqrt(pow(arr[i].x, 2) + pow(arr[i].y, 2));
                dist.push_back(d);
            }
        }

        else if ((arr[i].x >= -3) &&  (arr[i].x <= 0) && (pow(arr[i].x, 2) + pow(arr[i].y, 2) <= 9)) {
            if (((pow(arr[i].x + 3 / 2.0, 2)) + pow(arr[i].y, 2) >= pow(3 / 2.0, 2))
                || (arr[i].y >= 0) && (arr[i].y < 3)) {
                d = sqrt(pow(arr[i].x, 2) + pow(arr[i].y, 2));
                dist.push_back(d);
            }
        }

    }


    std::cout << "The distances of the spots: " << std::endl;
    for (int i = 0; i < dist.size(); ++i) {
        std::cout << dist[i] << " ";
    }

    return 0;
}
