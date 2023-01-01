#include <iostream>


constexpr uint32_t f2(const uint32_t n) {
    return (n <= 1) ? 1 : n * f2(n - 1);
}

uint32_t f1(const uint32_t n) {
    return (n <= 1) ? 1 : n * f2(n - 1);
}

int main() {

    uint32_t a1 = f1(10); //run-time computation
    uint32_t a2 = f2(10); //run-time computation
    const uint32_t a3 = f2(10); //compile-time computation
    std::cout << "a1=" << a1 << ", a2=" << a2 << std::endl;
    return 0;
}