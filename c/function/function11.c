#include<stdio.h>
int sub (int c , int d) {
  int i;
  i=c-d;
  return i;
}
int main() {
  int a=10 , b=20;
  int diff;
  diff = sub(b,a);
  printf("%d" , diff);
  return 0;
}