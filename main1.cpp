#include <boost/mpl/vector.hpp>
#include <boost/mpl/accumulate.hpp>
#include <boost/mpl/plus.hpp>
#include <iostream>

namespace mpl = boost::mpl;

int main() {
    using numbers = mpl::vector<int(1), int(2), int(3), int(4), int(5)>;
    constexpr int sum = mpl::accumulate<numbers, int(0), mpl::plus<>>::value;

    std::cout << "Sum: " << sum << std::endl; // Outputs: Sum: 15
}