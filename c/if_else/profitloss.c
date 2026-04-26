#include<stdio.h>
int main()
{
    int a , b;
    printf("enter the cost price\n");
    scanf("%d" ,&a);
    printf("enter the selling price\n");
    scanf("%d" ,&b);
    if(a>b) {
    printf("loss by :%d" ,a-b);
    }
    else if(b>a) {
        printf("profit by :%d" ,b-a);
    }
    else if(a=b) {
        printf("not profit nor loss");
    }
}