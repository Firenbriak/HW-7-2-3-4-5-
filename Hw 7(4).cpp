#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter two positive integers: ";
    std::cin >> n >> m;

    while (n != 0 && m != 0) {
        if (n > m)
            n %= m;
        else
            m %= n;
    }

    int gcd = (n == 0) ? m : n;
    std::cout << "Greatest common divisor of " << m << " and " << n << ": " << gcd;

    return 0;
}