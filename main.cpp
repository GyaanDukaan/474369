#include <boost/hana.hpp>
#include <iostream>

namespace hana = boost::hana;

constexpr auto numbers = hana::make_tuple(1, 2, 3, 4, 5);
constexpr auto sum = hana::fold(numbers, 0, [](auto acc, auto n) {
    return acc + n;
    });

int main() {
    std::cout << "Sum: " << sum << std::endl; // Outputs: Sum: 15
}