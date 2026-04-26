#include<stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d" ,&n);
    if(n>99 && n<1000) {
        printf("the number is three digits");
    }
    else {
        printf("number is not three digits");
    }
}