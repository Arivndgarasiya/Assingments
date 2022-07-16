//2. Write a program to print a given number without its last digit.

#include<stdio.h>

int main(){
    int number,digit;
    printf("enter your number\n");
    scanf("%d",&number);
    digit=number/10;
    printf("number without last digits is =%d",digit);
    return 0;
}