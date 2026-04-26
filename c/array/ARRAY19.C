//FIND THE DIFFRENCE BETWEEN THE SUM OF ELEMENTS AT EVEN INDICES TO THE SUM OF ELEMENTS AT ODD INDICES.
#include<stdio.h>
int main() { 
  int arr[10]={9,8,7,6,0,5,2,1,3,4};
  int i , esum=0 , osum=0;
  for(i=0;i<=9;i++) { 
    if(i%2!=0) {
      osum +=arr[i];
    }
    else {
      esum +=arr[i];
    }
  }
  printf("the even sum is : %d\n" , esum );
  printf("the odd sum is : %d\n" , osum);
  printf(" the diffrence between odd and even is : %d", esum-osum);
}