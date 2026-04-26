// FOR BINARY SEARCH ARRAY MUST ME SORTED. 
#include<stdio.h>
int binsearch(int arr[] , int l , int u , int item) {
  while(l<=u) {
    int m  = (l+u)/2;
   if(arr[m]== item) {
    return m;
   }
   else if(arr[m]<item) {
    l=m+1;
   }
   else {
    u=m-1;
   }
  }
  return -1;
}
int main() {
  int item;
  int arr[] ={2,3,12,18,23,45,65,67,78,98,99}; 
  printf("enter element to serach \n");
  scanf("%d" , &item);
  int size = sizeof(arr)/sizeof(arr[0]);
  int result=binsearch(arr , 0 , size-1, item);
  if(result==-1) {
    printf("element are not present in array");
  }
  else {
    printf("present at index : %d" , result);
  }
}