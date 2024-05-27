#include <iostream>
#include <string>


// Виды животных
enum class Animal {
  pig,
  chicken,
  goat,
  cat,
  dog,
  ostrich,
};


// Получение имени животного в зависимости от значения перечислителя
std::string getAnimalName(Animal animal) {
  switch (animal) {
    case Animal::pig:
      return "pig";
      break;
    case Animal::chicken:
      return "chicken";
      break;
    case Animal::goat:
      return "goat";
      break;
    case Animal::cat:
      return "cat";
      break;
    case Animal::dog:
      return "dog";
      break;
    case Animal::ostrich:
      return "ostrich";
      break;
    default:
      return "Unknown animal";
      break;
  }
}


// Получение количества ног животного
std::string getNumberOfLegs(Animal animal) {
  switch (animal) {
    case Animal::pig:
    case Animal::goat:
    case Animal::cat:
    case Animal::dog:
      return " 4 ";
      break;
    case Animal::chicken:
    case Animal::ostrich:
      return " 2 ";
      break;
    default:
      return " has unknown number of legs";
      break;
  }
}


// Печать имени животного и количества его ног
void printNumberOfLegs (Animal animal) {
  std::cout << "A " << getAnimalName(animal) << " has" << getNumberOfLegs(animal) << "legs.\n";
}


int main() {
  printNumberOfLegs(Animal::cat);
  printNumberOfLegs(Animal::chicken);

  return 0;
}
