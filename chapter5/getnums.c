#include <stdio.h>
#include <ctype.h>

// https://en.wikipedia.org/wiki/C_standard_library
// https://en.wikipedia.org/wiki/C_character_classification

/* int getch(void); // get character */
/* void ungetch(int);  */

// get next integer from input into *pn

// ungetch was written in chapter 4
int getint(int *pn) {
  int c, sign;

  // https://en.wikipedia.org/wiki/C_file_input/output
  while (isspace(c = getc(stdin)))  // skip white space
    ;  // no-op

  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetc(c, stdout);
    return 0;
  }

  sign = (c == '-') ? -1 : 1; // if minus, sign = -1, else sign = 1

  if (c == '+' || c == '-')
    c = getc(stdin);

  for (*pn = 0; isdigit(c); c = getc(stdin))
    *pn = 10 * *pn + (c - '0');

  *pn *= sign;

  if (c != EOF)
    ungetc(c, stdout);

  return c;
}

int main(void) {

  int x = 9;
  printf("get x %d\n", x);
  
  getint(&x);

  printf("x: %d\n", x);
  printf("x: %d\n", x);
  printf("x: %d\n", x);
  printf("x: %d\n", x);

  return 0;
}
