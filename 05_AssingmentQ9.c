//9. Write a program to print cubes of the first N natural numbers

#include<stdio.h>

int main(){
    int i ,j;
    printf("Enter the nubner\n");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {

        printf("the square of %d is =%d\n",i,i*i*i);
    }
    return 0;
}