#include <cstdint>
#include <iostream>


std::uint16_t readNumber() {
  std::uint16_t number;
  std::cin >> number;

  return number;
}

int main() {
  std::cout << "Введите первое число: ";
  std::uint16_t lessNum = readNumber();

  std::cout << "Введите второе число: ";
  std::uint16_t moreNum = readNumber();

  // Большего и меньшего числа для вывода в порядке возрастания
  if (lessNum > moreNum) {
    std::cout << "Меняем местами\n";
    std::uint16_t tmp;//Создаём tmp
    tmp          = lessNum;
    lessNum  = tmp;
    moreNum = tmp;
  }// Уничтожаем tmp

  std::cout << "Меньшее число: " << lessNum << '\n';
  std::cout << "Большее число: " << moreNum << '\n';

  return 0;
}// Уничтожаем firstNumber и secondNumber
