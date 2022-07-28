// Write a program to check whether two given numbers are co-prime
//numbers or not

#include<stdio.h>

int main(){
    int a,b,i,hcf;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
    int min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    if(hcf==1)
    {
        printf("the number is c0-prime ");
    }
    else{
        printf("the Enter number is not co- prime");
    }
    return 0;
}