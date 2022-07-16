//16. Write a program to check whether a given character is an alphabet (uppercase), an 
//alphabet (lower case), a digit or a special character

#include<stdio.h>

int main(){
    char ch;
    printf("Enter the cherector\n");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {

    printf("the charector  is a Alphabet and it is Upper case ");
    }
    else if(ch>='a' && ch<='z' )
    {
        printf("the cherector is Aplhabate and it is lowr case ");
    }
    else
    {
        printf("the cherector is digit or spacial symbol");
    }
    return 0;
}
