#include <iostream>

std::string checkOddEven(int number) {
    if (number % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int inputNumber;
    std::cout << "Enter a number: ";
    std::cin >> inputNumber;

    std::string result = checkOddEven(inputNumber);
    std::cout << inputNumber << " is " << result << "." << std::endl;

    return 0;
}
