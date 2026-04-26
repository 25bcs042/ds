// ROTATE OF A MATRIX 90 DEGREE . 
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
  // rotate 90 degree .
   for ( i = 0; i < n; i++)
   {
    j=0;
    int k =n-1;
    while(j<k) {
      int temp=arr[i][j];
      arr[i][j]=arr[i][k];
      arr[i][k]=temp;
      j++;
      k--;
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