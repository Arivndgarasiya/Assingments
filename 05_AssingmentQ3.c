//3. Write a program to print the first N natural numbers in reverse orderb
#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("the first N natural numbers. is %d\n",i);
    }
    return 0;
}