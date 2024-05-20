#include <iostream>
#include <string>
#include <string_view>

class Account {
private:
  std::string m_name;

public:
  // Конструктор класса
  explicit Account(std::string_view name)
      : m_name{name} { // Инициализируем элемент
    std::cout << &m_name << "\n";
    // Пустое телоло
  }

  // Методы класса
  void setName(std::string_view name) { m_name = name; }

  const std::string &getName() const { return m_name; }
};
