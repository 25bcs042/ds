// nesting the properties from one to another .
#include<stdio.h>
#include<string.h>
int main() {
  typedef struct pokemon  {
 int attack;
 int speed;
 int hp;
 char tier;
 char name;
  } pokemon;
  typedef struct lagendrypokemon {
    pokemon normal;
    char ability[10];
  }lagendrypokemon;

  typedef struct goodpokemon {
    lagendrypokemon legend;
    char divinepower[20];
  }godpokemon;

  godpokemon maruto;
  strcpy(maruto.divinepower, "never end");
  maruto.legend.normal.attack=100;
  strcpy(maruto.legend.abil ity , "flying");

  printf("%s" , maruto.divinepower);
  printf("%d" , maruto.legend.normal.attack);

 lagendrypokemon mewtwo;
 strcpy(mewtwo.ability, "pressure");
 mewtwo.normal.attack=200;
 mewtwo.normal.hp=180; 
}