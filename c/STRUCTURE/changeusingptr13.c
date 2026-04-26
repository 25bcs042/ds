#include<stdio.h>
#include<string.h>

typedef struct pokemon {
  int attack;
  int hp;
  int speed;
  char name[20];
}pokemon;

 void change(pokemon *x) {
  strcpy((*x).name , "dorimon");
  (*x).hp=324;


 }

int main() {
  pokemon p;
  p.attack=134;
  p.hp=97;
  p.speed=123;
  strcpy(p.name , "pikachu");
  printf("%s\n" ,p.name);
  printf("%d\n" , p.attack);
  printf("%d\n" , p.hp);
  printf("%d\n" , p.speed);
  change(&p);
  printf("%s\n" ,p.name);
  printf("%d\n" , p.attack);
  printf("%d\n" , p.hp);
  printf("%d\n" , p.speed);

}
