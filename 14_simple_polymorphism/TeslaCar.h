#pragma once
#include "Car.h"

class TeslaCar : public Car {
public:
  void run() override;

  TeslaCar(std::string model);
};
