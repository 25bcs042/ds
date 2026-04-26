#include<stdio.h>
int main() {
  int marks[10] = {12 ,39,56,87,67,54,98,93,82,85};
  int fmax=0;
  int smax=0;
  int tmax=0;
  for(int i =0; i<=9; i++) {
    if(marks[i]>tmax) {
      if(marks[i]>smax) { 
        if(marks[i]>fmax) {
          tmax=smax;
          smax=fmax;
          fmax=marks[i];
        }
        else {
         tmax=smax;
          smax=marks[i];
        }
        }
        else {
        tmax=marks[i];
        }
      }
  }
  printf(" the first maxm is : %d\n" , fmax);
  printf("the second maxm is : %d\n" , smax);
  printf(" the third maxm is : %d\n" , tmax);
}