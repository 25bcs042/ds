// crate a structure person having attributes as age and wieght . access its structure variable using pointer .
#include<stdio.h>
 typedef struct person {
  int age;
  float weight;
 }person;
 
 int main() {
  person p;
  p.age=20;
  p.weight=66;
  person *x=&p;
 }