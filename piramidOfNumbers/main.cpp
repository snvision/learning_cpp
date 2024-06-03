#include <iostream>


//Построение пирамиды из цифр
void getPiramidOfNumbers () {
  std::int16_t outer = 5;
  while (outer >= 1) {
    std::int16_t inner = outer;
    while (inner >= 1) {
      std::cout << inner-- << ' ';
    }
    --outer;
    std::cout << '\n';
  }
}


int main() {
  getPiramidOfNumbers();

  return 0;
}
