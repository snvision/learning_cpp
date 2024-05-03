#include <iostream>

// Считывание числа с клавиатуры
std::uint16_t readNumber() {
  std::cout << "Enter number from 0 to 255: ";
  std::uint16_t number;
  std::cin >> number;

  return number;
}

// Перевод из десятичного числа в двоичное
std::uint16_t decToBitNumber(std::uint16_t number, std::uint16_t degree) {
  std::cout << (number >= degree ? '1' : '0');

  return number >= degree ? number - degree : number;
}

int main() {
  std::uint16_t number = readNumber();

  number = decToBitNumber(number, 128);
  number = decToBitNumber(number, 64);
  number = decToBitNumber(number, 32);
  number = decToBitNumber(number, 16);

  std::cout << ' ';

  number = decToBitNumber(number, 8);
  number = decToBitNumber(number, 4);
  number = decToBitNumber(number, 2);
  number = decToBitNumber(number, 1);

  return 0;
}
