#include<stdio.h>
void foo(int*);
int main() { 
  int a =10;
  foo(&a);
  printf("%d" , a);
return 0;
}
void foo (int*ptr) {
  *ptr=*ptr+10;
  return 0;                   
}