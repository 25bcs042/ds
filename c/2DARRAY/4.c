// WAP TO STORE 10 AT EVERY INDEX OF 2D MATRIX 5 ROWS AND 5 COLUMNS. 
#include<stdio.h>
int main() {
  int arr[5][5]; // { 10,10,10,10,........25 times can also write : }
  for(int i =0; i<5;i++) {
    for(int j=0;j<5;j++) {
      arr[i][j]=10;
    }
  }
  for(int i =0; i<5; i++) { 
    for(int j=0; j<5 ; j++) {
      printf(" %d " , arr[i][j]);
    }
    printf("\n");
  }
}