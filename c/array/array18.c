//  THE NUMBER OFCOUNT ELEMENTS IN GIVEN ARRAY GREATER THAN A NUMBER X
#include<stdio.h>
int main() { 
  int arr[10]={34,56,2,65,30,21,22,35,7,20 };
  int x=10;
  int i, count=0;
  for(i=0;i<=9;i++)
    if(x<arr[i]){
      count++;
    }
   printf("%d" , count++);
  }
