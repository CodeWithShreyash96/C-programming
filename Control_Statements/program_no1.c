// check eligible for driving Lincese.
#include<stdio.h>
int main()
{
    int age;

    printf("Enter the age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("The person is eligible for driving license");
    }
    else
    {
        printf("The person is not eligible for driving license");
    }

    return 0;
}