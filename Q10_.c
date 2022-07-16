//10. Write a program to make the last digit of a number stored in a variable as zero. 
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>

int main(){
    int num, s;
    printf("Enter your number \n");
     scanf("%d",&num);
    s=num/100+num/10%10-num%10;
    printf("%d%d",num,s);
    return 0;
}