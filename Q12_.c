//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
//convert it into USD.

#include<stdio.h>

int main(){
    int  INR;
    float USD;
    printf("Enter the INR\n");
    scanf("%d",&INR);
    USD=INR*76.45;
    printf("the result id %f",USD);
    return 0;
}