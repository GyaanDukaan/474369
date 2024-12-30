#include <Eigen/Dense>
#include <iostream>

int main() {
    Eigen::Matrix2d mat;
    mat(0, 0) = 3;
    mat(1, 0) = 2.5;
    mat(0, 1) = -1;
    mat(1, 1) = 0.5;

    std::cout << "Matrix: \n" << mat << std::endl;
}
