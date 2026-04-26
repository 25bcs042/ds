#include<stdio.h>
int fun(int n) {
  static int i;
  i=1;
  if(n>=5) return n;
  n=n+i;
  i++;
  return fun( n);
}
int main() {
  printf("%d" , fun(1));
  return 0;
}
/* fun(1)
  |
  v
fun(2)
  |
  v
fun(3)
  |
  v
fun(4)
  |
  v
fun(5)
Because:

fun(1): n = 1 + 1 = 2

fun(2): n = 2 + 1 = 3

fun(3): n = 3 + 1 = 4

fun(4): n = 4 + 1 = 5

fun(5): n >= 5 → return 5

*/