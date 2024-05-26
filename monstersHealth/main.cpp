#include <cassert>
#include <cstdint>
#include <iostream>
#include <string>

// Типы монстров
enum class MonsterType {
  ogre,
  goblin,
  skeleton,
  orc,
  roll,
};


// Параметры монстров
struct Monster {
  MonsterType   type;
  std::string   name;
  std::uint16_t health;
};


// Печать имени монстра
std::string printMonsterType(Monster monster) {
  if (monster.type == MonsterType::ogre) {
    return "Ogre";
  }
  if (monster.type == MonsterType::goblin) {
    return "Goblin";
  }
  if (monster.type == MonsterType::skeleton) {
    return "Skeleton";
  }
  if (monster.type == MonsterType::orc) {
    return "Orc";
  }
  if (monster.type == MonsterType::roll) {
    return "Roll";
  }
  assert(false);
  return "No Name";
}


// Печать информации о монстре
void printMonsterInformation(Monster monster) {
  std::cout << "This " << printMonsterType(monster)
            << " is named " << monster.name
            << " and has " << monster.health << " health.\n";
}


int main() {
  const Monster goblin = {MonsterType::goblin, "Nikita", 170};
  const Monster orc    = {MonsterType::orc, "Dima", 228};

  printMonsterInformation(goblin);
  printMonsterInformation(orc);

  return 0;
}
