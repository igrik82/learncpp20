#include <iostream>

// Прототип функции передачи по значению
int square(int var);
// Прототип функции передачи по ссылке
void squarePtr(int *var);

int main() {
  int var{2};

  std::cout << "Передача по значению \"var\" - " << square(var) << "\n";
  std::cout << "После передачи по значению \"var\" равняется - " << var << "\n";

  squarePtr(&var);
  std::cout << "После передачи по ссылке \"var\" равняется  - " << var << "\n";
}

int square(int var) { return var * var; }

void squarePtr(int *var) { *var = *var * *var; }
