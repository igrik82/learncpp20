#include "Car.h"
#include <iostream>
#include <string>

Car::Car() : Car{"Я базовая модель автомобиля."} {}
Car::Car(std::string model) { setModel(model); }

void Car::setModel(std::string model) { m_model = model; }
std::string &Car::getModel() { return m_model; }

void Car::run() {
  std::cout << "Стандартный старт и разгон."
            << "\n";
}
