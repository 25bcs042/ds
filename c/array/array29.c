// searching of element 
#include<stdio.h>
#include<stdbool.h>
int main() {
  int arr[6] = { 34,65,34,78,67,98};
  int x=4;
  int i;
  bool  flag = false; //means element is not present in the array. 
  for(int i=0;i<=5;i++) {   // if we want last last element then run loop reverse
    if(arr[i]==x) {
      flag = true;// means element present in the array. 
      break;
    }
  }
  if(flag == false) {
    printf("%d not present in the array " , x);
  }
  else {
  printf("%d element present in the array and index is %d \n" , x , i);
  }
}