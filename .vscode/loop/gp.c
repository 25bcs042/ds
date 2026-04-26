#include<stdio.h>
int main()
{
    int i ,a=4, n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        printf("%d " ,a);
        a = a*4; }


}