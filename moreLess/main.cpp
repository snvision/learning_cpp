#include <cstdint>
#include <iostream>


// Считывание первого числа с клавиатуры
std::uint16_t readFirstNumber() {
  std::cout << "Введите первое число: ";
  std::uint16_t firstNumber;
  std::cin >> firstNumber;

  return firstNumber;
}

// Считывание второго числа с клавиатуры
std::uint16_t readSecondNumber() {
  std::cout << "Введите второе число больше первого: ";
  std::uint16_t secondNumber;
  std::cin >> secondNumber;

  return secondNumber;
}

// Меняем местами первое и второе число
void calcResult(std::uint16_t firstNumber, std::uint16_t secondNumber) {
  std::uint16_t moreNumber;
  if (firstNumber > secondNumber) {
  std::cout << "Меняем местами\n";
  moreNumber   = firstNumber;
  firstNumber  = secondNumber;
  secondNumber = moreNumber;
  }

  std::cout << "Меньшее число: " << firstNumber << '\n';
  std::cout << "Меньшее число: " << secondNumber << '\n';
}


int main() {
  setlocale(LC_ALL, "rus");

  std::uint16_t firstNumber  = readFirstNumber();
  std::uint16_t secondNumber = readSecondNumber();

  calcResult(firstNumber, secondNumber);

  return 0;
}
