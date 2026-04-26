#include<stdio.h>
int f1 (int);
int main() {
  int a=50;
  a=f1(a);
  printf("%d" ,a);
  a=f1(a);
  printf("%d" ,a);
  return 0;
}
int f1(int c) {
  return c+20;
}