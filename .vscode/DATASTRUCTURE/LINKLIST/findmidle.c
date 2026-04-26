#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};
void linklistTraversal(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf(" <->%d", ptr->data);
    ptr = ptr->next;
  }
}
struct node *findmid(struct node *head) {
  struct node *slow=head;
  struct node *fast=head;
  while(fast!=NULL && fast->next!=NULL) {
    slow=slow->next;
    fast=fast->next->next;
  }
  printf("%d" ,slow->data);
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
  struct node *fifth=(struct node *)malloc(sizeof(struct node));
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
  fourth->next = fifth;
  fifth->data=42;
  fifth->next=NULL;

 // linklistTraversal(head);
  linklistTraversal(head);
  printf("\n");
  findmid(head);
  return 0;
}
