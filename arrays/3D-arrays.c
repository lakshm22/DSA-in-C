// Program to print 3D arrays with user defined values
#include <stdio.h>
#define MAX 10
int main() {
  int arr[MAX][MAX][MAX];  // defining a 3d array
  int i, j, k, rows, cols, deps;
  printf("Enter the number of rows (Max. 10): ");
  scanf("%d", &rows);
  printf("Enter the number of columns (Max. 10): ");
  scanf("%d", &cols);
  printf("Enter the number of depths (Max. 10): ");
  scanf("%d", &deps);
  printf("Enter %d matrix elements: ", rows*cols*deps);
  for(i=0; i<rows; i++){
      for(j=0; j<cols; j++){
          for(k=0; k<deps; k++){
          scanf("%d", &arr[i][j][k]);
          }
      }
  }
  printf("3D Array \n");
  printf("%dx%dx%d Matrix: \n", rows, cols, deps);
for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        for(k=0; k<deps; k++){
            printf("%d ", arr[i][j][k]);
}
printf("\n");  // spacing between 2 2d arrays to display in 3d array format
}
printf("\n");  // spacing between 2 rows to display in matrix format
}
return 0;
}



// Program to print 3d array predefined format
#include <stdio.h>
int main() {
  int arr[2][2][2] = { {{1,2}, {3,4}} , {{7,8}, {9,10}} };   // defining a 3d array
  int i, j, k;
  printf("3D Array \n");
  printf("2x2x2 Matrix: \n");
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        for(k=0; k<2; k++){
            printf("%d ", arr[i][j][k]);
}
printf("\n");
}
printf("\n");
}
return 0;
}
