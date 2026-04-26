#include<stdio.h>
int main() { 
  int n , i=1 , fact=1;
  printf("enter the value of n : ");
  scanf("%d" ,&n);
  while(i<=n) {
    fact = fact *i;
    i++ ;
  }
  printf("the  factorail is %d"  ,fact);
}