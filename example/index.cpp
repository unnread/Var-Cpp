#include "var.hpp"
#include <iostream>

int main() {
    // Hello
    Var test = 13;
    Var test2 = 13.5;
    Var test3 = "Hello";
    Var test4 = L"World";
    Var test5 = true;

    std::cout << test << std::endl;
    std::cout << test2 << std::endl;
    std::cout << test3 << std::endl;
    std::cout << test4 << std::endl;
    std::cout << test5 << std::endl;
}