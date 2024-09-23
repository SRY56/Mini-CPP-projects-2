#include <iostream>
#include <ctime>

using std::cout, std::cin, std::endl;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = getUserChoice();
    cout << "Your Choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    
    char player;
    cout << "Rock-Paper-Scissors-Game!" << endl;
    do {
        cout << "Chose onf of the following" << endl;
        cout << "**************************" << endl;
        cout << "'r' for rock \n'p' for paper \n's' for scissors" << endl;
        cin >> player;
    } while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}

char getComputerChoice() {
    srand(time(0));
    int num = rand() %3 + 1;

    switch(num) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }

    return 0;
}

void showChoice(char choice) {
    switch(choice) {
        case 'r':
            cout << "Rock" << endl;
            break;
        case 'p':
            cout << "Paper" << endl;
            break;
        case 's':
            cout << "Scissors" << endl;
            break;
    }
}

void chooseWinner(char player, char computer){
    switch(player) {
        case 'r':
            if(computer == 'r') {
                cout << "It's a Tie!" << endl;
            } else if (computer == 'p') {
                cout << "Computer Wins!" << endl;
            } else {
                cout << "Player Wins!" << endl;
            }
            break;
        case 'p':
            if(computer == 'p') {
                cout << "It's a Tie!" << endl;
            } else if (computer == 's') {
                cout << "Computer Wins!" << endl;
            } else {
                cout << "Player Wins!" << endl;
            }
            break;
        case 's':
            if(computer == 's') {
                cout << "It's a Tie!" << endl;
            } else if (computer == 'r') {
                cout << "Computer Wins!" << endl;
            } else {
                cout << "Player Wins!" << endl;
            }
            break;
    }
}
