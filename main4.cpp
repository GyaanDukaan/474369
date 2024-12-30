#include <ctre.hpp>
#include <iostream>

int main() {
    constexpr auto regex = ctll::fixed_string{ "(\\d+)" };
    constexpr auto match = ctre::match<regex>("123");

    if (match) {
        std::cout << "Matched: " << match.get<0>() << std::endl; // Outputs: Matched: 123
    }
}
