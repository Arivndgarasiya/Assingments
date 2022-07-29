/*
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit */

#include <stdio.h>

int main()
{
    int choice,a,b,c;
    printf("1. To check isosceles triangle\n");
    printf("2. To check right angled triangle\n");
    printf("3. To check equilateral triangle\n");
    printf("4. Exit\n");

    printf("Enter your choice\n");
    scanf("%d", &choice);
    printf("Enter the three sides o tranle   trangle\n");
    scanf("%d%d%d",&a,&b,&c);
    switch (choice)
    {
        case 1:
        if(a==b || b==c ||c==a){
            printf("Yes it is isosceles trangle\n ");
        }
        else{
            printf("not isosceles triangle ");
        }
            break;
            case 2:
        if(a*a==b*b+c*c || b*b==c*c+a*a ||c*c==a*a+b*b){
            printf("Yes it is right angled triangle trangle\n ");
        }
        else{
            printf("not right angled triangle ");
        }
            break;
            case 3:
        if(a==b && b==a){
            printf("Yes it is  equilateral trangle\n ");
        }
        else{
            printf("not  equilateral triangle ");
        }
            break;
        

    }

    return 0;
}