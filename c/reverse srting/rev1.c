#include<stdio.h>
#include<stdio.h>
int main() {
  char str[1000];
  puts("enter a string");
  scanf("%[^\n]s" , str);
  int size =0;
  int k = 0;
  while (str[k]!='\0') {
    size++;
    k++;
  }
  int i , j;
  for(i=0 , j=size-1; i<=j; i++, j--) {
    char temp = str[i];
    str[i]= str[j];
    str[j] = temp;
  }
  puts("the reverse string is :");
  puts(str); 

}

