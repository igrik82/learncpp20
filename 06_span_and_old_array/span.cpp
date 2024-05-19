#include <array>
#include <iostream>
#include <span>
#include <vector>

void print_array_span(std::span<const int> array);

int main() {
  // Объявляем массив с явно указанным размером
  int old_array[5]{1, 2, 3, 4, 5};
  print_array_span(old_array);

  // Объявляем массив через вектор опускаем тип для автоопределения
  std::vector vector_arr{1, 2, 3, 4, 5};
  print_array_span(vector_arr);

  // Объявляем массив через массив опускаем тип для автоопределения
  std::array array_arr{1, 2, 3, 4, 5};
  print_array_span(array_arr);
}

// Неявное создание объекта span для возможности использования старых
// массивов для определения их границ. Универсальна и для векторов и
// новых массивов
void print_array_span(std::span<const int> array) {
  for (const auto &item : array) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}
