#include <stdio.h>

int maximum(int x, int y) {
  return (x > y) ? x : y;
}

int main(void) {

  int i = (100 > 5) ? 50 : 25;

  printf("%d\n", i);

  printf("max of 300 and 150\n");
  printf("%d\n", maximum(300, 150));
  printf("%d\n", maximum(150, 300));
}
