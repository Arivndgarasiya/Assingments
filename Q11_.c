//11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
//out of 100 and passing marks is 33. Now display whether the candidate passed the 
//examination or failed

#include<stdio.h>

int main(){


int hindi,english,maths,science,sosci ,total;
printf("Enter hindi marks\n");
scanf("%d",&hindi);
 printf("Enter english marks\n");
scanf("%d",&english);
printf("Enter maths marks\n");
scanf("%d",&maths);
printf("Enter science marks\n");
scanf("%d",&science);
printf("Enter sosci marks\n");
scanf("%d",&sosci);

total=(hindi+english+maths+science+sosci)/5;
if(total<33 ||hindi<33 || english<33 || maths<33 || science<33 || sosci<33 )
{
    printf("your total marks is %d and you you are fail",total);

}
else{
    printf("your total marks is %d and you you are pass",total);
}


    return 0;
}