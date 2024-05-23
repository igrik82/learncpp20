#include "Account.h"
#include "Time.h"
// #include <stdexcept>
// #include <string>
#include <iostream>
#include <string_view>

int main() {
  Time date{7, 7, 7};
  Account account1{"Igor", 10, date};

  std::cout << account1.getName() << "\n";
  std::cout << account1.getBalance() << "\n";
}
