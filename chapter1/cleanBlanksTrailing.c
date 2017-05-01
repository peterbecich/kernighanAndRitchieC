#include <stdio.h>
#define MAXLINE 1000

int removeLine(char line[]);
void cleanLine(char line[]);
int getLength(char[], int);
void getLine(char[], int);
void putLine(char[], int);

// TODO fix

int main() {
  int len; // current line length
  char line[MAXLINE]; // current input line

  while ((len = getLength(line, MAXLINE)) > 0) {
    getLine(line, MAXLINE);
    if(!removeLine(line)) {
      cleanLine(line);
      //putLine(line, MAXLINE);
    } else {
      printf("removed line");
    }
  }
  

  return 0; // no error
}

// 1 for true
int removeLine(char line[]) {
  int length = getLength(line, MAXLINE);
  printf("length %d\n", length);
  if(length <= 1 || line[0] == '\n')
    return 1;
  else return 0;
}

void cleanLine(char line[]) {
  int length = getLength(line, MAXLINE);
  char last = line[length - 1];
  if(last == '\t')
    line[length - 1] = '\0';
}

void getLine(char line[], int lim) {
  char c;
  int i = 0;
  while((c = getchar()) != EOF && i < lim) {
    line[i] = c;
    i++;
  }
  //line[i] = '\0';
}

void putLine(char line[], int lim) {
  char c;
  int i;
  int len = getLength(line, lim);
  for(i = 0; i < len && i < lim; i++){
    putchar(line[i]);
  }
}


int getLength(char line[], int lim) {
  int l = 0;
  char c;
  while((c = line[l]) != '\0' && l < lim)
    l++;
  return l;
}


