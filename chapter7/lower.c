#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv ) {
  int c;
  printf("argc: %d\n", argc);
  printf("argv[1]: %s\n", argv[1]);


  // exercise 7-1
  if(argc > 1) {
    if(strcmp(argv[1], "lower")==0)
      while ((c = getc(stdin)) != EOF)
	putchar(tolower(c));
    else if(strcmp(argv[1], "upper")==0)
      while ((c = getc(stdin)) != EOF)
	putchar(toupper(c));
    else
      while ((c = getc(stdin)) != EOF)
	putchar(c);
  }

  return 0;
}
