#include<iostream>

void f(int i) {
  if (i < 0) {
    // Exception is created but is not thrown.
    std::runtime_error("Unexpected argument");
  }
}

int main() { return 0; }
