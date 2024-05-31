#pragma once
#include "Human.h"
#include <string>
#include <string_view>

class Teacher final : public Human {
public:
  // Обязательная функция которая должна быть переопределена
  // override указывает на переопределение
  std::string doWork() const override;

  std::string introduce() const override; // Виртуальная функция

  // Конструктор
  Teacher(std::string_view name);
  // Виртуальный деструктор
  virtual ~Teacher() = default;
};
