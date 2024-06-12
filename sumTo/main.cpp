#include <cstdint>
#include <iostream>


// Считывание значения
std::int16_t readValue() {
  std::cout << "Enter value: ";
  std::int16_t value;
  std::cin >> value;
  return value;
}


// Подсчёт суммы
std::int16_t sumTo(std::int16_t value) {
  auto sumValue = 0;
  for (auto count = 0; count <= value; ++count) {
    sumValue += count;
  }
  return sumValue;
}


// Печать суммы
void printSumTo(std::int16_t sumValue) {
  std::cout << sumValue;
}


int main() {
  const std::int16_t value    = readValue();
  const std::int16_t sumValue = sumTo(value);
  printSumTo(sumValue);

  return 0;
}
