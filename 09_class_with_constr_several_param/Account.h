#include <string>
#include <string_view>

class Account {
private:
  std::string m_name;
  double m_balance;

public:
  void setName(std::string_view name) { m_name = name; }
  std::string &getName() { return m_name; }

  void setBalance(double balance) {
    if (balance > 0) {
      m_balance = balance;
    } else {
      m_balance = 0;
    }
  }

  double getBalance() { return m_balance; }

  Account(std::string_view name, double balance) : m_name{name} {
    setBalance(balance);
  }
};
