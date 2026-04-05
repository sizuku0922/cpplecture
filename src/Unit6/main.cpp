#include <iostream>
#include <vector>

int main() {
    std::vector<int> Row = {0};
    std::vector<int> Col = {0};

    for (int i = 0; i < 9; i++) {
        Row.push_back(i + 1);
    }
    for (int j = 0; j < 9; j++) {
        Col.push_back(j + 1);
    }

    for (size_t i = 1; i < Row.size(); i++) {
        for (size_t j = 1; j < Col.size(); j++) {

            std::cout << Row[i] * Col[j] << "\t";
        }
        std::cout << "\n";
    }
}