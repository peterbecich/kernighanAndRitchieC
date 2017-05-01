#include <stdio.h>

int main(void) {
  switch ( 5 ) {
  case 3:
    printf("three\n");
  case 5:
    printf("first five\n");
  /* case 5: */
  /*   printf("second five\n"); */
  case 6:
    printf("six\n");
  default:
    printf("default\n");
  }

  printf("with breaks\n");

  switch ( 5 ) {
  case 3:
    printf("three\n");
    break;
  case 5:
    printf("first five\n");
    break;

  /* case 5: */
  /*   printf("second five\n"); */
  case 6:
    printf("six\n");
    break;
    
  default:
    printf("default");
    break; // unnecessary?
  }
  
}
