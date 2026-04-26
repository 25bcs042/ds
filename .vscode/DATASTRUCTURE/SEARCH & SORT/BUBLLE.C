#include<stdio.h>
void bubbleshort(int arr[] , int n)
{
  int i ,j;
  for(i=0;i<n-1;i++) {
for(j=0;j<n-i-1;j++) {
  if(arr[j]>arr[j+1]) {
    int temp =  arr[j];
    arr[j] = arr[j+1];
    arr[j+1]=temp;
  }
}
  }
}
int main() {
  int i;
  int arr[] = {13,2,34,11,9,10,5,10,7, 76};
  int size = sizeof(arr)/sizeof(arr[0]);
  bubbleshort(arr, size);
  printf("list is sorted \n");
  for(i=0;i<=size-1;i++) {
    printf("%d " , arr[i]);
  }
  return 0;
}