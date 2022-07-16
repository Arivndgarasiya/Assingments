//18. Write a program which takes the month number as an input and display number of 
//days in that month

#include<stdio.h>

int main(){
    
    int month;
    printf("Enter the month\n");
    scanf("%d",&month);
    if(month==1)
    {
        printf("the month is januvary and days is =31");
    }
    else if(month==2)
    {
        printf("the month ius febwary and days is =28");
        printf("the month is febuwary and days is= 29");
    }
    else if(month==3)
    {
        printf("the month is march and days is =31");
    }
    else if(month==4)
    {
        printf("the month is April and days is =30");
    }
    else if(month==5)
    {
        printf("the month is may and days is =31");
    }
    else if(month==6)
    {
        printf("the month is jun and days is =30");
    }
    else if(month==7)
    {
        printf("the month is julay and days is =31");
    }
    else if(month==8)
    {
        printf("the month ius Agust and days is =31");
    }
    else if(month==9)
    {
        printf("the month ius september and days is =30");
    }
    else if(month==10)
    {
        printf("the month ius octomber and days is =31");
    }
    else if(month==11)
    {
        printf("the month ius naovmber and days is =30");
    }
    else if(month==12)
    {
        printf("the month ius December and days is =31");
    }
    

    return 0;
}