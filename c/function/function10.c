#include<stdio.h>
int foo (int x);
int bar(int y);

int main() {
  int x=1, y=2, count;
  for(count=1; count<=2; count++) {
    y += foo(x) + foo(y);
    printf("\n%d", y);
  }
}
int foo(int x) {
  int y;
  y = bar(x);
  return(y);
}
int bar(int x) {
  static int y = 10;
  y += 1;
return(y+x);
}