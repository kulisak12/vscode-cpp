#include <iostream>

int main() {
    int sum = 0;

    int number;
    while (std::cin >> number) {
        sum += number;
    }

    std::cout << sum << std::endl;
    return 0;
}
