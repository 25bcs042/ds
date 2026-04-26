#include<stdio.h>
int som(int n) {
  if(n>1)
  som (n-1);
  for(int i=0; i<n; i++)
  printf("*");
  printf("\n");
}
int main() {
  som(5);
  return 0;
}