#include<stdio.h>
int foo(int n) {
  if(n<=9) 
  return n;
  else
  return n%10+foo(n/10);
}
int main() { 
  printf("%d" ,foo(12345));
  return 0;
}
/*           foo(12345)
                  => 5 + foo(1234)
                         |
                         v
                      foo(1234)
                  => 4 + foo(123)
                         |
                         v
                      foo(123)
                  => 3 + foo(12)
                         |
                         v
                      foo(12)
                  => 2 + foo(1)
                         |
                         v
                      foo(1)
                  (base case) => 1
🧠 Step-by-Step Dry Run (Bottom-U*/