/* Базовый класс который, обеспечивает только возможность
 * сохранности денег и их получения без дополнительных
 * процентов от банка.
 */

#pragma once
#include <string>
#include <string_view>

class AccountBase {
private:
  std::string m_name;
  double m_balance;

public:
  void setName(std::string_view name);
  std::string &getName();

  void setBalance(double balance);
  double getBalance();

  AccountBase(std::string_view name, double balance);
};
