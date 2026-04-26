#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the first number\n");
    scanf("%d", &a);
    printf("enter the second number\n");
    scanf("%d", &b);
    printf("enter the third numbwer\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("the first numberis greater");
    }
    else if (b > a && b > c)
    {
        printf("second number is greater");
    }
    else if (c > a && c > b)
    {
        printf("third number is greater");
    }
}