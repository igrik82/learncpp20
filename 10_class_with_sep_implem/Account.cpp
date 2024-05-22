#include "Account.h"
#include <stdexcept>
#include <string>
#include <string_view>

// Конструктор со значениями по умолчанию
Account::Account() : Account{"Default", 0} {}
Account::Account(std::string_view name) : Account{name, 0} { setName(name); }
Account::Account(double balance) : Account{"Default", balance} {
  setBalance(balance);
}
Account::Account(std::string_view name, double balance) {
  setName(name);
  setBalance(balance);
}

void Account::setName(std::string_view name) { m_name = name; }
std::string &Account::getName() { return m_name; }

void Account::setBalance(double balance) {
  if (balance < 0) {
    throw std::invalid_argument{"The balance must be positive."};
  }
  m_balance = balance;
}

double Account::getBalance() { return m_balance; }

void Account::deposit(double amount) {
  if (amount < 0) {
    throw std::invalid_argument{"This is deposit, not withdrow."};
  }
  m_balance += amount;
}
