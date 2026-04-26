#include<stdio.h>
int main()
{
    int a , b , c;
    printf("enter the first number\n");
    scanf("%d" ,&a);
    printf("enter the second number\n");
    scanf("%d" ,&b);
    printf("enter the third number\n");
    scanf("%d", &c);
    if(a>b) {
        if(a>c)
            printf("%d is greatest" ,a);
        else// c>a
            printf("%d is greatest" ,c);    
    }
    else { // a>b
        if(b>c)
        printf("%d is greatest" ,b);
        else//c>b
            printf("%d is greatest" ,c);
    }
}