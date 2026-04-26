//WAP TO FIND THE SUM OF ALL  THE ELEMENT IN THE GIVEN ARRAY .
#include<stdio.h>
int main() {
  int n ,m;
  int sum = 0;
  printf("enter the rows : ");
  scanf("%d" ,&n);
  printf("enter the column : ");
  scanf("%d" , &m);
  int arr[n][m];
  for(int i=0;i<n; i++) {
    for(int j=0;j<m; j++) {
      printf("enter the element of %d rows and %d column : " , i ,j);
      scanf("%d" , &arr[i][j]);
    }
  }
  for(int i=0;i<n; i++) {
    for(int j=0;j<m; j++) {
    sum = sum+arr[i][j];  
    }
  }
  printf("the sum of all element is  : %d " , sum);
}