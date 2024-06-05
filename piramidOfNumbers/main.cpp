#include <cstdint>
#include <iostream>


// Печать лестницы из цифр
void printLadderOfNumbers() {
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
  printLadderOfNumbers();
  return 0;
}
