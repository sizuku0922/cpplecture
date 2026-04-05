#include <array>
#include <iostream>

constexpr int x = 9;
constexpr int y = 9;
int main() {
    std::array<std::array<int, x>, y> matrix;

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}