// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement

#include <stdio.h>

int main(){

  int choice ,num;
  printf("Enter the number\n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
  printf("enter the nagetive number");
  scanf("%d",&num);
  num=num*(-1);
  printf("%d",num);
  break;
  case 2:
  printf("enter the positive num\n");
  scanf("%d",&num);
  num=num*(-1);
  printf("%d",num);
  break;
  }
  return 0;
}