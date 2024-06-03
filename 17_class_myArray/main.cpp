#include "MyArray.h"

int main() {
  // Создаем MyArray с параметрами size
  MyArray my_array(5);
  // Создаем MyArray со скобочной инициализацией списком чисел
  MyArray my_array_init{10, 20, 30, 40, 6};
  // Cоздаем MyArray с копирующим конструктором
  MyArray my_array_copy{my_array_init};
  // Cоздаем MyArray с копирующим конструктором через присваивание
  MyArray my_array_copy_eq = my_array_init;
  // Копирущий конструктор через присваивание
  my_array = my_array_copy;

  for (size_t i = 0; i < my_array.size(); i++) {
    std::cout << my_array[i] << " ";
  }
  std::cout << "\n";

  std::cout << my_array_init << "\n";
}
