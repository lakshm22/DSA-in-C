// Program to create an array and get the length of the array and its elements from the user
#include <stdio.h>
int main() {
    int n, i, arr[i];
    printf("Enter the number of elements: ");
    scanf("%d", &n);    // Gets input from user
    printf("Enter the elements: \n");
    for(i=0; i<n; i++){      // loop to store the elements in the array
        scanf("%d", &arr[i]);  // looping variable i is initialised from 0 to <n because the last index (i.e. n) stores the NULL value to indicate the end of the array
    }
    printf("The array is: \n");
    for(i=0; i<n; i++){       // loop to print the array elements
        arr[n] = arr[n-1];    // for every element in index n, the loop runs for the previous element in index n-1, till it reaches index 0
        printf("%d ", arr[i]);  // here arr[i] accesses the array element stored at index i
    }
    printf("\n");
    printf("The reversed array is: \n");  // loop to print array elements in reverse order
    for(i=n-1; i>=0; i--){  // here i is initialised to n-1 since the last index n stores the NULL value (a.k.a no value: \0), and is set to >=0 bcs the index 0 stores a value
        printf("%d ", arr[i]);
    }
    return 0;
}
