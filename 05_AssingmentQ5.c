//5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("the first N natural numbers. is %d\n",2*i-1);
    }
    return 0;
}