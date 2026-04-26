#include<stdio.h>
int main()
{
    printf("program to find the factorial:\n");
    int n, factorial=1;
    printf("enter the number\n");
    scanf("%d" ,&n);
    int i = 1;
    while(i<=n)
    {
        factorial = factorial*i;
        i++;
        {
            printf(" factorial is %d\n" , factorial);
        }
    }
}