#include <string>
#include <string_view>

class Account {
private:
  std::string m_name; // Элемент класса
public:
  // Функция класса для записи объекта
  void setName(std::string_view name) { m_name = name; }

  // Функция класса для отдачи объекта
  // возвращает точку вызова
  // Поскольку возвращается константа гарантирована защита от изменения
  // Также код тела функции не должен изменять ни чего
  const std::string &getName() const { return m_name; }
};
