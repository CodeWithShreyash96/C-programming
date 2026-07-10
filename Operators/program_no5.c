//  *Assignment Operator* //
#include<stdio.h>
int main()
{
    int a,b;

    printf("\n Enter the number a:");
    scanf("%d",&a);

    printf("\n Enter the number b");
    scanf("%d",&b);    

    printf("\n a=b  = %d", a=b);
    printf("\n a+=b = %d", a+=b);
    printf("\n a-=b = %d", a-=b);
    printf("\n a*=b = %d", a*=b);
    printf("\n a/=b = %d", a/=b);

    return 0;
}