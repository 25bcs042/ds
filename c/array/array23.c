// FIND THE TOP THREE MAXM USING ONE LOOP.
#include<stdio.h>
int main() {
  int arr[8] = {12,14,76,45,87,74,98,89};
  int max=-1;
  int smax=0;
  int tmax=0;
  for(int i=0;i<=7 ;i++){
   if(max<arr[i]){
    tmax=smax;
    smax=max;
    max=arr[i];
  
   }
   else if (smax<arr[i] && max!=arr[i]){
       tmax=smax;
    smax=arr[i];
   }
   else if(tmax<arr[i] && max!=arr[i] && smax!=arr[i]);
   tmax=arr[i];
  }
  printf("%d\n" , max);
  printf("%d\n" , smax);
  printf("%d \n" , tmax);
}  