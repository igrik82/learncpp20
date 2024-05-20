#include "account.h"
#include <iostream>
#include <string>

int main() {
  Account myAccount{}; // Создаем объект класса Account

  std::cout << "Имя аккаунта - " << myAccount.getName()
            << "\n"; // Пока в объект не передано значение

  myAccount.setName("Igor");
  std::cout << "Имя аккаунта - " << myAccount.getName()
            << "\n"; // Пока в объект не передано значение
}
