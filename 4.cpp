//The largest prime number less than the given number.
//Write a program that calculates and displays the largest prime number less than the number entered by the user, which should be a positive integer.

#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int largestPrimeLessThan(int num) {
    for (int i = num - 1; i >= 2; --i) {
        if (isPrime(i)) {
            return i;
        }
    }
    return 1; // No prime number found (1 is not prime)
}

int main() {
    int userNumber;

    std::cout << "Enter a positive integer: ";
    std::cin >> userNumber;

    if (userNumber <= 1) {
        std::cout << "Please enter a positive integer greater than 1." << "\n";
        return 1;
    }

    int result = largestPrimeLessThan(userNumber);
    std::cout << "The largest prime number less than " << userNumber << " is: " << result << "\n";

    return 0;
}
