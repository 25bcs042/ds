#include<stdio.h>
#include<stdlib.h>
 struct node {
  int data;
  struct node *next;
 };
  
 void traversal (struct node  *ptr) {
  while(ptr!=NULL) {
    printf("%d ->" , ptr->data);
    ptr=ptr->next;
  }
 }
 
 struct node * deletefirst(struct node *head) {
  struct node *ptr=head;
  head = head->next;
  free(ptr);
  return head;
 }

 int main() {
  struct node *head = (struct node *)malloc(sizeof(struct node));
  struct node *first= (struct node *)malloc(sizeof(struct node));
  struct node *second= (struct node *)malloc(sizeof(struct node));
  struct node *third = (struct node *)malloc(sizeof(struct node));
  struct node *fourth = (struct node *)malloc(sizeof(struct node));

  head->data=12;
  head->next=first;

  first->data=13;
  first->next=second;

  second->data=14;
  second->next=third;

  third->data=16;
  third->next=fourth;

  fourth->data=18;
  fourth->next=NULL;

    printf("LINK LIST BEFORE DELETION \n");
  traversal(head);
 printf("\n");
  head=deletefirst(head);
  printf("LINK LIST AFTER DELETION \n");
  traversal(head);
  return 0;
 }