#include <iostream>

int main() {

    int num;
    std::cout << "数値を入力してください: ";
    std::cin >> num;
    for (int i = 2; i <= num; i++) {
        if (i == num) {
            std::cout << "素数です" << "\n";

        } else if (num % i == 0) {
            std::cout << "素数ではない" << "\n";
            break;
        }
    }
}