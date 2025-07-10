#include <stdio.h>
void main() 
{
    char marital_status, gender;
    int age;

    // Input: Marital status, gender, and age of the driver
    printf("Enter marital status (M for married, U for unmarried): ");
    scanf(" %c", &marital_status);

    printf("Enter gender (M for male, F for female): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    // Determine if the driver is to be insured
    if (marital_status == 'M') 
    {
        printf("The driver is insured.\n");
    } 
    else if (marital_status == 'U') 
    {
        if (gender == 'M' && age > 30) 
        {
            printf("The driver is insured.\n");
        } 
        else if (gender == 'F' && age > 25) 
        {
            printf("The driver is insured.\n");
        } else 
        {
            printf("The driver is not insured.\n");
        }
    } else {
        printf("The driver is not insured.\n");
    }
}