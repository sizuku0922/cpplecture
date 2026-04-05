#include <iostream>
#include <vector>

void print_vector(const std::vector<int> input_vec) {
    std::cout << "値渡しした場合\n";
    for (int i = 0; i < input_vec.size(); ++i) {
        std::cout << input_vec[i] << " at " << &input_vec[i] << "\n";
    }
}
void print_vector_ref(const std::vector<int> &input_vec) {
    std::cout << "参照渡しした場合\n";
    for (int i = 0; i < input_vec.size(); ++i) {
        std::cout << input_vec[i] << " at " << &input_vec[i] << "\n";
    }
}
int main() {
    std::vector<int> vec = {2, 3, 5};
    std::cout << "もともとの vec\n";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " at " << &vec[i] << "\n";
    }
    print_vector(vec);
    print_vector_ref(vec);
}
