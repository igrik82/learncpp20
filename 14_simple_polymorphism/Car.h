/* Пример простого полииморфизма где базовый класс
 * описывает автомобиль в целом, а дочерние классы
 * описывают различноое начало движения автомобиля.
 * */

#pragma once
#include <string>

class Car {
private:
  std::string m_model;

public:
  void setModel(std::string model);
  std::string &getModel();

  // Виртуальный метод нужен для использования
  // пиолиморфизма в дочерних классах, а также
  // возможности создавать ссыдки на дочерние
  // классы.
  virtual void run();

  // Конструктор
  Car();
  Car(std::string model);
};
