#include<stdio.h>
void insertion(int arr[] , int n) {
  int i , key ,  j;
  for(i =0;i<n;i++) {
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key) {
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=key;
  }
}
int main() {
  int i;
   int arr[]={12,2,34,876,37,87,34,978,35};
  int size = sizeof(arr)/sizeof(arr[0]);
  insertion(arr ,  size);
  for(i=0;i<size;i++) {
    printf("%d " , arr[i]);
  }
}