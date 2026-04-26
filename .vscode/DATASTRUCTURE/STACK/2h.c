// find the peak .
#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};
 struct node *top=NULL;
void push(int item) {
  struct node *temp=(struct node *)malloc(sizeof(struct node));
  temp->data=item;
  temp->next=top;
  top=temp;
}

void pop() {
  struct node *temp;
  temp=top;
  if(top==  NULL) {
    printf("underflow");
  }
  else {
    top=temp->next;
    free(temp);
  }
}
void display() {
  struct node *temp=top;
  while(temp!=NULL) {
    printf("%d " , temp->data);
    temp=temp->next;
  }
}

void peak(int pos) {
  struct node *ptr=top;
  int i;
  for(i=0;(i<pos-1 && ptr!=NULL);i++) {
    ptr=ptr->next;
  }
  if(ptr!=NULL) {
    printf("%d\n" , ptr->data);
  }
  else {
    printf("invalid position");
  }
}
int main() { 
  int choice ,pos, item;
  while(1) {
    printf("enter 1 for push\n");
    printf("enter 2 for pop\n");
    printf("enter 3 for display\n");
    printf("enter 4 for exit \n");
    printf("enter 5 for peak : \n ");
    scanf("%d" , &choice);
    switch(choice) {
      case 1 : printf("enter value for push : ");
      scanf("%d" , &item);
      push(item);
      break;
      case 2 : pop() ;
      break;
      case 3 : display() ;
      break;
      case 4 :exit;
      break;
      case 5 : printf("enter the position : ");
      scanf("%d" , &pos);
      peak(pos);
      break ;
      default : printf("wrong choice enterd");
    }
  }
  return 0;
}
