#include <cassert>;
#include <iostream>


//Печать букв английского алфавита
void printAlphabet() {
  char count = 'a';
  while (count <= 'z') {
    std::cout << "Letter: " << count << ", ASCII-code: " << static_cast<std::int16_t>(count) << '\n';
    ++count;
  }
}


int main() {
  printAlphabet();

  return 0;
}
