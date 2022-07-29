/*//2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit 
*/

#include<stdio.h>

int main(){
    int a,b,choice,s=0;
while(1)
{
    printf("1 Addition\n");
    printf("2 subtraction\n");
    printf("3 4multiplication\n");
    printf("4 Division\n");
    printf("5 Exit\n");
    printf("Enter your choise\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Addtion\n");
        printf("Enter the two number\n");
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("the sum of two number is =%d ",s);
        break;
      
       case 2:
        printf("Subtraction\n");
        printf("Enter the two number\n");
        scanf("%d%d",&a,&b);
        s=a-b;
        printf("Subtraction of two number is =%d ",s);
        break;
       
        case 3:
        printf("multipication\n");
        printf("Enter the two number\n");
        scanf("%d%d",&a,&b);
        s=a*b;
        printf("the multipication of two number is =%d ",s);
        break;

         case 4:
        printf("division\n");
        printf("Enter the two number\n");
        scanf("%d%d",&a,&b);
        s=a/b;
        printf("the division of two number is =%d ",s);
        break;
        case 5:
        exit(0);
        
        default:
        printf("invalid choise");
        break;

    }

    }

    return 0;
}