#include <iostream>

int main() {
    unsigned long n;
    std::cin >> n;
    unsigned long s = (n * (n + 1)) / 2;
    std::cout << s << "\n";
    return 0;
}