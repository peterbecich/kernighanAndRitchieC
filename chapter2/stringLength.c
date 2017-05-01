#include <stdio.h>

// strlen is built-in
int strlength(char s[]) {
  int i;
  i = 0;
  while (s[i] != '\0')
    ++i;
  return i;
}

int main(void) {
  char s[] = "hello world";
  printf("%s\n", s);
  printf("%d\n", strlength(s));
}
