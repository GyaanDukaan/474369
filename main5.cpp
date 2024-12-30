#include <optional>
#include <iostream>

int main() {
    std::optional<int> opt = 42;

    if (opt.has_value()) {
        std::cout << "Value: " << *opt << std::endl; // Outputs: Value: 42
    }
}