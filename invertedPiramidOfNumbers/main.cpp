#include <cstdint>
#include <iostream>


// Печать лестницы из цифр
void printLadderOfNumbers() {
  std::int16_t outer = 1;
  // Внешний цикл для печати столбцов
  while (outer <= 5) {
    std::int16_t inner = 5;
    // Внутренний цикл для печати строк
    while (inner >= 1) {
      if (inner <= outer) {
        std::cout << inner << ' ';
      } else {
        std::cout << "  ";
      }
      --inner;
    }
    std::cout << '\n';
    ++outer;
  }
}


int main() {
  printLadderOfNumbers();

  return 0;
}
