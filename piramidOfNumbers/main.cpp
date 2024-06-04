#include <cstdint>
#include <iostream>


//Построение пирамиды из цифр
void printPiramidOfNumbers() {
  std::int16_t outer = 5;
  while (outer >= 1) {
    std::int16_t inner = outer;
    while (inner >= 1) {
      std::cout << inner-- << ' ';
    }
    std::cout << '\n';
    --outer;
  }
}


int main() {
  printPiramidOfNumbers();
  return 0;
}
