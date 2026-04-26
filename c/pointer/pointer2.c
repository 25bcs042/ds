#include<stdio.h>
int main() { 
  int a , *b;
  a=10;
  b=&a;
  a=a+10;
  *b=*b+20;
  printf("%d" ,a);
  return 0;

}    