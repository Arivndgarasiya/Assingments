#include<stdio.h>

int main(){
    int i,j,n=5;
    int x=n;
    int y=n;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++){

            if(j==x || j==y || i==n)
            
                printf("*");
                else
                printf(" ");
                
            
        }
        x--;
        j++;
        printf("\n");

    }
    
    return 0;
}