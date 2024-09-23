#include <iostream>
#include <ctime>

using std::cout, std::cin, std::endl;

int main() {
    srand(time(NULL));

    int side;
    int num;

    cout << "how many sides should the dice be: ";
    cin >> side;
    cout << endl;

    num = (rand() % side) + 1;

    cout << "From a " << side << " sided dice... You rolled: " << num;
    return 0;
}