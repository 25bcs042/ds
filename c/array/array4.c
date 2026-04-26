#include<stdio.h>
int main() { 
  int a[] = { 10,20,30,40,50};
  int i,*b;
  b=&a[4]-4;
  for(i=0;i<=4;i++) {
    printf("%d\n", *b);
    b++;
  }
  return 0;
}
