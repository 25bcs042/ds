// PARNETHESIS MATCHING: 
#include<stdio.h>
#include<stdlib.h>

struct node {
  char data;
  struct node *next;
};

struct node *top=NULL;
void push(char x) {
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=x;
  newnode->next=top;
  top=newnode;
}
char pop() {
  if(top==NULL) {
    return '\0';
  }
  else {
    struct node *ptr=top;
    char val=ptr->data;
    top=top->next;
    free(ptr);
    return val; 

  }
}
int matchingpair(char a , char b) {
  if(a=='(' && b ==')') return 1;
  if(a=='{' && b =='}') return 1;
  if(a=='[' && b ==']') return 1;
}
int parenthesis(char exp[]) {
  int i=0;
  char x;
  while(exp[i]!='\0') {
  if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[') {
    push(exp[i]);
  
  }
if(exp[i]==')' || exp[i]=='}' || exp[i]==']') {
  x=pop() ;
  if(x=='\0' || !matchingpair(x,exp[i])) {
    return 0;
  }
  }
  i++;
}
if(top==NULL)
return 1;
else 
return 0;
}
int main() {
  char exp[100];
  printf("enter the expresion : ");
  scanf("%s" , exp);
if(parenthesis(exp)){
printf("expressoin is balanced : ");
}
else {
  printf("not balance");
}
}