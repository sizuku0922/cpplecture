#include <iostream>

int main() {

    double rate;

    std::cout << "金利を入力（％）";

    std::cin >> rate;
    rate = rate / 100;
    double money = 1.0;
    int year;

    for (year = 1; money < 2; year++) {
        money = money * (1 + rate);
    }

    std::cout << year << "\n";

    return 0;
}
