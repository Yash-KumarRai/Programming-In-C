#include <stdio.h>
int main()
{
    int y, m, r, d;
    printf ("Enter Number Of Days\n");
    scanf ("%d", &d);
    y= d/360;
    m= (d-(y*360))/30;
    r= d-(y*360+m*30);
    printf ("The Year is %d, Month is %d and the number of remaining days are %d", y, m, r, d);
    return 0;
}