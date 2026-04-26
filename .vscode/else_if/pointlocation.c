#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the coordinates:");
    scanf("%d %d" ,&x , &y);
    if(x==0 && y==0) {
        printf("point lies on origin");
    }
    else if(y==0) {
        printf("point lies on x axis");
    }
    else if(x==0) {
        printf("point lies on y axis");
    }
    else 
    {
        printf("lies in quadrant");
    }
}