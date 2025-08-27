/*Write a program to check the given sides of a triangle are valid or not. If valid, do check if triangle is scalene
*/

#include <stdio.h>

int main() 
{
    int s1, s2, s3;
    printf("Enter the values of the sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2)) 
    {
        printf("Valid Triangle\n");
        if (s1 != s2 && s2 != s3 && s1 != s3) 
        {
            printf("It is a Scalene Triangle\n");
        } 
        else 
        {
            printf("It is NOT a Scalene Triangle\n");
        }
    } 
    else 
    {
        printf("Invalid Triangle\n");
    }
    return 0;
}
