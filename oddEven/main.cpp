#include <iostream>

// Считывание числа с клавиатуры
int readNumber() {
  std::cout << "Enter integer number: ";
  std::int16_t number;
  std::cin >> number;

  return number;
}

// Определение чётности или нечётности числа
bool isEven(int number) {
  return (number % 2) == 0;
}

// Печать результата
void printIsEven(bool result) {
  std::cout << "Number is " << (result ? "even" : "odd") << '\n';
}

int main() {
  std::int16_t number = readNumber();
  bool         result = isEven(number);

  printIsEven(result);

  return 0;
}
