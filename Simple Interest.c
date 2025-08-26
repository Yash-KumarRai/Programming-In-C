#include <stdio.h>
int main()
{
    int p, r, t, si;
    printf ("Enter Principal\n");
    scanf ("%d", &p);
    printf ("Enter Rate\n");
    scanf ("%d", &r);
    printf ("Enter Time\n");
    scanf ("%d", &t);
    si= (p*r*t)/100;
    printf ("The Simple Interest for the given Principal %d, Rate %d and Time %d is %d", p, r, t, si);
    return 0;
}
