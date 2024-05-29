#include "TeslaCar.h"
#include "Car.h"
#include <iostream>

TeslaCar::TeslaCar(std::string model) : Car{model} {}

void TeslaCar::run() {
  std::cout << "Я Тесла разгоняюсь моментально!"
            << "\n";
}
