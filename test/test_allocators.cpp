#include <iostream>
#include <vector>
#include <string>

#include "../src/allocators"

int main() {
    std::vector<std::string, u6th9d::allocator<std::string>> svec;
    for (int i = 0; i < 200000; i++) {
        svec.push_back("Hello World");
    }

    std::cout << svec[3001] << std::endl;
    std::cout << svec[10586].c_str() << std::endl;

    std::vector<int, u6th9d::allocator<int>> ivec;
    for (int i = 0; i < 1000000; i++) {
        ivec.push_back(i);
    }

    std::cout << ivec[3001] << std::endl;
    std::cout << (ivec[10586] = 10) << std::endl;

    return 0;
}