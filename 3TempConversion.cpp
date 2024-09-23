#include <iostream>


int main() {
    double temp;
    char unit;

    std::cout << "*********** Temperature Conversion ***********" << std::endl;

    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What Unit would you like to convert to (C or F): ";
    std::cin >> unit;
    std::cout << std::endl;

    if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the Temprature in Fahrenheit: ";
        std::cin >> temp;
        std::cout << std::endl;

        temp = (5/9) *(temp - 32);

        std::cout << "The temperature in Celcius is: " << temp << "C" << std::endl;
    } else if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the Temperature in Celsius: ";
        std::cin >> temp;
        std::cout << std::endl;

        temp = (1.8*temp) + 32;

        std::cout << "The Temperature in Fahrenheit is: " << temp << "F" << std::endl;
    } else {
        std::cout << "Please Enter a valid unit (F or C)" << std::endl;
    }


    std::cout << "**********************************************" << std::endl;

    return 0;
}