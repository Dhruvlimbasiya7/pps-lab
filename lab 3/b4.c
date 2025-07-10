<<<<<<< HEAD
#include <stdio.h>

void main() 
{
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is odd or even using bitwise AND
    if (number & 1) 
    {
        printf("%d is odd.\n", number);
    } else {
        printf("%d is even.\n", number);
    }
=======
#include <stdio.h>

void main() 
{
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is odd or even using bitwise AND
    if (number & 1) 
    {
        printf("%d is odd.\n", number);
    } else {
        printf("%d is even.\n", number);
    }
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}