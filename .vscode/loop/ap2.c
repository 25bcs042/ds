#include<stdio.h>
int main()
{
    int i,a=100,n;
    printf("enter a number: ");
    scanf("%d" ,&n);
    for(i=100;i>=n;i--) { 
        if(a>=0){
        printf(" %d" ,a);
        a=a-3; }
    
    }
}