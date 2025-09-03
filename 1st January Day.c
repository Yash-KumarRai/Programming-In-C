#include <stdio.h>
int main() 
{
    
    int year, l, y, k, day = 0;

    printf("Enter The Year: \n");
    scanf("%d", &year);

    for (y = 1; y < year; y++) 
    {
        l = (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
        day = day + ((l == 1) ? 366 : 365);
    }

    k = day % 7;

    switch (k+1) 
    {
        case 0: 
            printf("1st January of %d is Sunday", year);
            break;
        case 1: 
            printf("1st January of %d is Monday", year);
            break;
        case 2: 
            printf("1st January of %d is Tuesday", year);
            break;
        case 3: 
            printf("1st January of %d is Wednesday", year);
            break;
        case 4: 
            printf("1st January of %d is Thursday", year);
            break;
        case 5: 
            printf("1st January of %d is Friday", year);
            break;
        case 6: 
            printf("1st January of %d is Saturday", year);
            break;
    }

    return 0;
}
