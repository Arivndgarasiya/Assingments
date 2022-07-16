//8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main(){
    int year;
    printf("Enṭer the year \n");
    scanf("%d",&year);
     
    if(year%400==0 || year%4==0 && year%100!=0)
    {
        printf("the year is leap year");
    }
    else{

        printf("the year is not a leap  leap year");
    }
    return 0;
}   