#include "Car.h"
#include "TeslaCar.h"
#include <iostream>
#include <string>

int main() {
  Car autoStd{"Базовая"};
  std::cout << "Модель - " << autoStd.getModel() << "\n";
  autoStd.run();

  TeslaCar autoTesla{"Тесла"};
  std::cout << "Модель - " << autoTesla.getModel() << "\n";
  autoTesla.run();

  std::cout << "\nДинамический полиморфизм: вызов через указатель базового "
               "класса объект производного класса:\n";
  // Направляем указатель базового класса на объект
  // производного класса
  Car *autoStdPtr{&autoTesla};
  // Динамический полиморфизм: вызываем autoTesla
  // через указатель базового класса на объект производного класса
  autoStdPtr->setModel("Полиморфная Tesla");
  std::cout << "Полиморфизм модели - " << autoStdPtr->getModel() << "\n";
  autoStdPtr->run();
}
