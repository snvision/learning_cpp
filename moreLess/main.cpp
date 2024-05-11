#include <cstdint>
#include <iostream>


int main() {
  std::uint16_t firstNumber;//Создаём firstNumber
  std::cout << "Введите первое число: ";
  std::cin >> firstNumber;

  std::uint16_t secondNumber;//создаём secondNumber
  std::cout << "Введите второе число, больше чем первое: ";
  std::cin >> secondNumber;

  // Проверка условия для вывода чисел в порядке от меншьшего к большему
  if (firstNumber > secondNumber) {
    std::cout << "Меняем местами\n";
    std::uint16_t moreNumber;//Создаём moreNumber
    moreNumber   = firstNumber;
    firstNumber  = secondNumber;
    secondNumber = moreNumber;
  }// Уничтожаем moreNumber

  std::cout << "Меньшее число: " << firstNumber << '\n';
  std::cout << "Большее число: " << secondNumber << '\n';

  return 0;
}// Уничтожаем firstNumber и secondNumber
