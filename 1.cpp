// The sum of natural numbers divisible by 3 or 5
// Write a program that calculates the sum of all natural numbers divisible by 3 or 5 up to a user-entered limit.

#include <iostream>

int main() {
    int limit;
    std::cout << "Enter a number as a limit: ";
    std::cin >> limit;

    int sum = 0;
    for (int i = 0; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << "The sum of natural number divisible by 3 or 5 up to " << limit << " is: " << sum << "\n";
    return 0;

}
