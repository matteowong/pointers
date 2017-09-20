#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int arr[10];
  int i=0;
  for (;i<9;i++)
    arr[i]=rand();
  arr[9]=0;
  for (i=0;i<10;i++)
    printf("arr[%d]: %d\n",i,arr[i]);
  int reverse[10];
  int * ip= &arr[9];
  int * rp=&reverse[0];
  while (rp<=&reverse[9]) {
    *rp++=*ip--;
  }
  for (i=0;i<10;i++)
    printf("reverse[%d]: %d\n",i,reverse[i]);
  return 0;
}
