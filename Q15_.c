//15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("the number is positive");
    }
    else if(num<0)
    {
    printf("the number is nagetive");
    }
    else{
        printf("the number is Zero");
    }
    return 0;
}