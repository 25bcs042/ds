//WAP TO COPY THE CONTENTS OF ONE ARRAY INTO ANOTHER IN THE REVERSE ORDER.
#include<stdio.h>
int main() { 
  int arr[7]= {2,4,6,8,9,11,24};
  int brr[7];
  for(int i=0;i<=6;i++){
    brr[i]=arr[6-i];
  }
  for( int i=0;i<=6;i++) {
    printf(" %d " , brr[i]);

  }
return 0;
}