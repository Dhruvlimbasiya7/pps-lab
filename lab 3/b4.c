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
}