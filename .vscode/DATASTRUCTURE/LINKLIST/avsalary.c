#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employe {
  int roll;
  int salary;
  char name[20];
  struct employe *next;
};
struct employe *head=NULL;
void insert(int r ,int s , char n[]) {
  struct employe * temp=(struct employe*)malloc(sizeof(struct employe));
  temp->roll=r;
  temp->salary=s;
  strcpy(temp->name, n);
  temp->next=head;
  head=temp;  
}

float avgsalary() {
  struct employe *ptr=head;
  int sum=0, count=0;
  while(ptr!=NULL){
    sum +=ptr->salary;
    count++;
    ptr=ptr->next;
  }
  if(count==0)
  return 0;

  return (float)sum/count;
}

void display() {
  struct employe *ptr=head;
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
  printf("the average salary : %.2f\n", avgsalary());
}