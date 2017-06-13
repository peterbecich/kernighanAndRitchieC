#include <stdio.h>
#include <stdlib.h>

// FILE structure

/* FILE *fp;  // fp is a pointer to a file */
/* FILE *fopen(char *name, char *mode);  // fopen returns a pointer to a file */
// fp = fopen(name, mode);

// mode is r, a, etc like Python

// macro definition of getchar, putchar
// #define getchar() getc(stdin)
// #define putchar(c) putc((c), stdout)

// concatenate files
int main(int argc, char *argv[]) {
  FILE *fp;
  void filecopy(FILE *, FILE *);

  char *prog = argv[0];
  
  if (argc == 1)
    filecopy(stdin, stdout);
  else
    while (--argc > 0)
      if ((fp = fopen(*++argv, "r")) == NULL) {
	fprintf(stderr, "cat: %s can't open %s\n", prog, *argv);
	exit(1);
      } else {
	filecopy(fp, stdout);
	fclose(fp);
      }
  exit(0);
}

/*
  I never realized `cat` can be thought of as concatenating a file with stdout...
 */
void filecopy(FILE *ifp, FILE *ofp) {
  int c;

  while ((c = getc(ifp)) != EOF)
    putc(c, ofp);
}
      
    
