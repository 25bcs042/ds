#include<stdio.h>
int main()
{
    float p,t,r,a,i;
    i =1;
    while(i<=5) {
        printf("\n enter the value of p t and r ");
        scanf(" %f %f %f" ,&p,&t,&r);
        a=p*r*t/100;
        printf("simple intrest=rs \n%f" ,a+p);
        i++;
    }   
}