#include <cstdint>
#include <iostream>


// Параметры размещения рекламы на сайте
struct Advertising {
  std::uint16_t numberOfAds;
  double        PercentageOfClicks;
  double        earningsPerClick;
};


// Печать результатов рекламной компании
void printAdvResult(Advertising advertising) {
  std::cout << "How many ads have you shown to visitors: "
            << advertising.numberOfAds << '\n'
            << "How many percent of visitors clicked on the ads: "
            << advertising.PercentageOfClicks << '\n'
            << "How much did you earn on average for each click on the ads: "
            << advertising.earningsPerClick << '\n'
            << "You have earned money in a day: "
            << (advertising.numberOfAds * advertising.PercentageOfClicks * advertising.earningsPerClick) << '\n';
}


int main() {
  Advertising advertising;
  std::cout << "Enter how many ads have you shown to visitors: ";
  std::cin >> advertising.numberOfAds;
  std::cout << "Enter how many percent of visitors clicked on the ads: ";
  std::cin >> advertising.PercentageOfClicks;
  std::cout << "Enter how much did you earn on average for each click on the ads: ";
  std::cin >> advertising.earningsPerClick;
  std::cout << '\n';

  printAdvResult(advertising);

  return 0;
}
