#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};
void linklisttraversal(struct node *ptr){
  while(ptr!=NULL){
    printf("%d " , ptr->data);
    ptr=ptr->next;
  }
}
struct node *insertatbeg(struct node *head , int value) {
  struct node *newnode= (struct node*)malloc(sizeof(struct node));
  newnode->data=value;
  newnode->next=head;
  head = newnode;
  return head;
}
struct node *insertatend(struct node *head , int value){
  struct node *newnode;
  newnode->data=value;
  newnode->next=NULL;
  struct node *ptr=head;
  if(ptr==NULL){
  head=newnode;
  return head;
  }
  while(ptr->next!=NULL) {
    ptr=ptr->next;
  }
  ptr->next=newnode;
  return head;
}
// struct node *insertatdesire(struct node *head , int pos , int val){
//   struct node *newnode=

int main() {
  struct node *head=(struct node *)malloc(sizeof(struct node));
 struct node *first=(struct node *)malloc(sizeof(struct node));
 struct node *second=(struct node *)malloc(sizeof(struct node));
 struct node *third=(struct node *)malloc(sizeof(struct node));
 head->data=7;
 head->next=first;
 first->data=12;
 first->next=second;
 second->data=23;
 second->next=third;
 third->data=134;
 third->next=NULL;
 linklisttraversal(head);
 printf("\n");
 head=insertatbeg(head , 29);
printf("\n");
 linklisttraversal(head);
 printf("\n");
 head=insertatend(head ,76);

 linklisttraversal(head);

}