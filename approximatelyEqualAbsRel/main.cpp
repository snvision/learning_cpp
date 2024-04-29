#include <cmath>
#include <iostream>


// Возвращаем true, если разница между a и b меньше или равна процента эпсилона. Подходит для чисел не близких к нулю
bool aproximatelyEqual(double firstNum, double secondNum, double epsilon) {
  return fabs(firstNum - secondNum) <= ((fabs(firstNum) < fabs(secondNum) ? fabs(secondNum) : fabs(firstNum)) * epsilon);
}

// Вовращаем true, если разница между a и b меньше absEpsilon или в пределах relEpsilon
bool approximatelyEqualAbsRel(double firstNum, double secondNum, double absEpsilon, double relEpsilon) {
  double diff = fabs(firstNum - secondNum);
  if (diff <= absEpsilon) {
    return true;
  }
  // В противном случае возвращаемся к алгоритму Кнута
  return diff <= ((fabs(firstNum) < fabs(secondNum) ? fabs(secondNum) : fabs(firstNum)) * relEpsilon);
}


int main() {
  // Значение близко к 1.0, но из-за ошибок округления чуть меньше 1.0
  double firstNum = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
  // Значения ненулевые, результат верный
  std::cout << aproximatelyEqual(firstNum, 1.0, 1e-8) << '\n';

  //Сравниваем почти 0.0 с 0.0, результат неверный
  std::cout << aproximatelyEqual(firstNum - 1.0, 0.0, 1e-8) << '\n';

  //Сравниваем почти 0.0 с 0.0, результат верный
  std::cout << approximatelyEqualAbsRel(firstNum - 1.0, 0.0, 1e-12, 1e-8) << '\n';

  return 0;
}
