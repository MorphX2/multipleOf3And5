#include<stdio.h>
#include<stdlib.h>

int sumMultiples(int multiples[], int multipleCount) {
  int sum;
  int y;
  for (y = 0; y <= multipleCount; y++) {
    sum = sum + multiples[y];
  }

  return sum;
}

int main() {
  int threshhold = 1000;
  int arraySize;
  int index = 0;
  int counter = 0;
  int totalSum;
  int arr[100000];

  for ( index = 0; index < threshhold; index++) {
    if ( ((index % 3) == 0 || (index % 5) == 0) && (index != 0)) {
      counter = counter +1;
      arr[index] = index;
      printf("%d\n", arr[index]);
    }
  }

  printf("Size of the array after iteration is: %ld\n", sizeof(arr)/sizeof(int));

  printf("There are %d multiples of 5 and 3 in range from 0 to %d...\n", counter, threshhold);
  totalSum = sumMultiples(arr, counter);
  printf("The sum of the multiples of 5 and 3 are: %d\n", totalSum);

}
