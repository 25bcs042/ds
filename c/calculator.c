#include<stdio.h>
int main()
{
    int a, b , choice;
    printf("enter the first number\n");
    scanf("%d" ,&a);
    printf("enter the second number\n");
    scanf("%d" ,&b);
    printf("enter 1 for addition\n");
    printf("enter 2 for substraction\n");
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");
    scanf("%d" ,&choice);
    if(choice==1)
    printf("%d" , a+b);
    else if(choice==2)
    printf("%d" , a-b);
    else if(choice==3)
    printf("%d" , a*b);
    else if (choice == 4)
    printf("%d" , a/b);
    else 
    printf("wrong choice");
}