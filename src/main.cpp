#include "include/hello.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <string_view>

using namespace std::string_literals;
using namespace std::string_view_literals;

template <typename T1>
void print(T1 val);

int main() {
    setlocale(LC_ALL, "RU");
    hello();
    return 0;
}

template <typename T1>
void print(T1 val) {
    std::cout << val << '\n';
}