#include<stdio.h>
#include<stdlib.h>

#define size 10

int s[size], front = -1, rear = -1;

void inqueue(int value) {
    if (rear == size - 1) {
        printf("Queue is full\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    s[rear] = value;
    printf("%d is enqueued\n", value);
}

void dqueue() {
    if (front == -1) {
        printf("Queue is empty\n");
    }
    else if (front == rear) {
        printf("%d is dequeued\n", s[front]);
        front = rear = -1;
    }
    else {
        printf("%d is dequeued\n", s[front]);
        front++;
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for (i = front; i <= rear; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
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
                dqueue();
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