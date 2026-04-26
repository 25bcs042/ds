//  GIVEN AN ARRAY OF MARKS OF STUDENTS , IF THE MARK OF ANY STUDENT IS LESS THAN 35 PRINT ITS ROLL NUMBER . [ROLL NO. HERE REFERS TO THE INDEX ]
#include<stdio.h>
int main() {
  int marks[10]={67,87,35,43 ,32, 24, 13, 24, 67,54};
  for(int i=0; i<=9; i++) {
    if(marks[i]<35) {
      printf(" %d" , i);
    }
  }
  return 0;
}
 