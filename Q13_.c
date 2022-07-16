//13. Write a program to check whether a given number is divisible by 3 and divisible by 2

#include<stdio.h>

int main(){
    int num;
    printf("Enter the numbere \n");
    scanf("%d",&num);

    if(num%3==0 && num%2==0 )
    {
        printf("the number is dividible by 2 and 3");
    }
    else{

        printf("the number is not divisibvle by 2 and 3");
    }
    return 0;
}