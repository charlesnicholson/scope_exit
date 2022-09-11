// this code is in the public domain. see the LICENSE file for details.
#include "scope_exit.h"
#include <cstdio>

int main() {
  int a = 10;
  SCOPE_EXIT { std::printf("exiting\n"); };
  SCOPE_EXIT { std::printf("a == %d\n", a); };
  SCOPE_EXIT { std::printf(" world\n"); };
  SCOPE_EXIT { a *= 2; };
  std::printf("hello");
  ++a;
  return 0;
}

