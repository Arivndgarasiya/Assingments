//Write a program to check whether a given number is an even number or an odd 
//number without using % operator.

#include<stdio.h>

int main(){
    int num;
    printf("Ente the number\n");
    scanf("%d",&num);
if(num&1)
{

    printf("Enter the number is odd\n");
    
}
else  
{

    printf("the number is even"); 
}
    return 0;
}