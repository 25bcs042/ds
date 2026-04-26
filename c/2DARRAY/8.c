#include<stdio.h>
int main() {
  int arr[3][3] = {{1 ,3,5} , {6,1 7,2} , {9,8,3}};
 int sum1=0;
 int sum2=0;
  int sum3=0;
  int i;
  for( i =0;i<=2;i++) {
    for(int j=0;j<=2;j++) {
      if(i==0) {
        sum1=sum1+arr[i][j];

      } 
       else if (i==1) {
        sum2=sum2+arr[i][j];
      }
      else if (i==2) {
        sum3=sum3+arr[i][j];
      }
  }
 }
 printf("%d \n" , sum1);
 printf("%d\n" , sum2);
 printf("%d\n" , sum3);
 if(sum1>sum2 && sum1>sum3) {
  printf("row one has greater sum ");
 }
 else if(sum2>sum1 && sum2>sum3) {
  printf("row two has greater sum : ");
 }
 else{
  printf("row three have greater sum : ");
 }
}