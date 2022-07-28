//7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int main(){
    int i,n,a,b;
    printf("Enter the two nuber ");
    scanf("%d%d",&a,&b);

    for(n=a;n<=b;n++)
    {
        //count=0;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n){
        printf("%d\n",n);
        }
        
    }
    return 0;
}