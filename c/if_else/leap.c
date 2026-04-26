#include<stdio.h>
int main()
{
    int n;
    printf("enter the year\n");
    scanf("%d" ,&n);
    if(n%4==0) {
        printf("this is the leap year");
    }
    else {
        printf("this is not leap year");
    }
}