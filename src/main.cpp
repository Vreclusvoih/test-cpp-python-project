// #include "hello.h"
// #include <cstdint>
#include <cstdio>
#include <iostream>
#include <string>
#include <string_view>

// #include <string>
// #include <ostream>
 
template <typename T1>
void print(T1 val);

int main() {
    using namespace std::string_literals;      // access the s suffix
    using namespace std::string_view_literals; // access the sv suffix

    setlocale(LC_ALL, "RU");
    print("Pidorasina\n"sv);
    return 0;
}

template <typename T1>
void print(T1 val) {
    std::cout << val << '\n';
}