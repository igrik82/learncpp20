#pragma once
#include <initializer_list>
#include <iostream>
#include <memory>

class MyArray final {
private:
  // Перегруженный оператор извлечения из потока
  friend std::istream &operator>>(std::istream &in, MyArray &a);
  // Используется оператором копирующего присваивания
  friend void swap(MyArray &a, MyArray &b) noexcept;
  // Перегрузка оператора <<
  friend std::ostream &operator<<(std::ostream &out, const MyArray &a);
  // Размер массива на основе указателя
  size_t _size{0};
  // Умный указатель на массив чисел
  std::unique_ptr<int[]> _ptr;

public:
  // Конструкторы
  explicit MyArray(size_t size); // Создаем массив размером size
  // Создаем MyArray со скобочной инициализацией списком чисел
  explicit MyArray(std::initializer_list<int> list);
  // Копирующий конструктор
  MyArray(const MyArray &original);
  // Оператор копирующего присваивания
  MyArray &operator=(const MyArray &right);
  // Перемещающий конструктор
  MyArray(MyArray &&original) noexcept;
  // Оператор перемещающего присваивания
  MyArray &operator=(MyArray &&right);
  // Инкрементация каждого элемента
  MyArray &operator++();
  // Инкрементация каждого элемента и возврат копии
  MyArray operator++(int);
  // Прибавляем число к каждому элементу
  MyArray &operator+=(int value);
  ~MyArray(); // Деструктор

  // Возвращаем размер
  size_t size() const noexcept { return _size; }
  // Строковое представление
  std::string toString() const;
  // Оператор равенства
  bool operator==(const MyArray &right) const noexcept;
  // Оператор индекса
  int &operator[](size_t index) const;
  int &operator[](size_t index);
  // Преобразование MyArray в значение bool
  explicit operator bool() const noexcept { return size() != 0; }
};
