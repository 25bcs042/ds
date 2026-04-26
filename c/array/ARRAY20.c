//FIND THE TOTAL NUMBER OF PAIRS AND PAIRSIN THE ARRAY WHOSE SUM IS EQUAL TO GIVEN VALUE X.
#include<stdio.h>
int main() {
    int arr[45]={  0,1,2,3,4,5,6,7,8,9 ,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44};
    int i, count=0,  x=50;
    for(i=0;i<=44;i++){ 
      for (int j=i+1;j<=44;j++) {
        if(arr[i]+arr[j]==x){
          count++;
          printf("(%d  %d)\n" , arr[i],arr[j]);
        }
      }
  }
  printf("the total pai is  : %d ",count );
  return 0;
}