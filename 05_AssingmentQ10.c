//10. Write a program to print a table of N

#include<stdio.h>

int main(){
    int i ,j;
    printf("Enter the number\n");
    scanf("%d",&j);
    for(i=1;i<=10;i++){

        printf("the table of N is %d*%d=%d\n",j,i,i*j);
    }
    return 0;
}