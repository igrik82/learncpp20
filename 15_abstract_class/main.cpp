#include "Student.h"
#include "Teacher.h"
#include <iostream>

int main() {
  Teacher teacher{"Игорь"};
  std::cout << teacher.introduce() << "\n";
  std::cout << teacher.doWork() << "\n";

  Student student{"Петя"};
  std::cout << student.introduce() << "\n";
  std::cout << student.doWork() << "\n";

  // Вызываем свойства методом динамического полиморфизма через
  // абстрактный класс
  std::cout << "Вызов через ссылку базового класса:\n";
  const Human &humanRef{teacher};
  std::cout << humanRef.introduce() << "\n";
  std::cout << humanRef.doWork() << "\n";

  std::cout << "Вызов через указатель базового класса:\n";
  const Human *humanPtr{&student};
  std::cout << humanPtr->introduce() << "\n";
  std::cout << humanPtr->doWork() << "\n";
}
