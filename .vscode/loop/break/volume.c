#include<stdio.h>
int main()
{
    float r , v;
    printf("enter the raduis");
    scanf("%d" ,&r);
    v = 3.14*4*r*r*r/3;
    printf("volume is %f" , v);
}