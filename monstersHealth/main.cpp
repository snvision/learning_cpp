#include <cstdint>
#include <iostream>
#include <string>


// Типы монстров
enum class MonsterType {
  OGRE,
  GOBLIN,
  SKELETON,
  ORC,
  ROLL,
};


// Параметры монстров
struct MonsterParameters {
  MonsterType   type;
  std::string   name;
  std::uint16_t health;
};


// Печать имени монстра
std::string printMonsterType(MonsterParameters monster) {
  if (monster.type == MonsterType::OGRE) {
    return "Ogre";
  }
  if (monster.type == MonsterType::GOBLIN) {
    return "Goblin";
  }
  if (monster.type == MonsterType::SKELETON) {
    return "Skeleton";
  }
  if (monster.type == MonsterType::ORC) {
    return "Orc";
  }
  if (monster.type == MonsterType::ROLL) {
    return "Roll";
  }
  return "No Name";
}


// Печать информации о монстре
void printMonsterInformation(MonsterParameters monster) {
  std::cout << "This " << printMonsterType(monster)
            << " is named " << monster.name
            << " and has " << monster.health << " health.\n";
}


int main() {
  MonsterParameters goblin = {MonsterType::GOBLIN, "Nikita", 170};
  MonsterParameters orc    = {MonsterType::ORC, "Dima", 228};

  printMonsterInformation(goblin);
  printMonsterInformation(orc);

  return 0;
}
