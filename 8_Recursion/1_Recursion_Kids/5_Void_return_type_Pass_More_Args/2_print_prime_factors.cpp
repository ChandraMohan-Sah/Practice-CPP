#include <iostream>
using namespace std;

void printPrimeFactors(int n, int divisor = 2) {
    if (n <= 1) {
        return;
    }

    if (n % divisor == 0) {
        cout << divisor << " ";
        while (n % divisor == 0) {
            n /= divisor; // Skip duplicate factors
        }
    }

    printPrimeFactors(n, divisor + 1);
}




int main() {
    int n;
    cout << "Enter a number to find its prime factors: ";
    cin >> n;

    if (n <= 1) {
        cout << "Prime factors are not defined for numbers less than 2." << std::endl;
    } else {
        cout << "Prime factors of " << n << " are: ";
        printPrimeFactors(n);
        cout << std::endl;
    }

    return 0;
}


