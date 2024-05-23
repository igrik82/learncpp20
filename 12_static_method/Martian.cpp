#include "Martian.h"
#include <iostream>

Martian::Martian(std::string_view name) {
  ++m_counter;
  setName(name);
  std::cout << "Martian " << m_name << " was created." << std::endl;
}

Martian::~Martian() {
  --m_counter;
  std::cout << "Martian " << m_name << " was destroed." << std::endl;
}

void Martian::setName(std::string_view name) { m_name = name; }
int Martian::getCountMartian() { return m_counter; }
std::string &Martian::getName() { return m_name; }
