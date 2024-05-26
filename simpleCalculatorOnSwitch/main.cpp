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
      std::cout << firstNumber + secondNumber;
      break;
    case '-':
      std::cout << firstNumber - secondNumber;
      break;
    case '*':
      std::cout << firstNumber * secondNumber;
      break;
    case '/':
      std::cout << firstNumber / secondNumber;
      break;
    case '%':
      std::cout << firstNumber % secondNumber;
      break;
    default:
      std::cout << "Unknown operator\n";
  }
}


int main() {
  std::cout << "Enter first int number: ";
  const std::int64_t firstNumber = readNumber();
  std::cout << "Enter second int number: ";
  const std::int64_t secondNumber = readNumber();
  const char         mathOperator = readOperator();

  std::cout << firstNumber << ' ' << mathOperator << ' ' << secondNumber << " = ";
  calculate(firstNumber, secondNumber, mathOperator);
  std::cout << '\n';

  return 0;
}
