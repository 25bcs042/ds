#include<stdio.h>
int main()
{
    float n;
    printf("enter the percentage: ");
    scanf("%f",&n);
    if(n>=90 && n<=100) {
        printf("exlellent");
    }
    else if(n>=80 && n<90) {
        printf("vey good");
    }
   else if(n>=70 && n<80) {
        printf("good");
    }
    else if(n>=50 && n<70) {
        printf("average");
    }
    else {
     printf("fail");
    }
    
}