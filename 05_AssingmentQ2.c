//2. Write a program to print the first N natural numbers.

#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("the first N natural numbers. is %d\n",i);
    }
    return 0;
}