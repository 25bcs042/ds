#include<stdio.h>
int printxy (int x , int y) {
  int *ptr;
  x=0;
  ptr=&x;
  y=*ptr;
  *ptr = 1;
  printf("%d , %d," , x , y);
  return 0;
}  // the output is 1 ,0 