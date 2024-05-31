#pragma once
#include "Human.h"
#include <string>
#include <string_view>

class Student final : public Human {

public:
  std::string doWork() const;

  std::string introduce() const; // Виртуальная функция

  // Конструктор
  Student(std::string_view name);
};
