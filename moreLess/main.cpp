#include <cassert>
#include <cstdint>
#include <iostream>
#include <utility>


// Считывание числа с клавиатуры
std::uint16_t readNumber() {
  std::uint16_t number;// Создаём number
  std::cin >> number;
  return number;// Уничтожаем number
}


// Если первое число больше втрого, меняем их местами
auto sortNumbers(std::uint16_t lhs, std::uint16_t rhs) {//Создаём lhs и rhs
  if (lhs > rhs) {
    std::cout << "Меняем местами\n";
    std::uint16_t const tmp = lhs;// Создаём tmp
    lhs                     = rhs;
    rhs                     = tmp;
  }
  return std::pair{lhs, rhs};
}// Уничтожаем lhs, rhs и tmp


// Печатаем меньшее и большее число
void printSortNumbers(std::uint16_t lessNumber, std::uint16_t moreNumber) {// Создаём lessNumber и moreNumber
  assert(lessNumber <= moreNumber);
  std::cout << "Меньшее число: " << lessNumber << '\n'
            << "Большее число: " << moreNumber << '\n';
}// Уничтожаем lessNumbeer и moreNumber


int main() {
  std::cout << "Введите первое число: ";
  std::uint16_t const firstNumber = readNumber();// Создаём firstNumber

  std::cout << "Введите второе число, больше первого: ";
  std::uint16_t const secondNumber = readNumber();// Создаём seconsNumber

  auto const [lessNumber, moreNumber] = sortNumbers(firstNumber, secondNumber);// Создаём lessNumber и moreNumber
  printSortNumbers(lessNumber, moreNumber);

  return 0;
}// Уничтожаем firstNumber, secondNumber, lessNumber и moreNumber
