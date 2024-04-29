#include <iostream>


// Ввод числа с клавиатуры
std::uint16_t readDigit() {
  std::cout << "Enter a positive integer digit less than 10: ";
  std::uint16_t digit;
  std::cin >> digit;

  return digit;
}

// Проверка на ввод цифры 2, 3, 5 или 7
bool isEqual(std::uint16_t digit) {
  if (digit == 2) {
    return true;
  }
  if (digit == 3) {
    return true;
  }
  if (digit == 5) {
    return true;
  }
  if (digit == 7) {
    return true;
  }

  return false;
}

// Печать результата
void printResult(bool result) {
  if (result) {
    std::cout << "The digit is prime\n";
  } else {
    std::cout << "The digit is not prime\n";
  }
}

// Проверка чётности/нечётности и печать результата
void isEqualPrintResult(bool result) {
  printResult(result);
}


int main() {
  std::uint16_t digit  = readDigit();
  bool          result = isEqual(digit);

  isEqualPrintResult(result);

  return 0;
}
