#include<stdio.h>
#include<string.h>
int main() {
  typedef struct salbybrother {
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
  }salbybrother;
   salbybrother arr[3]; 
  arr[0].attack=60;
  arr[0].hp=100;
  arr[0].speed=90;
  arr[0].tier='a';
  strcpy(arr[0].name , "karli");

  arr[1].attack=65;
  arr[1].hp=95;
  arr[1].speed=190;
  arr[1].tier='s';
  strcpy(arr[1].name , "urther");

  arr[2].attack=160;
  arr[2].hp=109;
  arr[2].speed=190;
  arr[2].tier='g';
  strcpy(arr[2].name , "thomas salbey");

  for(int i=0;i<3;i++) {
    printf(" name : %s\n" , arr[i].name);
    printf(" attack : %d\n", arr[i].attack);
    printf(" hp : %d\n", arr[i].hp);
    printf("speed : %d\n", arr[i].speed);
    printf(" tier : %c\n", arr[i].tier);
    
  }
}