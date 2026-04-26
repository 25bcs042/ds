#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");// u can write this program such as 
    scanf("%d" ,&n);//if(n<0)
    if(n<0) {
        n= n* (-1);
    }
    
        printf("the absolute value is: %d" ,n);
}