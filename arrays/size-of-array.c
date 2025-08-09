// Program to create an array and print the size of the array: based on user input
#include <stdio.h>
int main() {
 int n, i, arr[i];
 printf("Enter the number of elements: ");
 scanf("%d",&n);    // Gets input from user
 printf("Enter the elements: \n");
 for(i=0;i<n;i++){      // loop to store the elements in the array
   scanf("%d",&arr[i]);   // looping variable i is initialised from 0 to <n because the last index (i.e. n) stores the NULL value to indicate the end of the array
 }
 printf("\n");
 printf("The array is: \n");
 for(i=0;i<n;i++){       // loop to print the array elements
   arr[n]=arr[n-1];    // for every element in index n, the loop runs for the previous element in index n-1, till it reaches index 0
   printf("%d ",arr[i]);  // here arr[i] accesses the array element stored at index i
 }
 printf("\n");
 printf("The size of array is: \n");
 printf("%d \n",n); // prints the actual array size
return 0;
}


// Program to create an array and print the size of the array: based on predefined array 
#include <stdio.h>
int main() {
 int arr[5]={10,20,30,40,50};
 int size=sizeof(arr)/sizeof(arr[0]);   // (total size of array in bytes) / (size of one element in bytes) = the number of elements in the array
 int i;
 printf("the array is: ");
 for(i=0;i<5;i++){       // looping statement to print the array elements
   printf("%d ",arr[i]);
 }
 printf("\n");
 printf("The size of array is: ");
 printf("%d \n",size);  // returns the actual size of the array
return 0;
}
