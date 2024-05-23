#pragma once
#include "Time.h"
#include <string>
#include <string_view>

class Account {
private:
  std::string m_name;
  double m_balance;
  Time m_date;

public:
  void setName(std::string_view name);
  std::string &getName();

  void setBalance(double balance);
  double getBalance();
  void deposit(double amount);

  // Конструктор
  Account(std::string_view name, double balance, Time date);
};
