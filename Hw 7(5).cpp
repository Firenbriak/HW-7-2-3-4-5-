#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 2; i < n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            sum += i;
        }
    }

    std::cout << "Sum of prime numbers less than " << n << ": " << sum << std::endl;

    return 0;
}