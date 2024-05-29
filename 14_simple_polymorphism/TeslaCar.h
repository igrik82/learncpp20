#pragma once
#include "Car.h"

// Полпытка наследования после определения финального класса
// невозможна, но это дает преимущества в быстродействии.
// Компилятор оптимизирует код.
class TeslaCar final : public Car {
public:
  void run() override;

  TeslaCar(std::string model);
};
