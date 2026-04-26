#include<stdio.h>
#include<stdlib.h>

 struct node {
  int data;
  struct node *next;
 };
 struct node *top= NULL;
 void push(int value) {
  struct node *newnode= (struct node *)malloc(sizeof(struct node));
  newnode->data=value;
  newnode->next=top;
  top=newnode;
 }
 void pop() {
  struct node *ptr=top;
  if(ptr==NULL) {
    printf("stack is already empty");
  }
  else {
    top=ptr->next;
    free(ptr);
  }
 }
  void display() {
    struct node *ptr=top;
    while(ptr!=NULL) {
    printf("%d " , ptr->data);
    ptr=ptr->next;
    }
  }
  int main() {
    int choice , value;
    while(1) {
      printf("enter 1 for push\n");
      printf("enter 2 for pop\n");
      printf("enter 3 for display \n");
      printf("enter 4 for exit \n");
      scanf("%d" , &choice);

      switch(choice) {
        case 1 : printf("enter the value : ");
        scanf("%d" , &value);
        push(value);
        break;
        case 2 : pop();
        break;
        case 3 : display();
        break;
        case 4 : exit(0);
        break;
        printf("enter the wrong choice ");
      }
    }
  }