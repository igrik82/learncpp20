#include "MyArray.h"
#include <algorithm>
#include <cstddef>
#include <initializer_list>
#include <iostream>
#include <iterator>
#include <memory>
#include <span>
#include <stdexcept>
#include <string>
#include <utility>

// Функция для копирования и обмена
void swap(MyArray &a, MyArray &b) noexcept {
  std::swap(a._size, b._size);
  a._ptr.swap(b._ptr);
}
// Инициализируем конструктор MyArray с параметрами size
MyArray::MyArray(size_t size)
    : _size{size}, _ptr{std::make_unique<int[]>(size)} {
  std::cout << "MyArray(size_t) конструктор.\n";
}

// Создаем MyArray со скобочной инициализацией списком чисел
MyArray::MyArray(std::initializer_list<int> list)
    : _size{list.size()}, _ptr{std::make_unique<int[]>(list.size())} {
  std::cout << "MyArray(initializer_list) конструктор\n";

  // Копируем элементы из исходного массива
  std::copy(std::begin(list), std::end(list), _ptr.get());
}

// Копирующий конструктор должен получить ссылку на MyArray
MyArray::MyArray(const MyArray &original)
    : _size{original.size()}, _ptr{std::make_unique<int[]>(original.size())} {
  std::cout << "MyArray копирующий конструктор\n";
  // Копируем элементы из исходного массива
  const std::span<const int> source{original._ptr.get(), original.size()};

  std::copy(std::begin(source), std::end(source), _ptr.get());
}
// Копирущий конструктор через присваивание
MyArray &MyArray::operator=(const MyArray &right) {
  std::cout << "MyArray сопирующий конструктор через присваивание =";
  // Вызываем коирующий конструктор определенный выше
  MyArray temp{right};
  swap(*this, temp);
  return *this;
}
// Перемещающий конструктор
MyArray::MyArray(MyArray &&original) noexcept
    : _size{std::exchange(original._size, 0)}, _ptr{std::move(original._ptr)} {
  std::cout << "MyArray перемещающий коструктор";
}

// Оператор индекса
int &MyArray::operator[](size_t index) const {
  // Проверяем корректность индекса
  if (index >= _size) {
    throw std::out_of_range("Index out of range.");
  }
  return _ptr[index];
}

int &MyArray::operator[](size_t index) {
  // Проверяем корректность индекса
  if (index >= _size) {
    throw std::out_of_range("Index out of range.");
  }
  return _ptr[index];
}

// Инкрементация каждого элемента
MyArray &MyArray::operator++() {
  const std::span<int> items{_ptr.get(), _size};
  std::for_each(std::begin(items), std::end(items), [](auto &item) { ++item; });
  return *this;
}

// Инкрементация каждого элемента и возврат копии
MyArray MyArray::operator++(int) {
  MyArray temp{*this};
  ++(*this);
  return temp;
}
// Перегрузка оператора <<
std::ostream &operator<<(std::ostream &out, const MyArray &a) {
  for (size_t i = 0; i < a._size; i++) {
    out << a[i] << " ";
  }
  return out;
}
// Деструктор
MyArray::~MyArray() { std::cout << "Вызван деструктор\n"; }
