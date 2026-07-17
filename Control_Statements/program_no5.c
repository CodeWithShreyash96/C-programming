// if-else statement //
// check the Alphabate is uppercase or lowercase //
#include<stdio.h>
int main()
{
    char ch; 

    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("The Alphabate %c is uppercase");
    }
    else
    {
        printf("The Alphabate %c lowercase");
    }
    return 0;
}