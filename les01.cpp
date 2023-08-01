
/*a c++ program that allows a user to enter 4 elements for a 2x2 array and 
print their product
#include <iostream>

int main() {
    int matrix[2][2];
    std::cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
    int product = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    std::cout << "The product of the elements is: " << product << std::endl;
    return 0;
}
