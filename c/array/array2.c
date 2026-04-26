#include<stdio.h>
int main() { 
  int a[4] = { 11 , 12 , 13 , 14};
  printf("%p\n" , a);
  printf("%p\n" , &a);
  printf("%p\n" , &a[0]);
  printf("%p\n" , a+1);
  printf("%p\n" , &a+1);
  printf("%p\n" , &a[0]+1);
  return 0;


}