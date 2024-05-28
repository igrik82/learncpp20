#include "AccountBase.h"
#include <string>
#include <string_view>

// конструктор
AccountBase::AccountBase(std::string_view name, double balance) {
  setName(name);
  setBalance(balance);
}

void AccountBase::setName(std::string_view name) {
  m_name = name; // Нужно добавить проверку
}
std::string &AccountBase::getName() { return m_name; }

void AccountBase::setBalance(double balance) { m_balance = balance; }
double AccountBase::getBalance() { return m_balance; }
