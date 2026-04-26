#include<stdio.h>
int print(int n) {
  if(n<=0)
   return;
  printf("%d" ,n);
  print(n-1);

}
int main() {
  print(5);
  return 0;
}  