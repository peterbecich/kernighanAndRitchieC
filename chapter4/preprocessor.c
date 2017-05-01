#include <stdio.h>

#if SYSTEM == BSD
  #define FOO "berkeley software distribution"
#elif SYSTEM == MSDOS
  #define FOO "Microsoft"
#else
  #define FOO "By the process of elimination, Linux"
#endif
//#include FOO // if FOO were the name of a header (foo.h)

// a use of max expands into inline code
#define max(A, B) ((A) > (B) ? (A) : (B))

int main(void) {
  int i = 5;
  int j = 9;
  int k = 4;
  int l = 8;

  // expands into int x = ((i+k) > (j+l) ? (i+k) : (j+l))
  // probably explains the necessity of the parens: ((A) > (B) ? (A) : (B))
  int x = max(i+k, j+l);

  printf("%d\n", x);

  printf("%s\n", FOO);

}
