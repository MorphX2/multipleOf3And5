#include<stdio.h>
#include<stdlib.h>

int main() {
  int const threshold = 1000;
  int counter = 0;
  int mulptiple_counter;
  int free_memory;
  int x = 0;
  int arr[10000];
  for( counter = 0; counter < threshold; counter++) {
    x = x + 1;
    if ((counter % 3 == 0) || (counter % 5) == 0) {
      arr[counter] = counter;
      mulptiple_counter = mulptiple_counter + 1;
    }
  }
  printf("%ld \n", sizeof(arr)/sizeof(int));
  printf("%d \n", mulptiple_counter);
  free_memory = threshold - mulptiple_counter;
  printf("%d", free_memory);
}
