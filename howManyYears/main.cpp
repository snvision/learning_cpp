#include <iostream>
#include <string>


// Чтение имени и фамилии
std::string readFullName() {
  std::cout << "Enter your full name: ";
  std::string fullName;
  std::getline(std::cin, fullName);
  return fullName;
}


// Чтение возраста
double readYourAge() {
  std::cout << "Enter your age: ";
  double yourAge;
  std::cin >> yourAge;
  return yourAge;
}


// Вычисление длины строки с именем и фамилией
double calcFullNameLength(std::string fullName) {
  return fullName.length();
}


// Посчёт времени жизни за каждую букву введённых имени и фамилии
double calcLivedYears(double yourAge, double fullNameLength) {
  return yourAge / fullNameLength;
}


// Печать числа прожитых лет
void printLivedYears(double yourAge, double fullNameLength) {
  double livedYears = calcLivedYears(yourAge, fullNameLength);
  std::cout << "You've lived " << livedYears << " years for each letter in your name." << '\n';
}


int main() {
  std::string fullName       = readFullName();
  double      yourAge        = readYourAge();
  double      fullNameLength = calcFullNameLength(fullName);

  printLivedYears(yourAge, fullNameLength);

  return 0;
}
