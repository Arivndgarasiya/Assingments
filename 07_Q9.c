//9. Write a program to check whether a given number is an Armstrong number
//or not

#include<stdio.h>

int main(){
    int n,r ,c,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    c=n;
    while(n>0){
     
     r=n%10;
     sum=sum+r*r*r;
     n=n/10;

    }
    if(c==sum)
    {
        printf("Anstrom");
    }
    else{
         printf(" not Anstrom");
    }
    return 0;
}