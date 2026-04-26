#include<stdio.h>
#include<stdlib.h>
struct node {
  int value;
  struct node *next;
};
struct node *front=NULL , *rear=NULL;
void inqueue(int val) {
  struct node *temp=(struct node *)malloc(sizeof(struct node));
  temp->value=val;
  temp->next=NULL;
  if(front==NULL && rear==NULL) {
    front =rear=temp;
  }
  else {
    rear->next=temp;
    rear=temp;
  }
  printf("%d vlaue is insreted" , val);
}
void dequeue() {
  struct node *temp;
  temp=front;
  if((front == NULL)&& (rear==NULL)){
    printf("already empty ");
  }
  else if (front == rear) {
    front=rear=NULL;
    free(temp);
  }
  front=front->next;
  free(temp);
}
void display() {
  struct node *temp;
  if((front == NULL)&& (rear==NULL)){
    printf("already empty ");
  }
  temp=front;
while(temp!=NULL) {
  printf("%d " , temp->value);
  temp=temp->next;
}
}
int main() {
    int choice, value;

    while (1) {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                inqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Wrong choice entered\n");
        }
    }
    return 0;
}