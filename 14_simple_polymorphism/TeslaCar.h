#pragma once
#include "Car.h"

class TeslaCar final : public Car {
public:
  void run() override;

  TeslaCar(std::string model);
};
