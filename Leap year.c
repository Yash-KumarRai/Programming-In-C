//WAP to check if the given year is leap year or not

#include <stdio.h>
int main()
{
    int num;
    scanf ("%d", &num);
    if ((num%4)==0)
    {
        printf("Year is a leap year");
    }
    else
    {
        printf("Year is not a leap year");
    }
    return 0;
}