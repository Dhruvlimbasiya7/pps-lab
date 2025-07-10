<<<<<<< HEAD
#include <stdio.h>
void main() 
{
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using conditional operators
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);
=======
#include <stdio.h>
void main() 
{
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using conditional operators
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}