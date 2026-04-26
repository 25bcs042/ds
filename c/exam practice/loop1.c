#include<stdio.h>
int main() {
int n , product=1 , i =1;
printf("enter the value of n : ");
scanf("%d", &n);
while (i<=n) {
  product = product*i;
  i++;
}
printf("the the product is %d" ,product);
}