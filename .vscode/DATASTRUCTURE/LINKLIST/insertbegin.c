  
  #include<stdio.h>
  #include<stdlib.h>
  struct node{
    int data;
    struct node *next;
  };

  struct node *head = NULL;
  void insert(int value) {
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data =value;
  newnode->next = head;
  head = newnode;
}
void display() {
  struct node *ptr=head;
  while(ptr!=NULL) {
    printf(" %d" , ptr->data);
    ptr=ptr->next;
  }
}
int main() {
  insert(10);
  insert(12);
  display(head);
  return 0;
}