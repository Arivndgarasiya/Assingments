//3. Write a program to swap values of two int variables

#include<stdio.h>

int main(){
    int a,b ,temp;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("thr swapping of two number is%d %d",a,b);
    return 0;
}