#include "Martian.h"
#include <iostream>

int main() {
  Martian alien1{"Hoy"};
  Martian alien2{"Hoi"};
  std::cout << "Я тоже имею доступ к статической переменной сейчас вместе со "
               "мной пришельцев - "
            << alien2.getCountMartian() << "\n";
  Martian alien3{"How"};
  std::cout << "Всего пришельцев - " << Martian::getCountMartian() << "\n";
}
