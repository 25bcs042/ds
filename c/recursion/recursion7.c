#include<stdio.h>
int min(int n) {
  if(n<=0)
  return 1;
  else
  return 3+min(n-1);
}
int main() {
  printf("%d" ,min(3));
  return 0;
}
/*        min(3)
                 =  3 + min(2)
                         |
                         v
                     min(2)
                 =  3 + min(1)
                         |
                         v
                     min(1)
                 =  3 + min(0)
                         |
                         v
                     min(0)
                       = 1   (base case)*/
                       // output is sum of all