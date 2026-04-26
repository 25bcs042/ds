#include<stdio.h>
void salectionsort(int arr[] , int n) {
  int i , j , min_idx;
  for(i=0;i<=n-1;i++) {
    min_idx=i;
    for(j=i+1;j<=n-1;j++) {
    if(arr[j]<arr[min_idx]) 
    min_idx=j;
  }
  int temp=arr[i];  
  arr[i]= arr[min_idx];
  arr[min_idx]=temp;

  }
}
int main() {
  int i;
  int arr[]={12,545,24,678,56,2,76,58,98,25};
  int size = sizeof(arr)/sizeof(arr[0]);
  salectionsort(arr , size);
  printf("the sorted element is : ");
  for(i=0;i<size;i++) {
    printf("%d " , arr[i]);
  }
}