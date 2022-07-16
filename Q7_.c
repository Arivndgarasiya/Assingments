//7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main(){
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    if(num&1)
    {

        printf("the LSB of %d is set(1).\n",num);
    }
    else{

        printf("the LSB of %d is unset(0).\n",num);
    }
            return 0;
}