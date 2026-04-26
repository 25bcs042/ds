//FIND THE TOTAL NUMBER OF triplets AND triplets IN THE ARRAY WHOSE SUM IS EQUAL TO GIVEN VALUE X.
#include<stdio.h>
int main() {
    int arr[8]={ 1,2,3,4,5,6,7,8 };
    int i, count=0, x=12;
    for(i=0;i<=7;i++){ 
      for (int j=i+1;j<=7;j++) {
        for(int k =j+1;k<=7;k++) {
        if(arr[i]+arr[j]+arr[k] ==x){
          count++;
          printf("(%d  %d %d)\n" , arr[i],arr[j] , arr[k]);
        }
      }
      }
  }
  printf("the total pai is  : %d ",count );
  return 0;
}