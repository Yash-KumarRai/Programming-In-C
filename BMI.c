#include <stdio.h>
int main()
{
    float weight, height, bmi;
    
    printf ("Enter Weight in kg: \n");
    scanf ("%f", &weight);
    printf ("Enter Height in m: \n");
    scanf ("%f", &height);
    
    bmi= weight/(height*height);
    
    printf ("The BMI for the Weight %f and Height %f is %f \n", weight, height, bmi);
    
    if (bmi<=15)
    {
        printf ("The value is starvation");
    }
    else if (15.1<=bmi && bmi<=17.5)
    {
        printf ("The value is anorexic");
    }
    else if (17.6<=bmi && bmi<=18.5)
    {
        printf ("The value is underweight");
    }
    else if (18.6<=bmi && bmi<=24.9)
    {
        printf ("The value is ideal");
    }
    else if (25<=bmi && bmi<=29.9)
    {
        printf ("The value is overweight");
    }
    else 
    {
        printf ("The value is obese");
    }
    
    return 0;
}