#include <cstdint>
#include <iostream>


void printLadderOfNumbers() {
  std::int16_t outer = 1;
  while (outer <= 5) {
    std::int16_t inner = 5;
    while (inner >= 1 ) {
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
