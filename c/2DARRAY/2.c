// WAP TO TAKE INPUT FROM USER IN 2D ARRAY . 
#include<stdio.h>
int main() {
  int n , m;
  printf("enter the number of rows : ");
  scanf("%d" , &n);
  printf("enter the number of column  : ");
  scanf("%d" , &m);
  int arr[n][m];
  for(int i =0; i<n; i++) {
    for(int j=0; j<m; j++) {
      printf("enter the element of %d row and %d column : " , i , j);
      scanf("%d" , &arr[i][j]);
    }
  }
  for(int i =0; i<n; i++) { 
    for(int j=0; j<m; j++) {
      printf(" %d " , arr[i][j]);
    }
    printf("\n");
  }
}
