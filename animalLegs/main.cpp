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
  }
}


int main() {


  return 0;
}
