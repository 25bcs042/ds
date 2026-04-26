#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("enter the axes of A\n");
    scanf("%d %d" ,&x1 ,&y1);
    printf("enter the axes of b\n");
    scanf("%d %d" ,& x2 ,&y2);
    printf("enter the axes of c\n");
    scanf("%d %d" ,&x3 ,&y3);
    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);
    if(m1=m1) 
        printf("it is stright line");
    else {
    printf("it is not a straight line");
    }
}