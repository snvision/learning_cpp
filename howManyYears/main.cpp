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


// Печать числа прожитых лет
void printLivedYears(double livedYears) {
  std::cout << "You've lived " << livedYears << " years for each letter in your name." << '\n';
}


int main() {
  const std::string fullName   = readFullName();
  const double      yourAge    = readYourAge();
  const double      livedYears = yourAge / fullName.length();

  printLivedYears(livedYears);

  return 0;
}
