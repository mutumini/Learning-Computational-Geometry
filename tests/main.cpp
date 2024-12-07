#include <iostream>

void PrintSingleLine() {
  std::cout << "<--------------------------------------------------------------------------->\n";
}

int main(int argc, char* argv[]) {  // NOLINT
  std::cout << "Hello, World!\n";

  PrintSingleLine();
  return 0;
}
