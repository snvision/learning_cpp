#include <iostream>

//Считывание числа с клавиатуры
int readNumber() {
  std::cout << "Enter integer number: ";
  std::int16_t number;
  std::cin >> number;

  return number;
}

//Определение чётности или нечётности числа
bool isEven(int number) {
  if (number % 2 == 0) {
    std::cout << number << " is even\n";

    return true;
  } else {
    std::cout << number << " is odd\n";

    return false;
  }
}

int main() {
  int number = readNumber();

  isEven(number);

  return 0;
}
