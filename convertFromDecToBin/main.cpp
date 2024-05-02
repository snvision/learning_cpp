#include <iostream>

// Считывание числа с клавиатуры
std::uint16_t readNumber() {
  std::cout << "Enter number from 0 to 255: ";
  std::uint16_t number;
  std::cin >> number;

  return number;
}

std::uint16_t calculateNumber (std::uint16_t number, std::uint16_t degree) {
  //std::cout << (number >= degree ? '1' : '0');

  if (number >= degree) {
    std::cout << '1';
  } else {
    std::cout << '0';
  }

  if (number >= degree) {
    return number - degree;
  } else {
    return number;
  }
}

int main() {
  std::uint16_t number = readNumber();

  calculateNumber(number, 128);
  calculateNumber(number, 64);
  calculateNumber(number, 32);
  calculateNumber(number, 16);

  std::cout << ' ';

  calculateNumber(number, 8);
  calculateNumber(number, 4);
  calculateNumber(number, 2);
  calculateNumber(number, 1);


  return 0;
}
