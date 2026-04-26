#include<stdio.h>
#include<stdlib.h>
struct node {
  int data ;
  struct node *next;
};

void traversal(struct node *ptr) {
  while(ptr!=NULL) {
    printf("%d -> " , ptr->data);
    ptr=ptr->next;
  }
}
 struct node * deleteatend(struct node *head ) {
  struct node *ptr=head;
  struct node * temp= head->next;
  while(temp->next!=NULL) {  
    ptr=ptr->next;
    temp=temp->next;
  }
  ptr->next=NULL;
  free(temp);
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
  fourth->next=NULL;

  printf("the link list before deletion \n");
  traversal(head);
  printf("\n");
  printf("the link list after deletion\n");
  deleteatend(head); 
  traversal(head);
  return 0;

}