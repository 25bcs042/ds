#include<stdio.h>
int main() {
  int n , r ;
  printf("enter the value of n : ");
  scanf("%d" , &n);
  printf("enter the value of r : ");
  scanf("%d" ,&r);
  int nfact =1 ;
  int rfact=1;
  int nrfact=1;
  for(int i=2; i<=n; i++) {
    nfact= nfact*i;
  }
  for(int i =2; i<=r; i++ ) {
    rfact=rfact*i;
  }
  for(int i=2; i<=n-r; i++) {
    nrfact= nrfact*i;
  }
  int ncr = nfact/ (rfact*nrfact);
  printf("the result id %d " , ncr);
  return 0;
}