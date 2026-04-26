//GIVEN AN ARRAY OF INTEGERS, CHANGE THE VALUE OF ALL ODD INDEXED ELEMENTS TO ITS SECOND MULTIPLE AND ICREMENT ALL EVEN INDEXED VALUE BY 10
#include<stdio.h>
int main() { 
  int arr[10]={3,4,5,6,8,1,0,2,7,9};
  int i;
  for( i=0;i<10;i++) {
    if(i%2!=0){
      arr[i]=2*arr[i];
    }
    else {
      arr[i]=arr[i]+10;
    }
  }
  for(i=0;i<=9;i++) {
    printf(" \n%d" , arr[i]);
  }
  return 0;
}