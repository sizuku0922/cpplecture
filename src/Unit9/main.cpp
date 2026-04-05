#include <iostream>

int main() {
    int x = 3, y = 5;
    const int &ref = x;
    const int *ptr1 = &x;
    int *const ptr2 = &x;
    ref = 1;
    *ptr1 = 1;
    ptr1 = &y;
    *ptr2 = 1;
    ptr2 = &y;
}