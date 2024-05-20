#include <iostream>
#include <string_view>
// #include <string>
#include "Account.h"

int main() {
  Account account{"Igor"};

  std::cout << "Имя - " << account.getName() << "\n";
  std::cout << "Ячейка - " << &account.getName() << "\n";
}
