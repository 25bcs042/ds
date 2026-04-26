#include<stdio.h>
int main() {
  printf("hello world");
  main();

  return 0;
}
/* this code print many time "hello world
due to missing of base condtion"*/