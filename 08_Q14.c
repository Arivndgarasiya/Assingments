#include<stdio.h>

int main(){
    int i,j,n=5;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    
        for(j=1;j<=n;j++)
        {
            if(j==1|| i==j||i==n)
            printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}