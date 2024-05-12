#include <cassert>
#include <cstdint>
#include <iostream>
#include <utility>


// Чтение числа с клавиатуры
std::uint16_t readNumber() {
  std::uint16_t number;
  std::cin >> number;
  return number;
}

// Меняем местами первое и второе число
auto swapLess(std::uint16_t lhs, std::uint16_t rhs) {
  if (lhs > rhs) {
    std::cout << "Меняем местами\n";
    std::uint16_t const tmp = lhs;
    lhs                     = rhs;
    rhs                     = tmp;
  }
  return std::pair{lhs, rhs};
}

void printSortNumbers(std::uint16_t lessNumber, std::uint16_t moreNumber) {
  assert(lessNumber <= moreNumber);
  std::cout << "Меньшее число: " << lessNumber << '\n'
            << "Большее число: " << moreNumber << '\n';
}

int main() {
  std::cout << "Введите первое число: ";
  std::uint16_t firstNumber = readNumber();

  std::cout << "Введите второе число, больше первого: ";
  std::uint16_t secondNumber = readNumber();

  auto const [lessNumber, moreNumber] = swapLess(firstNumber, secondNumber);
  printSortNumbers(lessNumber, moreNumber);

  return 0;
}
