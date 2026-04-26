#include<stdio.h>
#include<string.h>
int main() {
  typedef struct pokemon {
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
  }pokemon;
    pokemon a , b ,c;
   a.attack=100;
   a.hp=190;
   a.speed=200;
   a.tier='g';
   strcpy(a.name , "dorimon");

   b=a;
   b.attack=300;
   printf("%d\n" , b.attack);
   printf("%d" , a.attack);
}
