#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};      
struct node *head = NULL;
void insertatend(int value) {
  struct node *newnode = (struct node*)malloc(sizeof(struct node));
  struct node *temp = head;
  newnode-> data = value;
  newnode->next = NULL;
  if(temp==NULL) {
    head = newnode;
    return;
  }
  while(temp->next!=NULL) {
    temp = temp->next;
  }
 temp->next = newnode;
}
void display() {
   struct node *temp = head;
   while(temp!=NULL) {
    printf(" %d  " , temp->data);
    temp=temp->next;
   }
}
int main() {
  insertatend(12);
  insertatend(8);
  insertatend(9);
  insertatend(10);
   display() ;
  return 0;
}