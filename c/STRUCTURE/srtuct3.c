
#include<stdio.h>
#include<string.h>
int main() {
  struct person {
    char name[50];
    int salary;
    int age;
  }p1 , p2;

  strcpy(p1.name , "ramayana");
  p1.salary=1000;
  p1.age=20;

  strcpy(p2.name, "geeta");
  p2.salary=90000;
  p2.age=30;
  printf("%d\n" , p2.age);

  printf("%s" , p1.name);
}