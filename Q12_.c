//12. Write a program to check whether a given alphabet is in uppercase or lowercase

#include<stdio.h>

int main(){
    char ch;
    printf("Enter the Alpha bate \n");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("the Alphabate is Upper case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("the Alphabate is lower case");
    }
    
    return 0;
}