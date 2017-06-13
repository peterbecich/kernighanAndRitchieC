#include <stdio.h>
#include <string.h>


int main(void) {
  char foo[] = "foo";
  char bar[] = "bar";

  printf("%s\n", foo);
  printf("%s\n", bar);

  printf("%d\n", strcmp(foo, bar));

  printf("%s\n", foo);
  printf("%s\n", foo);

  printf("%d\n", strcmp(foo, foo));

}
