#include<stdio.h>
int main() {
   struct pokemon {
    int hp;
    int speed;
    int attack;
    char tier;// s a b c d
   };
   struct pokemon pikachu;


   pikachu.attack=60;
  //  pikachu.hp=50;
  printf("enter the hp of pikachu :");
  scanf("%d" , &pikachu.hp);
   pikachu.speed=100;
   pikachu.tier='s';
  printf("%d\n" , pikachu.hp);
   printf("%d\n" , pikachu.attack);
   printf("%c" , pikachu.tier);
   struct pokemon dorimon;

   dorimon.attack=140;
   dorimon.hp=70;
   dorimon.speed=120;
   dorimon.tier='s';

}