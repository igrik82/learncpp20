#include "AccountBase.h"
#include "AccountWithCommission.h"
#include <string_view>
// #include <string>
#include <iostream>

int main() {

  std::cout << "Простой счет без процентов:\n";
  AccountBase accountSimple{"Igor", 99.99};
  std::cout << "Владелец простого счета - " << accountSimple.getName() << "\n";
  std::cout << "Будет возвращено - " << accountSimple.getBalance() << "$\n";

  std::cout << "Новый счет с выплатой процентов:\n";
  AccountWithCommission accountCommission{"Igor", 99.99, 0.16};
  std::cout << "Владелец прщцентного счета - " << accountCommission.getName()
            << "\n";
  std::cout << "Будет возвращено - " << accountCommission.getBalance() << "$\n";
}
