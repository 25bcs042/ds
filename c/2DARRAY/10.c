//TRANSPOSE OF A MATRIX . 
#include<stdio.h>
int main() {
  int n , m;
  printf("enter the number of row : ");
  scanf("%d" , &n);
  printf("enter the number of column : ");
  scanf("%d" , &m);
  int arr[n][m];
  int i , j;
  for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
      scanf("%d" , &arr[i][j]);
    }
  }
  int brr[m][n];
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
      brr[i][j]=arr[j][i];
    }
    printf("\n");
  }
 for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
    printf("%d  " , brr[i][j]);
    }
    printf("\n");
}
}