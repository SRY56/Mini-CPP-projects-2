#include <iostream>

using std::cout, std::cin, std::endl;

int factorial(int num);

int main() {
    cout << factorial(10);

    return 0;
}

int factorial(int num) {
    if (num > 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }
}