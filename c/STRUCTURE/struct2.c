// create a structure type 'book' with name , price , and number of pages as its attributes
#include<stdio.h>
#include<string.h>
int main() {
  struct book {
    char name[50];
    float price;
    int pages;
  }book1 , book2;

  strcpy(book1.name , "ramayana");
  book1.pages=1000;
  book1.price=200;

  strcpy(book2.name, "geeta");
  book2.pages=900;
  book2.price=300;
  printf("%d\n" , book1.pages);
  printf("%f\n" ,book1.price ); 
  printf("%s" , book1.name);
}