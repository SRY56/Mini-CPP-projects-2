#include <iostream>
#include <ctime>

using std::cout, std::cin, std::endl;

int main() {
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    cout << "********** Number Guessing Game **********" << endl;

    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too High." << endl;
        } else {
            cout << "Too Low" << endl;
        }
    } while(guess != num);

    cout << "It took you " << tries << " tries to guess the random number: " << num << endl;

    cout << "******************************************";
    return 0;
}