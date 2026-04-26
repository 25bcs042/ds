#include<stdio.h>
int print(int n) {
  if(n<=0) return;
  print(n-1);
  printf("%d" ,n);
  print(n-1);

}
int main() {
  print(3);
  return 0;
}    /* Full Recursion Tree
                      print(3)
                 /        |        \
         print(2)         3        print(2)
        /    |    \                /    |    \
 print(1)    2   print(1)   print(1)    2   print(1)
   / | \          / | \       / | \          / | \
 p(0)1 p(0)   p(0)1 p(0)   p(0)1 p(0)   p(0)1 p(0)
*/
// 1213121