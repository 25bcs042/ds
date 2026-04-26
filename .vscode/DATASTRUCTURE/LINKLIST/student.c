#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
  int roll;
  int salary;
  char name[20];
  struct student *next;
};
struct student *head=NULL;
void insert(int r ,int s , char n[]) {
  struct student * temp=(struct student*)malloc(sizeof(struct student));
  temp->roll=r;
  temp->salary=s;
  strcpy(temp->name, n);
  temp->next=head;
  head=temp;  
}

void display() {
  struct student *ptr=head;
  while(ptr!=NULL){
    printf("roll : %d  salary : %d  name : %s\n" , ptr->roll , ptr->salary, ptr->name);
    ptr=ptr->next;
  }
}
int main() {
  insert(2,10000, "rahul");
  insert(23 ,20000, "karan");
  insert(34,15000, "faizan");
  display();
}