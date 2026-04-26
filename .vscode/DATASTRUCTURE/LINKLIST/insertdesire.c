#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
 void traversal(struct node *ptr) {
  while(ptr!=NULL){
    printf(" %d " , ptr->data);
    ptr=ptr->next;
  }
 }
 void insertatposition(struct node *head , int value , int pos) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data=value;
  struct node *ptr = head;
  int i =1;
  while(i<pos-1 && ptr!=NULL) {
    ptr=ptr->next;
    i++;
  }
  if(ptr==NULL) {
    printf("out of range : " );
  }
  newnode->next=ptr->next;
  ptr->next=newnode;
}
int main() {
  struct node *head;
  
  struct node *first;
  struct node *second;
  struct node *third;
  struct node *fourth;
  head = (struct node *)malloc(sizeof(struct node));
  first = (struct node *)malloc(sizeof(struct node));
  second= (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

  head->data=1;
  head->next= first;

  first->data=12;
  first->next=second;

  second->data=76;
  second->next=third;

  third->data = 78;
  third->next = fourth;

  fourth->data = 100;
  fourth->next = NULL;

  printf("link before adding \n");
  traversal (head);
    
  insertatposition(head , 20 ,2);
  printf("\n");
  printf("link after adding\n ");
  traversal(head);
}

