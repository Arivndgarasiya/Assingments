//5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>

int main(){
    int i;
    for(i=10;i>=1;i--)
    {
        printf("the revers odd natural no is %d\n",2*i-1);
    }
    return 0;
}