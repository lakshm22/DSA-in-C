// Program to perform the linear search algorithm on a user-defined array
#include <stdio.h>
int main() {
    int n, i, arr[i], key, found=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);    
    printf("Enter the elements: \n");
    for(i=0; i<n; i++){      
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i=0; i<n;i++){
      if(arr[i] == key){
        printf("Element %d is found at index %d\n", key, i);
        found = 1;
        break;
      }
    }
    if(!found){
      printf("Element not found in the array\n");
    }
return 0;
}
