// wap to reverse of array from desire location . 
#include<stdio.h>
void reverse(int arr[]) {
  int i = 2;
  int j=5;
while(i<j) {
  int temp;
  temp = arr[i];
  arr[i]= arr[j];
  arr[j]= temp;
  i++;
  j--;
}
}
int main() {
  int arr[6] ={2 ,4,3,6,7,5};
  int i;
  for(i=0;i<=5;i++) {
    reverse(arr);
    for(i=0;i<=5;i++) {
      printf(" %d " , arr[i]);
    }
  }
}