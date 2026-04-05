#include <fstream>
#include <iostream>
int main() {
    std::ofstream file1, file2;
    file1.open("src/Unit12/test1.txt");
    file2.open("/home/sizuku/project/cpp/CppLecture/src/Unit12/test2.txt");
    file1 << "hello" << std::endl;
    file2 << "hello" << std::endl;
    file1.close();
    file2.close();
}