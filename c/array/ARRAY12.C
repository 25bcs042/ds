// CALCULATE THE SUM OF ALL THE ELEMENTS INN THE GIVE ARRAY
#include<stdio.h>
int main() { 
  int arr[10] = {3,5,8,2,9,6,7,2,1,0};
  int i;
  int sum =0;
  for(i=0;i<10;i++) {
    sum = sum + arr[i];
  
  }
  printf("the sum of all element in  the array is :%d " , sum );
}