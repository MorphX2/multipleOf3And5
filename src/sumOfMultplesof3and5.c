#include<stdio.h>
#include<stdlib.h>

int main() {
  int const threshold = 1000;
  int counter = 0;
  int x = 0;
  int arr[10000];
  for( counter = 0; counter < threshold; counter++) {
    x = x + 1;
    if ((counter % 3 == 0) || (counter % 5) == 0) {
      arr[counter] = counter;
    }
  }
  printf("%ld", sizeof(arr)/sizeof(int));
  for
}
