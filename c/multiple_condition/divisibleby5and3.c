#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n%3==0 && n%5==0) {
        printf("number is divisible by 5 and 3");
    }
    else {
        printf("number is not divisible by 5 and 3");
    }
} // we can replace this condition if n%15==0