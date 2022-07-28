// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

#include <stdio.h>

int main()
{
    int pri = 0, cur = 1, n, i, next = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (i = 1; 1; i++)
    {
        next = pri + cur;
        pri = cur;
        cur = next;
        if (next == n){

        

            printf("I found the number");
            //break;
        }
        if (next>n)
        {
            printf("i cannot found the number");
           // break;
        }
    }
    return 0;
}