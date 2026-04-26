#include<stdio.h>
void a() {printf("1");}
void b(){a();printf("2");}
void c() {a();b();printf("3");}
void d(){a();b();c();printf("4");}
int main() {
  d();
} 
