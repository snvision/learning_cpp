#include <cstdint>
#include <iostream>


// Считывание числа с клавиатуры
std::uint16_t readNumber() {
  std::cout << "Enter integer number from 0 to 255: ";
  std::uint16_t number;
  std::cin >> number;

  return number;
}

// Вычисление разницы между введёным числом и степенью числа 2
std::uint16_t diffNumber(std::uint16_t number, std::uint16_t degree) {
  return number >= degree ? (number - degree) : number;
}

// Печать 1 или 0 в зависмости от сравнения введённого числа со степенью числа 2
void printBitNumber(std::uint16_t number, std::uint16_t degree) {
  std::cout << (number >= degree ? '1' : '0');
}

// Проверяем условие: введённое число >= 2 в степени n. Если условие истинно — бит равен 1 и вычитаем разницу между числом и степенью числа 2.
// Если ложно — бит равен 0 и возвращаем само число.
std::uint16_t convertDecNumberToBin(std::uint16_t number, std::uint16_t degree) {
  printBitNumber(number, degree);

  return diffNumber(number, degree);
}

int main() {
  std::uint16_t number = readNumber();

  number = convertDecNumberToBin(number, 128);
  number = convertDecNumberToBin(number, 64);
  number = convertDecNumberToBin(number, 32);
  number = convertDecNumberToBin(number, 16);

  std::cout << ' ';

  number = convertDecNumberToBin(number, 8);
  number = convertDecNumberToBin(number, 4);
  number = convertDecNumberToBin(number, 2);
  number = convertDecNumberToBin(number, 1);

  return 0;
}
