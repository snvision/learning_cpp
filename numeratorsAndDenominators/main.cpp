#include <cstdint>
#include <iostream>


// Информация о числителях и знаменателях дроби
struct Fraction {
  std::uint16_t numerator;
  std::uint16_t denominator;
};


// Вычисление дроби из произведений числителей и знаменателей
void multiply(Fraction firstFraction, Fraction secondFraction) {
  std::cout << "Result fraction: "
            << static_cast<double>(firstFraction.numerator * secondFraction.numerator)
            / (firstFraction.denominator * secondFraction.denominator) << '\n';
}


int main() {
  Fraction firstFraction;
  std::cout << "Enter first numerator: ";
  std::cin >> firstFraction.numerator;
  std::cout << "Enter first denominator: ";
  std::cin >> firstFraction.denominator;

  Fraction secondFraction;
  std::cout << "Enter second numerator: ";
  std::cin >> secondFraction.numerator;
  std::cout << "Enter second denominator: ";
  std::cin >> secondFraction.denominator;

  multiply(firstFraction, secondFraction);

  return 0;
}
