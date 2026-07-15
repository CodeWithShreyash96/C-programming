// if else statement //
// Q:- check the even odd number. //
#include<stdio.h>
int main()
{
    int a;

    printf("Enter the Number:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("The %d is even number",a);
    }
    else
    {
        printf("The %d is odd number",a);
    }
}