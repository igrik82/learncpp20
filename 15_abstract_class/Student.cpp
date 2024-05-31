#include "Student.h"
#include <string>
#include <string_view>

Student::Student(std::string_view name) : Human(name) {}

std::string Student::doWork() const {
  std::string what{"Я учусь"};
  return what;
}

std::string Student::introduce() const {
  std::string who{"Я студент наследованный от абстрактного класса мое имя - "};
  who += getName();
  return who;
}
