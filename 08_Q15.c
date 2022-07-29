#include<stdio.h>

int main(){
    int j,i,n=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==n-i+1 ||j==n||i==n){

                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}