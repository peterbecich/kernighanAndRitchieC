#include <stdio.h>
#define MAXLINE 1000


void getLine(char[], int);
int getLength(char[], int);
void reverse(char[], char[], int);
void copy(char to[], char from[]);

int main() {
  int len = 0;
  char line[MAXLINE];

  while ((len = getLength(line, MAXLINE)) > 0) {
    char reversed[len];
    getLine(line, MAXLINE);
    reverse(line, reversed, len);
    printf("%s", reversed);
  }

  return 0; // no error
}

void reverse(char line[], char reversed[], int length) {
  int i;
  for(i=0; i<length; i++){
    reversed[length-i] = line[i];
  }
}

void getLine(char line[], int lim) {
  char c;
  int i = 0;
  while((c = getchar()) != EOF && i < lim) {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
}

int getLength(char line[], int lim) {
  int l = 0;
  char c;
  while((c = line[l]) != '\0' && l < lim)
    l++;
  return l;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

