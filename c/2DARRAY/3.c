// WAP TO STORE PCM  MARKS OBTRAINED BY N  STUDENT SIDE BY SIDE IN A MATRIX.
#include<stdio.h>
int main() {
  int n;
  printf("enter the number of student : ");
  scanf("%d" , &n);

  int arr[n][3];
  for(int i =0; i<n; i++) {
    for(int j=0; j<3; j++) { 
      if(j==0) {
        printf("enter the chemistry marks of sudent %d  : " , i+1 );
      }
      else if(j==1) {
        printf("enter the physics marks of sudent %d  : " , i+1 );
      }
      else {
        printf("enter the maths marks of sudent %d  : " , i+1 );
      }
      scanf("%d" , &arr[i][j]);
    }
}
 for(int i =0; i<n; i++) { 
    for(int j=0; j<3; j++) {
      printf(" %d " , arr[i][j]);
    }
    printf("\n");
  }
}