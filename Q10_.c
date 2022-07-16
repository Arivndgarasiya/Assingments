//10. Write a program which takes the cost price and selling price of a product from the 
//user. Now calculate and print profit or loss percentage

#include<stdio.h>

int main(){
    int cp,sp,profit,loss;
    printf("Enter cost price\n");
    scanf("%d",&cp);
    printf("Enetr selling price \n");
    scanf("%d",&sp);
    profit=sp-cp;
    loss=cp-sp;

    if(sp==cp)
    {
        printf("no loss and no profit\n");

    }
    else if(sp>cp)
    {
        printf("printf is %d",profit);
    }
    else{
        printf("loss is %d",loss);
    }
    return 0;
}