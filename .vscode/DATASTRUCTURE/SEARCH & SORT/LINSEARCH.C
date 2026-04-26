#include<stdio.h>
int linsearch(int arr[],int n ,int x) {
  int i;
  for(i=0;i<n;i++) {
    if(arr[i]==x)
    return i ;
  }
  return -1;
}

int main() {
  int item ;
  int arr[] = {12,34,56,1,35,87,90,24,23,9};
  printf("enter the value to search : ");
  scanf("%d" , &item);
   int size = sizeof(arr)/sizeof(arr[0]);
   int result = linsearch(arr , size , item);
   if (result==-1){ 
    printf("element is not present in the array\n"); 
   }
      else { 
        printf("element is resent at index : %d " , result); 
      }
}