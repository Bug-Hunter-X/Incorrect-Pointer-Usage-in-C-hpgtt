#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;

  // Correctly modify the variable through the pointer
  *ptr = 20;

  printf("%d\n", x); // Output: 20
  return 0;
}
