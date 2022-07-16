//5. Write a program to check whether a given number is a three-digit
// number or not

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num>=100 && num<999)
    {

        printf("the number is a three digit ");
    }
    else{
        printf("the number is not a three digit");
    }

    return 0;
}