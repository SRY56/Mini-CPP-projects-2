#include <iostream>

using std::cout, std::cin, std::endl, std::string;

int main() {
    string questions[] = {"1. What year was C++ created?: ",
                          "2. Who invented C++?: ",
                          "3. What is the predecesspr of C++?; ",
                          "4. Is the Earth Flat?: "};
    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                          {"A. Guid van Rossu", "B. Bjarne Stroustrup", "C. James Gosling", "D. Dennis Ritchie"},
                          {"A. C", "B. C#", "C. Java", "D. Perl" },
                          {"A. Yes", "B. No", "C. Donut", "D. Bagel"}};
    char answerKey[] = {'C', 'B',  'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++) {
        cout << "***************************" << endl;
        cout << questions[i] << endl;
        cout << "***************************" << endl;

        for (int j = 0; j  < sizeof(options[i])/sizeof(options[i][0]); j++) {
            cout << options[i][j] << endl;
        }

        cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            cout <<"Answer " << (i+1) << " Is Correct!" << endl;
            score++;
        } else {
            cout << "You Answered " << (i+1) << " Incorrectly" << endl;
            cout << "The correct answer is: " << answerKey[i] << endl;
        }
    }

    cout << "***************************" << endl;
    cout << "Results: " << score << " Out of " << size << endl;
    cout << "Score: " << (score/(double)size)*100 << "%" << endl;
    cout << "***************************" << endl;
    return 0;
}