#include <iostream>

int computeSeries(int n) {
    if (n == 0) {
        return 1;
    }
    return computeSeries(n - 1) * 4;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "The " << n << "-th term of the series is: " << computeSeries(n) << std::endl;
    return 0;
}
