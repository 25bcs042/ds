// FOR TAKE INPUT ELEMENT FOR ARRAY THROUGH USER AND PRINT REVERSE  
#include<stdio.h>
int main() {
  int i;
   int arr[5];
   for(  i=0;i<=4;i++) {
    printf("enter the element number %d\n" , i);
    scanf("%d" , &arr[i]);
   }
   for(i=4;i>=0;i--) {
    printf(" %d" , arr[i]);
   }
   return 0;
  }