// Program to demonstrate the concept of arrays and pointers
#include <stdio.h>
int main() {
  int arr[7] = {10, 20, 30, 40, 50, 60, 70};   // predefined array
  int* ptr = &arr[0];   // declaring a pointer to an array
  printf("%p\n", arr);   // prints the address in which the array elements are stored
  printf("%p\n", ptr);   // prints the address which is pointed by the pointer
return 0;
}


// User-defined array
#include <stdio.h>
int main() {
  int i, n, arr[i];
  printf("Enter the number of elements: ");  
  scanf("%d", &n);
  printf("Enter the elements: \n");
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  int* ptr = &arr[i];   // pointer declaration to an array element at index i
  printf("%p\n", arr);   // prints the address in which the array elements are stored
  printf("%p\n", ptr);   // prints the address which is pointed by the pointer
return 0;
}
