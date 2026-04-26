#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d" ,&n);
    for(i=4; i<=3*n+1; i=i+3 ) {
        printf(" %d" , i); }
}