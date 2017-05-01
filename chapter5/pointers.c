#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// http://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
#define SIZE_OF_ARRAY(_array) (sizeof(_array) / sizeof(_array[0]))
#define LIMIT 1000

void swapInt(int*, int*);
void printIntArr(int[], int);
int arrLength(void*[]);

int main(void) {
  int x = 1, y = 2, z[10];
  z[0] = 0xffff;
  z[1] = 0xf;
  z[2] = 0xff;
  z[3] = 0xf0;
  z[4] = 0xf1;
  z[5] = 0xf2;
  z[6] = 0xf3;
  z[7] = 0xf4;
  z[8] = 0xf5;

  int zaddr[10];
  
  int *ip; // a pointer to an int
  int *jp;
  // points to nothing, or garbage memory, right now

  ip = &x; // ip points to x
  y = *ip; // y is now 1
  *ip = 0;  // x is now 0
  ip = &z[0];  // ip now points to z[0]

  printf("%x\n", *ip);

  // atof   string to float
  float ft = atof("123.456");
  float *ftp;
  ftp = &ft;

  printf("%f\n", *ftp);
  printf("address: %x\n", &ft);
  printf("pointer: %x\n", ftp);

  printf("*ip: %x\n", *ip);
  *ip += 1;
  printf("*ip: %x\n", *ip);
  *ip += 1;
  printf("*ip: %x\n", *ip);
  *ip += 1;
  printf("*ip: %x\n", *ip);
  *ip += 1;
  printf("*ip: %x\n", *ip);
  ++*ip;
  printf("*ip: %x\n", *ip);
  (*ip)++;
  printf("*ip: %x\n", *ip);

  jp = &z[1];

  printf("swap\n");
  printIntArr(z, 10);
  swapInt(ip, jp);
  printIntArr(z, 10);
  swapInt(&z[0], &z[1]);
  printIntArr(z, 10);


  printf("addresses of z indices\n");
  for(int i = 0; i < 10; i++)
    zaddr[i] = &zaddr[i];

  printIntArr(zaddr, 10);
  
}


void swapInt(int *px, int *py) {
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

int arrLength(void *arr[]) {
  int i;
  while(arr[i] != '\0')
    i++;

  return i;
}

void printIntArr(int arr[], int lim) {
  //int length = SIZE_OF_ARRAY(arr);
  int length = arrLength(arr);
  int i;
  printf("length: %d\n", length+1);
  for(i = 0; i < lim && i < length; i++)
    printf("%x ", arr[i]);

  printf("\n");
}
