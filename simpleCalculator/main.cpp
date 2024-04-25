#include <iostream>


//Считывание числа
double readNumber() {
    std::cout << "Enter double type number: ";
    double number;
    std::cin >> number;

    return number;
}

//Считывание оператора
char readOperator() {
    std::cout << "Enter math operator of the following: +, -, *, or /: ";
    char mathOperator;
    std::cin >> mathOperator;

    return mathOperator;
}

void calculationResult(double firstNumber, char mathOperator, double secondNumber) {
    if(mathOperator == '+') {
        std::cout << firstNumber << " + "  << secondNumber << " = " << firstNumber + secondNumber << '\n';
    }
    if(mathOperator == '-') {
        std::cout << firstNumber << " - "  << secondNumber << " = " << firstNumber - secondNumber << '\n';
    }
    if(mathOperator == '*') {
        std::cout << firstNumber << " * "  << secondNumber << " = " << firstNumber * secondNumber << '\n';
    }
    if(mathOperator == '/') {
        std::cout << firstNumber << " / "  << secondNumber << " = " << firstNumber / secondNumber << '\n';
    }
}



int main() {
    double firstNumber = readNumber();
    char mathOperator = readOperator();
    double secondNumber = readNumber();

    calculationResult(firstNumber, mathOperator, secondNumber);


    return 0;
}
