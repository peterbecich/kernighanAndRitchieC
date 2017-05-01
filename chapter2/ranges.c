#include <stdio.h>
#include <limits.h>
#include <float.h>

int intMax(void);
int intMin(void);

int main(void) {
  int i;
  printf("maximum int\n");
  i = intMax();
  printf("%d\n", i);

  printf("minimum int\n");
  i = intMax();
  printf("%d\n", i);

  printf("using limits.h\n");

  printf("maximum int\n");
  printf("%d\n", INT_MAX);

  printf("minimum int\n");
  printf("%d\n", INT_MIN);

  printf("maximum float\n");
  printf("%f\n", FLT_MAX);

  printf("minimum float\n");
  printf("%f\n",  FLT_MIN);
  
}

int intMax(void) {
  int i = 0;
  int j = 1;
  while(j>i){
    j++;
    i++;
  }
  return i;
}

int intMin(void) {
  signed int i = 0;
  signed int j = -1;
  /* signed int minimum = 0; */
  while(j<i){
    j--;
    i--;
    /* if(j<minimum) */
    /*   minimum = j; */
  }
  return i;
}
