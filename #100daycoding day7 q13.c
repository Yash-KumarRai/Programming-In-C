#include <stdio.h>

int main ()
{
    int year;
    
    printf ("ENTER YEAR: \n");
    scanf ("%d", &year);
    
    if ( (year%4==0 && year%100 !=0) || (year%400==0) )
    {
        printf ("Year is a LEAP YEAR");
    }
    
    else
    {
        printf ("Year is NOT a LEAP YEAR");
    }
    
    return 0;
}