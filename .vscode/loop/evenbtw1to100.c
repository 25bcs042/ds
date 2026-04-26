#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=190;i++) {
        if(i%19==0) {
            printf("%d " ,i);
        }
    }
}