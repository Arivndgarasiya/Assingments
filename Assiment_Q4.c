//WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.

#include<stdio.h>

int main(){
    int Radius;
    float Area;
    printf("Enter the Radius of a circle\n");
    scanf("%d",&Radius);
    Area=3.14*Radius*Radius;
    printf("the Area of circle is %f having the radius is %d\n",Area,Radius);
    return 0;
}
