//8. Write a program to find next Prime number of a given number


   #include<stdio.h>
   
   int main(){
    int n,t,i,a=0;
    printf("Enter the number \n");
    scanf("%d",&t);
    for(n=t;1;n++)

    {
        a=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            //break;
            a=1;
        }
        if(a==0)
        {
            printf("%d",n);
            break;
        }
    }
    return 0;
   }