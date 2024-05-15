#define FMT_HEADER_ONLY
#include "coub_volume.h"
#include <fmt/format.h>
#include <iostream>

int main() {
  int int_val = coub_vol(10, 10, 10);
  std::cout << fmt::format("Int value - {} m3\n", int_val);
  double double_val = coub_vol(1.5, 1.5, 1.5);
  std::cout << fmt::format("Double value - {} m3\n", double_val);

  std::cout << fmt::format("Привет!\n");
  return 0;
}
