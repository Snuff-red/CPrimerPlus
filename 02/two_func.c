/* two_func.c -- program using two functions */

#include <stdio.h>

void butler(void);

int main(void) {
  printf("I will summon the butler function.\n");
  butler();
  printf("Yes, Bring me some tea and writeable DVDS.\n");

  return 0;
}

void butler(void) {
  printf("You rang, Sir?\n");
}
