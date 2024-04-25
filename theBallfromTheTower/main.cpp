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
void PrintCurrentHeight(double currentBallHeight, double fallTimeInSec) {
  if (currentBallHeight > 0.0) {
    std::cout << "At " << fallTimeInSec << " seconds, the ball is at height: " << currentBallHeight << " meters\n";
  }
  if (currentBallHeight <= 0.0) {
    std::cout << "At " << fallTimeInSec << " seconds the ball is on ground\n";
  }
}

//Вычисление и печать текущей высоты мяча
void calcAndPrintCurrentBallHeight(double towerHeight, double fallTimeInSec) {
  PrintCurrentHeight(calcBallHeight(towerHeight, fallTimeInSec), fallTimeInSec);
}


int main() {
  const double towerHeight = readTowerHeight();

  calcAndPrintCurrentBallHeight(towerHeight, 0);
  calcAndPrintCurrentBallHeight(towerHeight, 1);
  calcAndPrintCurrentBallHeight(towerHeight, 2);
  calcAndPrintCurrentBallHeight(towerHeight, 3);
  calcAndPrintCurrentBallHeight(towerHeight, 4);
  calcAndPrintCurrentBallHeight(towerHeight, 5);

  return 0;
}
