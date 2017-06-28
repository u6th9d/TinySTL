#include <iostream>

#include "../src/array"

int main() {
    u6th9d::array<int, 5> a = { 1,2,3,4,5 };
    u6th9d::array<int, 5> b = { 5,4,3,2,1 };
    for (auto&& i : a) {
        i *= 10;
        std::cout << i << std::endl;
    }
    a.swap(b);
    for (auto beg = b.cbegin(); beg != b.cend(); beg++) {
        std::cout << *beg << std::endl;
    }
    u6th9d::array<int, 5> c;
    c.fill(b[0]);
    try {
        std::cout << c.at(16) << std::endl;
    } catch(const char* err) {
        std::cerr << err << std::endl;
    }
    // u6th9d::array<int, 0> d;
    return 0;
}