#include<stdio.h>
int main()
{
    int a , b;
    printf("enter the lenght\n");
    scanf("%d" ,&a);
    printf("enter the breadth\n");
    scanf("%d" ,&b);
    int c=a*b;
    int d=2*(a+b);
    if(c>d) {
        printf("area is greater than parameter");
    }
    else if(c<d) {
        printf("parameter is greater than area");
    }
    else {
        printf("both are same");
    }
    

}