#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d" ,&n);
    if(n%5==0) {
        if(n%3==0) {
            printf("number is divisble by 5 and 3 ");
        }
        else {
            printf("number is not dividsible by 5 and 3");
        }
    }
    else {
        printf("number is not divisible by 5 nad 3");
    }
}