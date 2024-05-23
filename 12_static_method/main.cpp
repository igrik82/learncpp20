#include "Martian.h"
#include <iostream>

int main() {
  Martian alien1{"Hoy"};
  Martian alien2{"Hoi"};
  Martian alien3{"How"};
  std::cout << "Всего пришельцев - " << Martian::getCountMartian() << "\n";
}
