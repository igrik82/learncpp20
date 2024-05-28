/* Класс наследованный от AccountBase, добавляющий возможность
 * установки процента комиссии выплачиваемой за использование
 * денег держателя счета.
 */

#pragma once
#include "AccountBase.h"
#include <string_view>

class AccountWithCommission : public AccountBase {
private:
  double m_commission_rate;

public:
  // Устанавливаем и получаем процент комиссии
  void setCommissionRate(double commission_rate);
  double getCommissionRate();
  // Переопределяем метод базового класса и получаем сумму баланса с комиссией
  double getBalance();

  // Конструктор
  AccountWithCommission(std::string_view name, double balance,
                        double commission);
};
