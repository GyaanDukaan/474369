#include <boost/preprocessor/repetition/repeat.hpp>
#include <iostream>

#define PRINT(z, n, data) std::cout << n << " ";

int main() {
    BOOST_PP_REPEAT(5, PRINT, ~)
        std::cout << std::endl; // Outputs: 0 1 2 3 4 
}
