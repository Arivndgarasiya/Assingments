//Write a program to input a number from the user and also input a digit. Append a 
//digit in the number and print the resulting number. (Example - number=234 and 
//digit=9 then the resulting number is 2349)
#include<stdio.h>

int main(){
    int num,sum;
    printf("Enter the number\n");
    scanf("%d",&num);
    sum=num/100+num/10%10+num%10;
    printf("  %d%d",num,sum);
    return 0;
}