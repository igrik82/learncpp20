#include <iostream>
#include <memory>

class Item {
private:
  int _quantity{0};

public:
  int getQuantity() const { return _quantity; }

  // Constructor
  Item(int i) : _quantity{i} {
    std::cout << "Конструктор для Item " << _quantity << "\n";
  }
  // Destructor
  ~Item() { std::cout << "Деструктор для Item " << _quantity << "\n"; }
};

int main() {
  std::cout << "Вызываем unique_ptr который указывает на Item:\n";

  // Создаем объект unique_ptr и определяем значение
  auto ptr{std::make_unique<Item>(7)};
  // Используем указатель
  std::cout << "Переданное значение: " << ptr->getQuantity() << "\n";
}
