// rotation of array . 
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
  int k=3;
  int n =8;
  //step1 
  k=k%n;
  reverse(0 , n-1 , arr);
  reverse(0 , k-1, arr);
  reverse(k , n-1 , arr);   
for(int i =0; i<=7;i++){
    printf(" %d" , arr[i]);
  }
}