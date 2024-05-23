#pragma once
#include <string>
#include <string_view>

class Martian {
private:
  // Статическая переменная - счетчик
  // inline означает, что вместо объявления функции
  // происходит ее определение во время компиляции
  inline static int m_counter{0};
  std::string m_name;

public:
  void setName(std::string_view name);
  static int getCountMartian();
  std::string &getName();

  Martian(std::string_view name);
  ~Martian();
};
