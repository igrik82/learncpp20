#include "Time.h"
#include <string>

Time::Time(int hour, int minute, int seconds) {
  setTime(hour, minute, seconds);
}

void Time::setTime(int hour, int minute, int seconds) {
  m_hour = hour;
  m_minute = minute;
  m_seconds = seconds;
}
std::string &Time::getTime() {
  return strTime = std::to_string(m_hour) + "-" + std::to_string(m_minute) +
                   "-" + std::to_string(m_seconds);
}
