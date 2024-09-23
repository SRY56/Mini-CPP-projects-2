#include <iostream>

using std::cout, std::cin, std::endl;

int main() {
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;
    
    for (int i = 0; i < size; i++) {
        cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(cin, temp);

        if (temp == "q") {
            break;
        } else {
            foods[i] = temp;
        }
    }

    cout << "You like the following food:" << endl;
    for (int j = 0; !foods[j].empty(); j++) {
        cout << foods[j] << endl;
    }

    return 0;
}