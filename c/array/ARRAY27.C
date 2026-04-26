// reverse using for loop . 
#include<stdio.h>
void reverse(int si , int ei ,int arr[]) {
  int i ,j;
  for(i=si, j=ei;i<j;i++,j--) {
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j]=temp;
  }
}
int main() {
  int arr[8] = {2,3,6,4,5,8,7,0};
  reverse(0 , 7 , arr);
for(int i =0; i<=7;i++){
    printf(" %d" , arr[i]);
  }
}