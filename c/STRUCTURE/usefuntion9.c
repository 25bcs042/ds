#include<stdio.h>
#include<string.h>


  typedef struct pokemon {
    int hp;
    int attack;
    int speed; 
    char name[20];
  }pokemon;

  void fun( pokemon p) {
  printf("%s\n" , p.name);  
  printf("%d\n" , p.hp);
  printf("%d\n" , p.attack);
  printf("%d\n" , p.speed);
  return ;
}
int main() {
  pokemon pickachu;
  pickachu.attack=100;
  pickachu.hp=200;
  pickachu.speed=160;
  strcpy(pickachu.name , "pikachu");
  fun(pickachu);
}
