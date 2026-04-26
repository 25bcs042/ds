#include<stdio.h>
#include<stdlib.h>
# define size 5
int arr [size];
int front = -1 , rear=-1;
void inqueue(int value) {
  if((front==(rear+1)%size) || (front ==0 && rear == size -1)) {
    printf("stack is already full");
    return;
  }
   if (front ==-1) { 
     front = 0;
   }
     rear = (rear+1)%size;
     arr[rear]=value;
     printf("%d is inserted " , value);
  
}
void dequeue() {
  int temp;
  if(front ==-1 && rear==-1 ){
    printf("queue is empty ");
  }
  else {
    temp=arr[front];
    if(front == rear) {
      front=-1;
      rear=-1;
    }
    else {
      front = (front+1)%size;
      printf("%d is deleted " , temp);
    }
  }
}
void display()
{
    int i;

    if(front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(i = front; i != rear; i = (i + 1) % size)
        {
            printf("%d ", arr[i]);
        }
        printf("%d", arr[rear]);  // print last element
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