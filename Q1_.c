//Write a program to print unit digit of a given number

#include<stdio.h>

int main(){
    int x;
    printf("enter your number\n");
    scanf("%d",&x);
    printf("your unit digit %d",x%10);
    return 0;
}