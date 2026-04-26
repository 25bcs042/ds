#include<stdio.h>
#include<string.h>

typedef struct pokemon {
  int attack;
  int hp;
  int speed;
  char name[20];
}pokemon;

int main() {
  pokemon p;
  p.attack=134;
  p.hp=97;
  p.speed=123;
  strcpy(p.name , "pikachu");

  pokemon *x=&p;
  printf("%p\n" , &p.attack);
  printf("%p\n" , &p.hp);
  printf("%p\n" , &p.speed);
  printf("%p\n" , p.name);
  printf("%p\n",x);
  printf("%d\n" , p.attack );

  (*x).attack=100; // we can change the value using pointer.
  printf("%d" , p.attack);
}
