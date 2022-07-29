/*
5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");

*/

#include<stdio.h>

int main(){
    int var;
    printf("Enter the variable\n");
    scanf("%d",&var);
    switch(var)
    {

        case 1:
        if(var==1)
            printf("good");
            break;
            case 2:
            if(var==2)
            printf("batter");
            break;
        
         case 3:
        if(var==3)
            printf("best");
            break;
            case 4:
            printf("invalid");
            
        
    }
    return 0;
}