#include<stdio.h>
int main()
{
    printf("program to performtable of a number\n");
    int n;
    printf("enter a number :");
    scanf("%d" ,&n);
    int i =1;
    while(i<=20)
    {
        printf("%d * %d = %d\n" ,n , i , n*i);
        i++;
    }
}