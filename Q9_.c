//. Write a program to find the greatest among three given numbers. Print number once 
//if the greatest number appears two or three times.

#include<stdio.h>

int main(){
    int a,b,c,k;
    printf("Enter the 3 numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b && a>c)
    {
        k=a;
    
    }
    else if(b>a && b>c)
    {
        k=b;
    }
    else{

        k=c;
    }
    printf("the greater number is %d",k);
    return 0;
}