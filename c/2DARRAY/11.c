// TRANSPOSE OF A MATRIX
#include<stdio.h>

int main() {
  int n;
  printf("enter the number of row/column : ");
  scanf("%d", &n);

  int arr[n][n];
  int i, j;

  // Input matrix
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // Transpose logic
  for(i = 0; i < n; i++) {
    for(j = i; j < n; j++) {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  // Print matrix
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      printf("%d  ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}