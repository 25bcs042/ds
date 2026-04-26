#include<stdio.h>
int main() {
  int a=10;
  int *p=&a;
  printf("\n %d" , a);
  printf("\n%d  " , *p);
  printf("\n%u" ,&a);
  printf("\n%u" , p);
  return 0;
}
