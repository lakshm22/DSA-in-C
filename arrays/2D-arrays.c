// Program to print a 2d array
#include <stdio.h>
int main() {
  int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};   // 2d array declaration
  int i, j;
  printf("2D Array: \n");
  for(i=0; i<3; i++){    // for a matrix with 3 rows
    for(j=0; j<3; j++){   // for a matrix with 3 columns
      printf("%d ", arr[i][j]);   // i is the number of rows and j is the number of columns
    }
   printf("\n");   // spacing to get the matrix format (space between rows)
  }
return 0;
}


// Program to print a 2d array (user-defined row and columns)
#include <stdio.h>
// define the max value as 10
#define MAX 10   
int main() {
  int arr[MAX][MAX];
  int i, j, rows, cols;
  printf("Enter the number of rows (Max. 10): ");
  scanf("%d", &rows);   // gets the no. of rows from user
  printf("Enter the number of columns (Max. 10): ");
  scanf("%d", &cols);   // gets the no. of columns from user
  printf("\n");
  printf("Enter %d matrix elements: ", rows*cols);
  for(i=0; i<rows; i++){   
      for(j=0; j<cols; j++){
          scanf("%d", &arr[i][j]);  // enter elements into the 2d array
      }
  }
  printf("\n");
  printf("2D Array \n");
  printf("%dx%d Matrix: \n", rows, cols);
for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
      printf("%d ", arr[i][j]);
    }
  printf("\n");
}
return 0;
}
