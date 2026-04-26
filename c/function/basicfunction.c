#include<stdio.h>
void england() {
    printf("we are in england\n");
    return;
}
void america() {
    printf("we are in america\n");
    england();
        return;
    }
void india() {
    printf("we are in india\n ");
    america();
    return;
}
int main() {
    india();
    return 0;
}