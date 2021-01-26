#include <stdio.h>
#include "GCD/gcd.h"

int main(int argc, char const *argv[]) {
  int res = 0;
  int a = 10;
  int b = 15;
  res = gcd(10, 15);
  printf("GCD of %d and %d is %d\n", a, b, res);
  return 0;
}
