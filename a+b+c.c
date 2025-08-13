#include <stdio.h>
int main()
{
    int num1,num2,num3,s;
    printf("Enter 1st Number");
    scanf("%d",&num1);
    printf("Enter 2nd Number");
    scanf("%d",&num2);
    printf("Enter 3rd Number");
    scanf("%d",&num3);
    s=num1+num2+num3;
    printf("sum of %d and %d and %d is %d",num1,num2,num3,s);
    return 0;
}