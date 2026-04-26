#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the first side\n");
    scanf("%d", &a);
    printf("enter the second side\n");
    scanf("%d", &b);
    printf("enter the third side\n");
    scanf("%d", &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("traingle is valid");
    }
    else
    {
        printf("traingle is not valid");
    }
}