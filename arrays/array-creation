// Program to create an array and get the length of the array and its elements from the user
#include <stdio.h>

int main() {
    int n, i, arr[i];
    printf("Enter the number of elements: ");
    scanf("%d",&n);    // Gets input from user
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){      // loop to store the elements in the array
        scanf("%d",&arr[i]);  // looping variable i is initialised from 0 to <n because the last index (i.e. n) stores the NULL value to indicate the end of the array
    }
    printf("The array is: \n");
    for(i=0;i<n;i++){       // loop to print the array elements
        arr[n]=arr[n-1];    // for every element in index n, the loop runs for the previous element in index n-1, till it reaches index 0
        printf("arr[%d]: %d\n",i,arr[i]);  // here i prints the index number and arr[i] accesses the array element
    }
    return 0;
}
