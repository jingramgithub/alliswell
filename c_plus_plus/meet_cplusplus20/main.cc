#include <format>
#include <iostream>
#include <string>
#include <string_view>

#include "greet.h"

template <typename... Args>
std::string dynamic_print(std::string_view rt_fmt_str, Args&&... args) {
    return std::vformat(rt_fmt_str, std::make_format_args(args...));
}

int main() {
    std::cout << greet::hello("world") << std::endl;

    std::string fmt;
    for (int i{}; i != 3; ++i) {
        fmt += "{} ";
        std::cout << fmt << " : ";
        std::cout << dynamic_print(fmt, "alpha", 'Z', 3.14, "unused");
        std::cout << "\n";
    }
    return 0;
}
