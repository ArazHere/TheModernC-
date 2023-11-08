// Greatest Common Divisor
// Write a program that calculates and displays the greatest common divisor of two positive integers.
#include <iostream>

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    std::cout << "Enter the first positive integer: ";
    std::cin >> num1;
    std::cout << "Enter the second positive integer: ";
    std::cin >> num2;

    int gcd = calculateGCD(num1, num2);
    std::cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << gcd << "\n";

    return 0;
}
