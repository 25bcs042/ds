#include<stdio.h>
void foo(int x)
{
  switch(x) {
    case 1: printf("*");
    case 2: printf("*");
    case 3: printf("*");
    case 4: printf("*");
    default:printf("*");
  }
}
int main()
{
  foo(2.5);
}