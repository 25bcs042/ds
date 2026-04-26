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

void search(struct node *head, int key)
{
  struct node *ptr = head;
  int i = 1;
  int found = 0;

  while (ptr != NULL)
  {
    if (ptr->data == key)
    {
      printf("\n%d found at position %d", key, i);
      found = 1;
      break;
    }
    ptr = ptr->next;
    i++;
  }

  if (!found)
  {
    printf("\nElement not found");
  }
}

int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

  head->data = 7;
  head->next = second;

  second->data = 11;
  second->next = third;

  third->data = 78;
  third->next = fourth;

  fourth->data = 100;
  fourth->next = NULL;

  linklistTraversal(head);

  search(head, 11);

  return 0;
} 