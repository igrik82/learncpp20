#include "Human.h"
#include <string>

void Human::setName(std::string_view name) { _name = name; }
std::string Human::getName() const { return _name; }

// Чистую виртуальную функцию не определяем в базовом классе

std::string Human::introduce() const {
  std::string who = "Я абстрактный класс " + getName();
  return who;
}

// Коструктор
Human::Human(std::string_view name) : _name{name} {}
