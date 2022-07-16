//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>

int main(){
    int x;
    printf("Enter your 3 digit number\n");
    scanf("%d",&x);
    printf("%d",x/100+x/10%10+x%10);
    return 0;
}