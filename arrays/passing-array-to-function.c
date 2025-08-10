// Program to pass an array to a function
#include <stdio.h>
void Array(int arr[], int n) {
  int i;
  printf("Array: ");
  for(i=0; i<n; i++){
    printf("%d ", arr[i]);   // prints the array
  }
}
int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};  // gives the array elements or values to pull from
  int n = sizeof(arr) / sizeof(arr[0]);  // gives the size of the array
  Array(arr, n);
return 0;
}
