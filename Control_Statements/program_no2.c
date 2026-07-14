// if-else statement //
#include<stdio.h>
int main()
{
    int m;

    printf("Enter The year:");
    scanf("%d",&m);

    if(m%4==0)
    {
        printf("The year is leap year");
    }
    else
    {
        printf("The year is not leap year");
    }
    return 0;
}