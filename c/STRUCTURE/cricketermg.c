 #include<stdio.h>
 #include<string.h>
 int main() {

 typedef struct criketer {
  char name[20];
  int match_no;
  int age;
  float average;
 } criketer;

 criketer arr[2];
 for(int i=0; i<2; i++) {
  printf("enter the name of criketer : ");
  scanf("%s" , &arr[i].name);
  printf("enter the total match : ");
  scanf("%d"  ,&arr[i].match_no);
  printf("enter age : ");
  scanf("%d" , &arr[i].age);
  printf("enter the average : ");
  scanf("%f" , &arr[i].average);
  }
  for(int i=0;i<2;i++) {
    printf(" name : %s\n" , arr[i].name);
    printf(" age : %d\n" , arr[i].age);
    printf(" total matches : %d\n" , arr[i].match_no);
    printf(" average : %f\n" , arr[i].average);
  }
 }