#include <iostream>
#include <iomanip>

using std::cout, std::cin, std::endl;


void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;

    do {
        cout << "********************" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << endl;

        cin.clear();
        fflush(stdin);

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thank you for visiting" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << "Your Balance is: $" << std::setprecision(2) << std::fixed << balance << endl;
}

double deposit() {

    double amount = 0;

    cout << "Enter amount to be deposited: ";
    cin >> amount;
    
    if (amount > 0) {
        return amount;
    } else {
        cout << "That's not a vaild amount: ";
        return 0;
    }
}

double withdraw(double balance) {
    double amount;

    cout << "Enter money to be withdrawn ";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient Funds: ";
        return 0;
    } else if (amount < 0) {
        cout << "Thats not a valid amount: ";
    } else {
        return amount;
    }
}