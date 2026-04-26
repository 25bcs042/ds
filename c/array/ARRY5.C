#include<stdio.h>
int main () {
//  int a[5] = {2,6,8,3,5};
//  a[2]= 34;
//  printf("%d" , a[2]);
int arr[4];
printf("enter the first element : ");
scanf("%d" , &arr[0]);
printf("enter the second element : ");
scanf("%d" , &arr[1]);
printf("enter the third element : ");
scanf("%d" , &arr[2]);
printf("enter the fourth element : ");
scanf("%d" , &arr[3]);
for( int i=0;i<=4;i++){
  printf("%d" ,arr[i] );
}
  return 0;
}