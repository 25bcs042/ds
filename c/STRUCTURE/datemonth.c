#include<stdio.h>
#include<stdbool.h> 
int main() {
  typedef struct date {
    int date;
    int month;
    int year;
  }date;
  date a , b;
  a.date=12;
  a.month=1;
  a.year=2006;

  b.date=15;
  b.month=3;
  b.year=2026;

 bool flag =true;
 if(a.date!=b.date) flag=false;
 if(a.month!=b.month) flag=false;
 if(a.year!=b.year) flag=false;

 if(flag==true) printf("the dates are same ");
 else printf("the dates are diffent ");
}