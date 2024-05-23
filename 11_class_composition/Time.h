#pragma once
#include <string>

class Time {
private:
  int m_hour{0};
  int m_minute{0};
  int m_seconds{0};
  std::string strTime{};

public:
  Time(int hour, int minute, int seconds);

  void setTime(int hour, int minute, int seconds);
  std::string &getTime();
};
