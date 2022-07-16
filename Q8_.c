//8. Write a program to check whether the given number is even or odd using a bitwise 
//operator

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    if(num&1)
    {
        printf("number is odd ");
    
}
    else{
        printf("number is even");
    }

    return 0;
}