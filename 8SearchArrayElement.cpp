#include <iostream>

using std::cout, std::cin, std::endl;

int searchArray(int array[], int size, int element);

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    cout << "Enter elemnet to search for: ";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1) {
        cout << myNum << " is located at index " << index << endl;
    } else {
        cout << myNum << " is not in the array." << endl;
    }

    return 0;
}

int searchArray(int array[], int size, int element) {

    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    } 
    return -1;
}