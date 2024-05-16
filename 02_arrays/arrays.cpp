/*
 * Двадцати студентам предложили оценить качествоо еды в столовой
 * по шкале от 1 до 5, где 1 - "ужастно", 5 - "превосходно".
 * Поместите 20 ответов в массив чисел типа int и вычислите
 * частотное распределение ответов.
 */

#define FMT_HEADER_ONLY
#include <array>
#include <fmt/format.h>
#include <iostream>

int main() {
  // Результаты опроса
  constexpr std::array responses{1, 2, 4, 5, 3, 4, 2, 3, 0, 2,
                                 1, 3, 3, 4, 3, 1, 2, 3, 5, 3};

  // constexpr вычисляется во время компиляции
  // и ускоряет работу программы
  constexpr size_t frequency_size{6};

  // Структура для хранения частоты
  std::array<int, frequency_size> frequency{};

  // Подсчёт частоты ответов
  // Частота = кол-во повторений ответа
  for (const int &response : responses) {
    frequency.at(response) += 1;
  }

  // Вывод заголовка таблицы
  std::cout << fmt::format("{:>6}{:>12}{:>12}\n", "Rating", "Frequency",
                           "Gistogram");
  // Выводим частоту по рейтингу
  for (size_t i{1}; i < frequency.size(); i++) {
    std::cout << fmt::format("{:>6}{:>12}{:>12}\n", i, frequency.at(i),
                             std::string(frequency.at(i), '*'));
  }
}
