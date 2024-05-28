#include "AccountWithCommission.h"
#include "AccountBase.h"
#include <string_view>

AccountWithCommission::AccountWithCommission(std::string_view name,
                                             double balance, double commission)
    // Вызываем конструктор базового класса и
    // даем ему возможность обабатывать переменные
    // средствами своего класса
    : AccountBase{name, balance} {
  // Мы обрабатываем лишь методы которые были добавлены
  // к базовому классу
  setCommissionRate(commission);
}
void AccountWithCommission::setCommissionRate(double commission_rate) {
  if (commission_rate > 0 && commission_rate < 1) {
    m_commission_rate = commission_rate; // Добавить обработчик ошибок
  }
}
double AccountWithCommission::getCommissionRate() {
  // Вызываем метод базового класса через ::
  return AccountBase::getBalance() * m_commission_rate;
}

double AccountWithCommission::getBalance() {
  return AccountBase::getBalance() + getCommissionRate();
}
