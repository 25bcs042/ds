#include<stdio.h>
int main()
{
    printf("program to find the product of natural number\n");
    int n , product = 1;
    printf("enter a number:\n");
    scanf("%d" ,&n);
    int i = 1;
    while(i<=n) 
    {
        product=product*i;
        i++;
        {
            printf(" the sum is : %d" , product);
        }
    }
}