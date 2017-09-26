#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int print_array(int * a, int length) {
  int i;
  for (i=0;i<length;i++)
    printf("element %d: %d\n",i,a[i]);
}

int main() {
  srand(time(NULL));
  int arr[10];
  int i=0;
  for (;i<9;i++)
    arr[i]=rand();
  arr[9]=0;
  print_array(arr,10);
  int reverse[10];
  int * ip= arr+9;
  int * rp=reverse;
  while (rp<=reverse+9) {
    *rp++=*ip--;
  }
  for (i=0;i<10;i++)
    printf("reverse[%d]: %d\n",i,reverse[i]);
  return 0;
}
