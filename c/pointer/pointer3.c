#include<stdio.h>
int main()  {
  int a , *b ,**c;
  a=10;
  b=&a;
  c=&b;
  a=a+10;
  *b=*b+20;
  **c=**c+20;
  printf("%d" ,a);
  return 0;
  