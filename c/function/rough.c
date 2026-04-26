
#include <stdio.h>
int fun(int n) {
    if(n < 0) return -n;
    return fun(n-3);
}
int main() {
    printf("%d", fun(7));
}