// FUNCTION WITH ARRAY
 #include<stdio.h>
 void fun(int arr[]) {
  arr[0] =10; 
return ;
 }
 int main() { 
  int arr[5]={2,6,4,8,3};
  printf("\n%d" , arr[0]);
  fun(arr);
   printf(" \n%d" , arr[0]); 
   return 0;
 }