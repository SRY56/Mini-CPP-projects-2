#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    double b;
    double c;

    cout << "Enter 2 Numbers to get hypotnuse: ";
    cin >> a >> b;
    cout << endl;

    cout << "Value of the Hyoptnuse with respect to sides " << a << " and " << b << " is: ";

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    cout << c << endl;
    return 0;
}