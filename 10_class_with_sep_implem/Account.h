#pragma once
#include <string>
#include <string_view>

class Account {
private:
  std::string m_name;
  double m_balance;

public:
  void setName(std::string_view name);
  std::string &getName();

  void setBalance(double balance);
  double getBalance();
  void deposit(double amount);

  // Конструктор
  Account();
  Account(std::string_view name);
  Account(double balance);
  Account(std::string_view name, double balance);
};
