// Least Common Multiple
// Write a program that calculates and displays the least common multiple for two or more positive integers.

#include <iostream>

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int calculateLCM(int arr[], int n) {
    int lcm = 1;
    for (int i = 0; i < n; ++i) {
        lcm = calculateLCM(lcm, arr[i]);
    }
    return lcm;
}

int main() {
    int n;

    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter positive integer " << i + 1 << ": ";
        std::cin >> arr[i];

        if (arr[i] <= 0) {
            std::cout << "Please enter a positive integer." << "\n";
            return 1;
        }
    }

    int lcm = calculateLCM(arr, n);
    std::cout << "The least common multiple of the entered integers is: " << lcm << "\n";

    return 0;
}
