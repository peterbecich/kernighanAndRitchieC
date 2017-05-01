#include <stdio.h>
#define MAXLINE 1000
#define THRESH 75

int getln(char[], int);
void copy(char to[], char from[]);

int main() {
  int len; // current line length
  char line[MAXLINE]; // current input line
  int shorterThanEighty = 0;

  while ((len = getln(line, MAXLINE)) > 0) {
    if (len > THRESH) {
      printf("length %d: %s \n", len, line);
    } else {
      shorterThanEighty++;
    }
  }

  printf("number of lines shorter than %d: %d \n", THRESH, shorterThanEighty);
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


/* length 76: what he says, and this is what he means to do, he will lame your horses for */
 
/* length 76: spear's cast, or less, away from him, he saw that they were enemies and ran */
 
/* number of lines shorter than 75: 13787  */
