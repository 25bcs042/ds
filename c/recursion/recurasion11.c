#include<stdio.h>
int a=10; 
int main() {
  extern int a;
  printf("%d", a);     
}