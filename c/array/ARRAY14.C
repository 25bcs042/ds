// FIND THE MAXM MARKS OUT OF ALL THE MARKS  IN THE LIST USING ARRAY
#include<stdio.h>
int main() {
  int marks[10]= {30 ,57,75,47,85,47,52,93,54,76};
   int maxmarks=marks[0];// WE CAN STORE THE FIRST ELEMENT OF THE ARRAY IN MAXMARKS;
   int i;
  for( i=0; i<=9;i++) {
    if(marks[i]>maxmarks) {
      maxmarks=marks[i];
    }
  }
    printf("%d" , maxmarks);
  
}