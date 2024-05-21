#include "Account.h"
#include <iostream>

int main() {
  Account account1{"Igor", -12};
  Account account2{"Alena", 12};

  std::cout << "Имя аккаунта - " << account1.getName() << "\n";
  std::cout << "Баланс -  " << account1.getBalance() << "\n";
  std::cout << "Имя аккаунта - " << account2.getName() << "\n";
  std::cout << "Баланс -  " << account2.getBalance() << "\n";
}
