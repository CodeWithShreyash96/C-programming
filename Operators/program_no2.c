// Q1 WAP of two numbers using third variable .
#include<stdio.h>
int main()
{
    int a=95, b=78;

    printf("Before Swapping value a=%d and b=%d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping value a=%d and b=%d",a,b);
}