#include<stdio.h>
int f1(int);
int main() {
  int a=50;
  printf("%d" ,f1(a));
  printf("%d" , f1(a));
  return 0;
}
int f1(int c) { 
  int d=10;
  d++;
  return c+d;
  }