//2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main(){
    int pri=0,cur=1,next=0,n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("1  ");
    for(i=1;i<n;i++)
    {
        next=pri+cur;
        pri=cur;
        cur=next;
        printf("%d  ",next);
    }
    return 0;
}