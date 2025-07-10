#include <stdio.h>
void main() 
{
    float weight, height, bmi;

    // Input weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Determine BMI category
    if (bmi < 15) 
    {
        printf("BMI: %.2f - Category: Starvation\n", bmi);
    } 
    else if (bmi >= 15.1 && bmi <= 17.5) 
    {
        printf("BMI: %.2f - Category: Anorexic\n", bmi);
    } 
    else if (bmi >= 17.6 && bmi <= 18.5) 
    {
        printf("BMI: %.2f - Category: Underweight\n", bmi);
    } 
    else if (bmi >= 18.6 && bmi <= 24.9) 
    {
        printf("BMI: %.2f - Category: Ideal\n", bmi);
    } 
    else if (bmi >= 25 && bmi <= 25.9) 
    {
        printf("BMI: %.2f - Category: Overweight\n", bmi);
    } 
    else if (bmi >= 30 && bmi <= 30.9) 
    {
        printf("BMI: %.2f - Category: Obese\n", bmi);
    } 
    else if (bmi >= 40) 
    {
        printf("BMI: %.2f - Category: Morbidly Obese\n", bmi);
    } 
    else {
        printf("BMI: %.2f - Category: Not categorized\n", bmi);
    }
}