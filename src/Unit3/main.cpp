#include <iostream>

int main() {
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            if (12 * (x + 4) - (2 - 7 * y) == 548) {
                std::cout << "x = " << x << ", y = " << y << "\n";
            }
        }
    }

    return 0;
}
