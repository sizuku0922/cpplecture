#include <iostream>

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}
int main() {

    std::cout << "数字を3つ入力して下さい" << "\n";
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    std::cout << max(max(num1, num2), num3) << "\n";
}