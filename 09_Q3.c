//3. Write a program which takes the day number of a week and displays a
//unique greeting message for the day

#include<stdio.h>

int main(){
    int day;
    printf("Enter thwe day\n");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("today is = Monday \n =Good Morning");
        break;
         case 2:
        printf("today is = twesday \n =hello");
        break;
        case 3:
        printf("today is = wednusday \n =jy shri ram");
        break;
         case 4:
        printf("today is = thursday\n =hy");
        break;
        case 5:
        printf("today is = friday \n =baby");
        break;
         case 6:
        printf("today is = suterday \n =weak up");
        break;
        case 7:
        printf("today is = sunday \n =hello");
        break;
         case 8:
         printf("invalid day in a week");
    }

        
    
    return 0;
}