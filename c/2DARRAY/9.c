// TRANSPOSE OF A MATRIX.
#include<stdio.h>
int main() {
int n , m;
printf("enter the number of rows : ");
scanf("%d" , &n);
printf("enter the numberof column : ");
scanf("%d" , &m);

int arr[n][m];
int i,j;
 
for(i=0;i<=n-1;i++){
  for( j=0;j<=m-1;j++) {
    printf("enter the element of %d row and %d column : " , i+1 ,j+1);
    scanf("%d" , &arr[i][j]);
  }
}
for(i=0;i<m;i++) {
  for(j=0;j<n;j++) {
    printf(" %d " , arr[j][i]);
  }
  printf("\n");
}
}              