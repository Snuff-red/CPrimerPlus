#include <stdio.h>

int main() {
  int fathoms, feet;

  fathoms = 2;
  feet = fathoms * 6;

  printf("There are %d feet  in %d fathoms!\n", feet, fathoms);
  printf("Yes, I said %d feet!\n", 6 * fathoms);

  return 0;
}
