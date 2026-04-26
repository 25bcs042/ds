//wap to reverse the array without using any extra array.
#include<stdio.h>
void reverse(int arr[]){
  int i=0;
  int j=6;
  while(i<j) {
    int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
  }
}
int main() {
  int arr[7]= {2,4,6,8,9,11,24};

  for(int i=0;i<=6;i++) {
    reverse(arr);
    for(i=0;i<=6;i++){
      printf(" %d  " , arr[i]);
    }
  }
}