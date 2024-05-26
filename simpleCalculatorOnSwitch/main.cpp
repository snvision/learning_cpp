#include <cstdint>
#include <iostream>


//Считывание числа
std::int64_t readNumber() {
  std::int64_t number;
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


// Подсчёт результата выражения в зависимости от выбранного математического оператора
void calculate(std::int64_t firstNumber, std::int64_t secondNumber, char mathOperator) {
  switch (mathOperator) {
    case '+':
      std::cout << firstNumber << " + " << secondNumber
                << " = " << firstNumber + secondNumber << '\n';
      break;
    case '-':
      std::cout << firstNumber << " - " << secondNumber
                << " = " << firstNumber - secondNumber << '\n';
      break;
    case '*':
      std::cout << firstNumber << " * " << secondNumber
                << " = " << firstNumber * secondNumber << '\n';
      break;
    case '/':
      std::cout << firstNumber << " / " << secondNumber
                << " = " << firstNumber / secondNumber << '\n';
      break;
    case '%':
      std::cout << firstNumber << " % " << secondNumber
                << " = " << firstNumber % secondNumber << '\n';
      break;
    default:
      std::cout << "Unknown operator\n";
      break;
  }
}


int main() {
  std::cout << "Enter first int number: ";
  const std::int64_t firstNumber = readNumber();
  std::cout << "Enter second int number: ";
  const std::int64_t secondNumber = readNumber();
  const char         mathOperator = readOperator();

  calculate(firstNumber, secondNumber, mathOperator);

  return 0;
}
