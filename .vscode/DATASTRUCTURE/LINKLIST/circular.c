#include<stdio.h>
#include<stdlib.h>
struct node {
  int data ;
  struct node *next;
};
void traversal(struct node *head) {
  struct node *ptr=head;
  do {
    printf("%d->", ptr->data);
    ptr=ptr->next;
  } while(ptr!=head);
}
 struct node *insertatfirst(struct node *head , int value) {
  struct node *ptr= (struct node *)malloc(sizeof(struct node));
  ptr->data=value;

  struct node *temp=head->next;
  while(temp->next!=head) {
    temp=temp->next;
  }
  temp->next=ptr;
  ptr->next=head;
  head=ptr;
  return head;
 }

int main() {
  struct node *head = (struct node *)malloc(sizeof(struct node));
  struct node *first = (struct node *)malloc(sizeof(struct node));
  struct node *second= (struct node *)malloc(sizeof(struct node));
  struct node *third = (struct node *)malloc(sizeof(struct node));
  struct node *fourth = (struct node *)malloc(sizeof(struct node));

  head->data= 12;
  head->next=first;

  first->data=13;
  first->next=second;

  second->data=14;
  second->next=third;

  third->data=16;
  third->next=fourth;

  fourth->data=19;
  fourth->next=head;

  printf("the link list before isertion \n");
  traversal(head);
  printf("\n");
  printf("the link list after insertion\n");
  head=insertatfirst(head , 24);
  traversal(head);
  return 0;

}