// 1. Write a program which takes the month number as an input and display
// number of days in that month.

#include <stdio.h>

int main()
{
    int month;
    printf("Enter the month\n ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("month = janyvary\n total days = 31");
        break;

    case 2:
        printf("month = fabuvary\n total days = 28");
        break;

    case 3:
        printf("month = march\n total days = 31");
        break;
    case 4:
        printf("month = aprail\n total days = 30");
        break;
    case 5:
        printf("month = may\n total days = 31");
        break;

    case 6:
        printf("month = jun\n total days = 30");
        break;
    case 7:
        printf("month = julay\n total days = 31");
        break;
    case 8:
        printf("month = agust\n total days = 31");
        break;
    case 9:
        printf("month = september\n total days = 30");
        break;
    case 10:
        printf("month = octomber\n total days = 31");
        break;
    case 11:

        printf("month = navmbur\n total days = 30");
        break;
    case 12:
        printf("month = december\n total days = 31");
        break;
    default:
        printf("invalid month");
    }
    return 0;
}