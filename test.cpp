#include<iostream>

void f(int i) {
  if (i < 0) {
    // Exception is created but is not thrown.
    std::runtime_error("Unexpected argument");
  }
  // Original - Addition in the integer domain
  int x;
  absl::Time t;
  int result = absl::ToUnixSeconds(t) + x;

  // Suggestion - Addition in the absl::Time domain
  int result = absl::ToUnixSeconds(t + absl::Seconds(x));
}

int main() { return 0; }
