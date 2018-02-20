#include<stdio.h>
#include<stdlib.h>

int main() {
  int threshhold = 1000;
  int counter = 0;
  int *arr = (int *)malloc( (counter + 1) * threshhold * sizeof(int));
  for ( counter = 0; counter < threshhold; counter++) {
    if ( ((counter % 3) == 0 || (counter % 5) == 0) && (counter != 0)) {
      arr[counter] = counter;
      printf("%d\n", arr[counter]);
    }
  }
  printf("%ld", sizeof(arr)/sizeof(int));
}
