#include <cassert>
#include <iostream>

//Считывание числа
double getNumber() {
  while (true) {
    double number;
    std::cin >> number;
    // Проверка предыдущего извлечения
    if (std::cin.fail()) {         // Если предыдущее извлечение оказалось неудачным
      std::cin.clear();            // Возвращаем cin в обычный режим работы
      std::cin.ignore(32767, '\n');// Удаляем значения предыдущего ввода и входного буфера
      std::cout << "Input is invalid. Enter number again: ";
    } else {
      std::cin.ignore(32767, '\n');// Удаляем лишние значения
      return number;
    }
  }
}


//Считывание оператора
char getMathOperator() {
  while (true) {
    char mathOperator;
    std::cin >> mathOperator;

    std::cin.ignore(32767, '\n');

    if (mathOperator == '+' || mathOperator == '-' || mathOperator == '*' || mathOperator == '/') {
      return mathOperator;
    } else {
      std::cout << "Input is invalid. Enter operator again: ";
    }
  }
}


// Подсчёт результата выражения в зависимости от выбранного математического оператора
void calculate(double firstNumber, double secondNumber, char mathOperator) {
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
    default:
      assert(false);
      std::cout << "Unknown operator\n";
      break;
  }
}


int main() {
  std::cout << "Enter first number: ";
  const double firstNumber = getNumber();
  std::cout << "Enter math operator of the following: +, -, *, or /: ";
  const char mathOperator = getMathOperator();
  std::cout << "Enter second number: ";
  const double secondNumber = getNumber();


  std::cout << firstNumber << ' ' << mathOperator << ' ' << secondNumber << " = ";
  calculate(firstNumber, secondNumber, mathOperator);
  std::cout << '\n';

  return 0;
}
