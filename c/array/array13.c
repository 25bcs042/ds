//SUM OF ALL ELEMENTS IN THE ARRAY WHICH SIZE AND ELEMENT DEFINE BY THE USER
#include<stdio.h>
int main() {
  int n;
  int sum =0;// in case of product we replace product = 1;
  int i;
  printf("ENTER THE SIZER OF ARRAY : ");
  scanf("%d", &n );
  int arr[n];
  for(i=0;i<n-1;i++) {
    printf("enter the element %d : " , i);
    scanf("%d" , &arr[i]);
  }
     for(i=0;i<n-1;i++) {
      sum = sum +arr[i];//product = product*arr[i];
     }
     printf("the sum of all element :  %d"  , sum);
}