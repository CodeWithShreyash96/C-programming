// Q1 WAP of two numbers using variable .
#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Before swapping value of a=%d & b=%d", a,b);

    c=a;
    a=b;
    b=c;

    printf("After swapping value of a=%d & b=%d", a,b);
    return 0;
}