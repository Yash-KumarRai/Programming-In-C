//WAP to check the given sides of a triangle are valid or not.

#include <stdio.h>

int main() 
{
    int s1, s2, s3;
    printf("Enter the values of the sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2)) 
    {
        printf("Valid Triangle\n");
    } 
    else 
    {
        printf("Invalid Triangle\n");
    }

    return 0;
}