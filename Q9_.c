//9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main(){
    int a;
    char b;
    float c;
    double d;
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));
    return 0;
}