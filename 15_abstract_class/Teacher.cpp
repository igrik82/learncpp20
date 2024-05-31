#include "Teacher.h"
#include <string>
#include <string_view>

// Конструктор
Teacher::Teacher(std::string_view name) : Human(name) {}

std::string Teacher::doWork() const {
  std::string what{"Я учу студентов."};
  return what;
}

std::string Teacher::introduce() const {
  std::string who = "Я учитель наследованный от абстрактного класса, мое имя ";
  who += Human::getName();
  return who;
}
