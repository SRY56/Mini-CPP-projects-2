#include <iostream>

using std::cout, std::endl, std::string;

int main() {
    string cars[][3] = {{"Camry", "Carolla", "Crown"},
                        {"CR-V", "Accord", "Pilot"},
                        {"Elantra", "Nexo", "Sonata"}};
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << cars[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}