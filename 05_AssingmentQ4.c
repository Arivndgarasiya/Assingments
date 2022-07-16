//4. Write a program to print the first N odd natural numbers

#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("the first N natural numbers. is %d\n",2*i-1);
    }
    return 0;
}