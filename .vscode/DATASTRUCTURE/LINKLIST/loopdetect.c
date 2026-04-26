#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;
};

int loopdetect(struct node *head) {
  struct node *slow = head;
  struct node * fast=head;
  while(fast && fast->next){
    slow = slow->next;
    fast=fast->next->next;
    if(slow==fast) 
    return 1;
  }
 return 0;
}
int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node*fourth;

  // allocate memory in link list in heap

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

  // link btw 1st and 2nd nodes .

  head->data = 7;
  head->next = second;

  // link btw 2nd and 3rd nodes.

  second->data = 11;
  second->next = third;

  //  terminate the  list at hte third node .
  
  third->data = 78;
  third->next = fourth;
  fourth->data = 100;
  fourth->next =second;
 if(loopdetect(head)){
  printf("loop is detected");
 }
 else {
  printf("loop is not detcted");
 }

}
