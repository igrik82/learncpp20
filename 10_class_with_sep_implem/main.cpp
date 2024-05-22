#include "Account.h"
// #include <stdexcept>
// #include <string>
#include <iostream>
#include <stdexcept>
#include <string_view>

int main() {
  Account account1{"Igor", 10};

  std::cout << account1.getName() << "\n";
  std::cout << account1.getBalance() << "\n";

  account1.deposit(2);
  std::cout << account1.getBalance() << "\n";
  try {
    account1.deposit(-4);
  } catch (const std::invalid_argument &e) {
    std::cout << "Exeption: " << e.what() << "\n";
  }
  std::cout << account1.getBalance() << "\n";

  // Конструктор перегружает класс с подходящими
  // значениями по умолчанию
  Account account2{10};
  std::cout << account2.getName() << "\n";
  std::cout << account2.getBalance() << "\n";
  // Конструктор перегружает класс с подходящими
  // значениями по умолчанию
  Account account3{"Alena"};
  std::cout << account3.getName() << "\n";
  std::cout << account3.getBalance() << "\n";
  // Конструктор перегружает класс с подходящими
  // значениями по умолчанию
  Account account4{};
  std::cout << account4.getName() << "\n";
  std::cout << account4.getBalance() << "\n";
}
