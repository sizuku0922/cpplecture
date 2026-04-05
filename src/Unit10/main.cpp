#include <iostream>

int correct[3];
int pred[3];
int eat_number = 0, byte_number = 0;

void judge1(int a, int b) {
    if (a == b) {
        eat_number++;
    }
}

void judge2(int a, int b) {
    if (a == b) {
        byte_number++;
    }
}

int main() {

    std::cout << "正しい数字を3つ入力してください " << "\n";

    for (int i = 0; i < 3; ++i) {
        std::cin >> correct[i];
    }

    while (true) {

        eat_number = 0;
        byte_number = 0;

        std::cout << "予想の数字を3つ入力してください " << "\n";

        for (int i = 0; i < 3; ++i) {
            std::cin >> pred[i];
        }

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (i == j) {
                    judge1(correct[i], pred[j]);
                } else {
                    judge2(correct[i], pred[j]);
                }
            }
        }

        if (eat_number == 3) {
            std::cout << "Congratulations!!!!!you are a genius^^" << "\n";
            break;
        } else {
            std::cout << eat_number << "eat " << byte_number << "byte" << "\n";
        }
    }
}
