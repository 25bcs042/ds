#include<stdio.h>
int main() {
  int m , n ;
  printf("enter the rows : ");
  scanf("%d" , &m);
  printf("enter column : ");
  scanf("%d " , &n);
  int i , j;
  int a[m][n];
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
      scanf("%d" , &a[i][j]);
    }
  }

  for(i=0;i<m;i++) {
    if(i%2==0) {
      for(j=0;j<n;j++) {
        printf("%d " , a[i][j]);
      }
    }
    else {
      for(j=n-1;j>=0;j--) {
        printf("%d ", a[i][j]);
      }
    }
    printf("\n");
  }

}