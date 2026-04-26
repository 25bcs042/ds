#include<stdio.h>
int main() { 
  int arr[12]={45,65,33,89,35,78,98 , 93 , 56 , 76 , 95 , 23};
  int max=-1;
  int smax=0;
  int tmax=-1;
  for(int i=0;i<=11;i++) {
     if(max<arr[i]) {
      max=arr[i];  // first maxm is update
     }
  }
  for(int i=0;i<=11;i++) {
     if(arr[i]!=max && smax<arr[i]) // discard the first maxm from the list .
      { 
      smax=arr[i]; 
     }
    }
    for (int i =0;i<=11; i++) {
      if (arr[i]!=max && arr[i]!=smax && tmax<arr[i]) // discard the first maxm and second maxm 
      {
         tmax=arr[i];
      }
    }
    printf("the first maxm is  : %d\n" , max);
    printf("the second maxm is  :  %d\n" , smax);
    printf("the third maxm is :  %d" , tmax);
}