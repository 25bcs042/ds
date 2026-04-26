#include<stdio.h>
#include<stdlib.h>
#define size 10
int s[size], top=-1;
void push(int item);
void pop();
void display();

void push(int item) {
  if (top==size-1) {
    printf("the stack  is full");
  }
  else {
    top++;
    s[top]=item;
    printf("%d push at the top " , item);
  }
} 
void pop() {
  int temp;
  if(top==-1) {
    printf("stack is already empty ");
  }
else{
  temp=s[top];
  top--;
  printf("%d is deleted form the top " , temp);
}
}
void display() {
  int i ;
  for(i=top;i>=0;i--) 
  printf("%d ",s[i]);
  printf("\n");
}
int main() {
  int choice , item ;

   while(1) {
    printf("enter 1 for push\n");
    printf("enter 2 for pop\n");
    printf("enter 3 for display\n");
    printf("enter 4 for exit\n");
    scanf("%d" , &choice);
    switch (choice) {
      case 1:printf("enter value to add : ");
      scanf("%d" , &item);
      push(item);
      printf("\n");
      break;
      case 2 :pop();
      break;
      case 3 : display();
      break;
      case 4 : exit(0);
      default : printf("wrong choice entered");
    }
  }
  return 0;
}   