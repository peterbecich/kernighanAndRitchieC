#include <stdio.h>

enum boolean and(enum boolean, enum boolean);
enum boolean or(enum boolean, enum boolean);

void foo();


// to practice with enum

enum boolean { NO, YES };

enum boolean and(enum boolean a, enum boolean b) {
  if(a == YES && b == YES)
    return YES;
  else return NO;
}

enum boolean or(enum boolean a, enum boolean b) {
  if(a == YES || b == YES)
    return YES;
  else return NO;
}

enum boolean not(enum boolean a) {
  if(a == YES)
    return NO;
  else
    return YES;
}

void foo(int i) {
  printf("foo %d\n", i);
}
    

int main(void) {
  printf("YES and YES\n");
  printf("%d\n", and(YES, YES));
  printf("YES and NO\n");
  printf("%d\n", and(YES, NO));
  printf("NO and NO\n");
  printf("%d\n", and(NO, NO));

  printf("YES or YES\n");
  printf("%d\n", or(YES, YES));
  printf("YES or NO\n");
  printf("%d\n", or(YES, NO));
  printf("NO or NO\n");
  printf("%d\n", or(NO, NO));

  foo(5);

  foo(8);

  foo(1);
  
  return 0;
}

