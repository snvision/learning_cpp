#include "constansts.h"
#include <iostream>


//Считывание высоты башни
double readTowerHeight() {
  std::cout << "Enter the initial height of the tower in meters: ";
  double towerHeight;
  std::cin >> towerHeight;

  return towerHeight;
}


//Вычисление текущей высоты мяча
double calcBallHeight(const double towerHeight, double fallTimeInSec) {
  double ballHeight        = (myConstants::gravity * fallTimeInSec * fallTimeInSec) / 2;
  double currentBallHeight = towerHeight - ballHeight;

  return currentBallHeight;
}


//Печать текущей высоты мяча
void printCurrentHeight(double currentBallHeight, double fallTimeInSec) {
  std::cout << "At " << fallTimeInSec << " seconds, the ball is at height: "
            << currentBallHeight << " meters\n";
}


//Вычисление и печать текущей высоты мяча
void calcAndPrintCurrentBallHeight(double towerHeight, double fallTimeInSec) {
  // Пока текущая высота мяча больше или равна высоте земли, печчать текущей высоты мяча
  while (calcBallHeight(towerHeight, fallTimeInSec) > myConstants::groundLevel) {
    printCurrentHeight(calcBallHeight(towerHeight, fallTimeInSec), fallTimeInSec);
    ++fallTimeInSec;
  }
  // Есди текущая высота стала меньше или равна нулю, печать сообщения
  if (calcBallHeight(towerHeight, fallTimeInSec) <= myConstants::groundLevel) {
    std::cout << "At " << fallTimeInSec << " seconds the ball is on ground\n";
  }
}


int main() {
  const double towerHeight   = readTowerHeight();
  double       fallTimeInSec = 0.0;
  calcAndPrintCurrentBallHeight(towerHeight, fallTimeInSec);

  return 0;
}
