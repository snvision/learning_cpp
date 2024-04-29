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
  if (result) {
    std::cout << "Number is even";
  } else {
    std::cout << "Number is odd";
  }
}

// Подсчёт и печать резуультата
void calcAndPrintIsEven(bool result) {
  printIsEven(result);
}

int main() {
  std::int16_t number = readNumber();
  bool         result = isEven(number);

  calcAndPrintIsEven(result);

  return 0;
}
