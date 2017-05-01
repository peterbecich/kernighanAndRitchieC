#include <stdio.h>
#define MAXLINE 1000

int getln(char[], int);
void copy(char to[], char from[]);

int main() {
  int len; // current line length
  int max; // max length seen so far
  char line[MAXLINE]; // current input line
  char longest[MAXLINE]; // longest line seen so far

  max = 0;
  while ((len = getln(line, MAXLINE)) > 0) {
    if (len > max) {
      printf("%d exceeds %d\n", len, max);
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0)
    printf("%s", longest);
  return 0; // no error
}

// length of line
// getline is already named in stdio.h
int getln(char s[], int lim) {
  int c, i;

  for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}


// on the Iliad
/* 51 exceeds 0 */
/* 65 exceeds 51 */
/* 69 exceeds 65 */
/* 72 exceeds 69 */
/* 73 exceeds 72 */
/* 76 exceeds 73 */
/* what he says, and this is what he means to do, he will lame your horses for */
