#include <iostream>


// Печать чётных чисел от 0 до 20
void printNumbers() {
  for (auto count = 0; count < 21; count += 2) {
    std::cout << count << ' ';
  }
}


int main() {
  printNumbers();

  return 0;
}
